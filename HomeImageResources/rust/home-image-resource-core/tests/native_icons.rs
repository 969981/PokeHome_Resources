use home_image_resource_core::*;
use std::path::PathBuf;
fn package()->HomeImageResourceCore{
    let root=std::env::var_os("HOME_IMAGE_PACKAGE").map(PathBuf::from).unwrap_or_else(||PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../.."));
    HomeImageResourceCore::open(root).unwrap()
}
fn ph4(origin:u8,language:u8)->Vec<u8>{
    let mut b=vec![0;0xe0];b[0]=4;b[0xe]=0xd0;b[0x10]=0xc4;b[0xa3]=origin;b[0xa5]=language;b[0xd8..].fill(8);b
}
#[test]
fn all_byte_origin_cases(){
    let mut expected=[2u8;256];
    for (inputs,generation) in [
        (&[24,25,26,27,28,29][..],0),(&[30,31,32,33],1),(&[34],4),(&[35,36,37,38,39,40,41],3),
        (&[42,43],5),(&[44,45],6),(&[47],8),(&[48,49],7),(&[50,51],9),(&[52],10),(&[56,57],11)
    ]{for &i in inputs{expected[i]=generation;}}
    for i in 0..256{assert_eq!(origin_generation(OriginVersionCode(i as u8)),expected[i]);}
}
#[test]
fn all_internal_codes_and_fallback(){
    let e=[0,42,43,44,45,48,49,47,50,51,52,56,57];
    for i in 0..13{assert_eq!(native_internal_game_version(HomeInternalGameCode(i)),NativeVersionCode(e[i as usize]));}
    assert_eq!(native_internal_game_version(HomeInternalGameCode(13)),NativeVersionCode(0));
    assert_eq!(native_internal_game_version(HomeInternalGameCode(u32::MAX)),NativeVersionCode(0));
    for (i,v) in [1,1,2,3,4,5,7,8,9,10,11].iter().enumerate(){assert_eq!(native_internal_language(i as u32),PokemonLanguageId(*v));}
    assert_eq!(native_internal_language(11),PokemonLanguageId(2));
}
#[test]
fn ph4_fields_and_asset_paths(){
    let core=package();let b=ph4(51,9);
    let fields=Ph4::parse(&b).unwrap().native_icon_inputs().unwrap();
    assert_eq!(fields.origin_version,OriginVersionCode(51));assert_eq!(fields.language,PokemonLanguageId(9));
    assert_eq!(core.resolve_ph4_language(&b).unwrap().unwrap().raw_name,"icon_lang_chs_00^q");
    assert_eq!(core.resolve_ph4_origin_mark(&b,OriginMarkStyle::Color).unwrap().raw_name,"icon_generation_09_color^t");
    for i in 0..=255 {for style in [OriginMarkStyle::Normal,OriginMarkStyle::Color]{assert!(core.resolve_origin_mark(OriginVersionCode(i),style).unwrap().path.is_file());}}
    for i in 0..=11{assert_eq!(core.resolve_native_language(PokemonLanguageId(i)).unwrap().is_some(),i!=0&&i!=6);}
    let mut bad=b.clone();bad[0x1e]=1;assert!(matches!(core.resolve_ph4_language(&bad),Err(Error::UnsupportedBadEgg)));
    assert!(core.resolve_ph4_language(&b[..20]).is_err());
}
#[test]
fn independent_version_domains(){
    let core=package();
    for i in 0..25{assert!(core.resolve_native_version_display(VersionDisplayIndex(i)).unwrap().unwrap().path.is_file());}
    assert!(core.resolve_native_version_display(VersionDisplayIndex(25)).unwrap().is_none());
    assert_eq!(core.resolve_native_game_version(NativeVersionCode(51)).unwrap().raw_name,"icon_version_0111^q");
    assert_eq!(core.resolve_selected_game(HomeInternalGameCode(10)).unwrap().raw_name,"icon_version_0130^q");
    assert_eq!(core.resolve_native_version_display(VersionDisplayIndex(14)).unwrap().unwrap().raw_name,"icon_version_0070^q");
    assert_eq!(core.resolve_native_version_display(VersionDisplayIndex(15)).unwrap().unwrap().raw_name,"icon_version_0080^q");
    assert_eq!(core.resolve_native_game_version(NativeVersionCode(255)).unwrap().raw_name,"icon_version_9999^q");
    let mut row=[0u8;0x50];row[0x1c]=9;row[0x48..0x4c].copy_from_slice(&19u32.to_le_bytes());row[0x4c..0x50].copy_from_slice(&20u32.to_le_bytes());
    let r=UiIconRow::from_snapshot(&row).unwrap();assert_eq!(r.language,PokemonLanguageId(9));
    assert_eq!(r.version_a,VersionDisplayIndex(19));assert_eq!(r.version_b,VersionDisplayIndex(20));assert!(UiIconRow::from_snapshot(&row[..0x4f]).is_err());
}
