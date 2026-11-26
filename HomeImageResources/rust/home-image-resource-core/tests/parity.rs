use home_image_resource_core::*;
fn record(s:u16,f:u16,o:u8,sides:&[(u8,usize,u8)])->Vec<u8>{
    let mut b=vec![0u8;0xd8];b[0]=4;b[0x10]=0xc4;b[0x1f..0x21].copy_from_slice(&s.to_le_bytes());b[0x34..0x36].copy_from_slice(&f.to_le_bytes());b[0xa3]=o;
    for &(t,n,ball) in sides{b.push(t);b.extend_from_slice(&(n as u16).to_le_bytes());let mut p=vec![0;n];let off=match t{1=>0x36,2=>0x3f,3=>0x27,4=>0x26,5=>0x1b,7=>0x37,_=>0};p[off]=ball;b.extend(p);}
    let s=(b.len()-0xd8) as u16;b[0xd6..0xd8].copy_from_slice(&s.to_le_bytes());let pad=16-(b.len()-0x10)%16;b.extend(vec![pad as u8;pad]);let n=(b.len()-0x10) as u16;b[0xe..0x10].copy_from_slice(&n.to_le_bytes());b
}
#[test] fn ph4_and_ball(){
    let b=record(25,0,52,&[(1,0x3f,4),(7,0x40,37)]);let p=Ph4::parse(&b).unwrap();assert_eq!(p.request().unwrap().species,25);assert_eq!(p.cross_group_ball().unwrap(),37);assert_eq!(p.side_ball(2),Err(Error::UnsupportedDefaultSide(2)));
    let b=record(25,0,53,&[(6,0x19,0),(1,0x3f,4)]);assert_eq!(Ph4::parse(&b).unwrap().cross_group_ball().unwrap(),27);
    let b=record(25,0,42,&[(1,0x3f,0),(2,0x48,4)]);assert_eq!(Ph4::parse(&b).unwrap().cross_group_ball().unwrap(),27);
    let b=record(25,0,42,&[]);assert_eq!(Ph4::parse(&b).unwrap().cross_group_ball().unwrap(),27);
}
#[test] fn strict_and_special(){
    let mut b=record(890,1,42,&[]);let q=Ph4::parse(&b).unwrap().request().unwrap();assert_eq!((q.form,q.variant),(0,2));b[0x1e]=1;assert_eq!(Ph4::parse(&b).unwrap().request(),Err(Error::UnsupportedBadEgg));*b.last_mut().unwrap()=0;assert!(Ph4::parse(&b).is_err());
    let b=record(25,0,42,&[(1,0x3f,4),(1,0x3f,4)]);assert!(Ph4::parse(&b).is_err());
    let b=record(414,9,42,&[]);assert_eq!(Ph4::parse(&b).unwrap().request().unwrap().form,0);
    let b=record(25,0x101,42,&[]);assert_eq!(Ph4::parse(&b).unwrap().request().unwrap().form,0x101);
    assert_eq!(same_group_filter(37,3),27);assert_eq!(same_group_filter(37,7),37);assert_eq!(same_group_filter(4,7),27);
}
#[test] fn repository_asset_parity(){
    let root=std::env::var_os("HOME_IMAGE_PACKAGE").expect("HOME_IMAGE_PACKAGE required");
    let core=HomeImageResourceCore::open(root).unwrap();
    for row in core.pokemon_assets(){let k=row.key;let q=Request{species:k[0],form:k[1],shiny:k[2]!=0,gender:[0,1,2,0,0,1][k[4] as usize],variant:if k[5]==0{0}else{2},decoration:k[6],is_egg:false,encryption_constant:0};assert_eq!(core.select(&q,k[3]).stem,row.stem);core.asset_path(&row.icon).unwrap();core.asset_path(&row.portrait).unwrap();}
    for row in core.ball_assets(){core.asset_path(&row.path).unwrap();assert_eq!(core.ball_display(row.input).unwrap().raw_name,row.raw_name);}
    let b=record(25,0,52,&[(7,0x40,37)]);assert_eq!(core.resolve_ph4_cross_group(&b,0).unwrap().ball.input,37);
    let b=record(9999,0,42,&[]);assert_eq!(core.resolve_ph4_cross_group(&b,0).unwrap().pokemon.stem,"0000_000_uk_n_00000000_f_n");
    assert!(core.asset_path("../outside.png").is_err());
    println!("3506 selector rows, 3506 icon paths, 3506 portrait paths, 38 ball paths verified");
}
