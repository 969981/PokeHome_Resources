//! Static read-only HOME 4.1.0 PH4 image model. No mutation, network or decryption.
use serde::Deserialize;
use std::{collections::{BTreeMap,HashSet},path::{Path,PathBuf}};
mod type_image;
pub use type_image::{TypeImageResolver,TypeAsset,TypeKind,LANGUAGES};
const ELF:&str="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a";
const MISSING:&str="0000_000_uk_n_00000000_f_n";
const ORIGIN:[u8;12]=[1,1,2,2,0,3,4,4,5,5,7,6];
const LENGTH:[usize;8]=[0,0x3f,0x48,0x40,0x2f,0x4a,0x19,0x40];

#[derive(Debug,PartialEq,Eq)]
pub enum Error { InvalidPh4(&'static str), UnsupportedBadEgg, UnsupportedDefaultSide(u8), UnsupportedBall(u32), InvalidIndex(String), MissingAsset(String) }
impl std::fmt::Display for Error {fn fmt(&self,f:&mut std::fmt::Formatter<'_>)->std::fmt::Result{write!(f,"{self:?}")}}
impl std::error::Error for Error {}
fn u16le(b:&[u8],p:usize)->u16{u16::from_le_bytes([b[p],b[p+1]])}
fn u32le(b:&[u8],p:usize)->u32{u32::from_le_bytes(b[p..p+4].try_into().unwrap())}

#[derive(Debug,Clone,PartialEq,Eq)]
pub struct Request {pub species:u32,pub form:u32,pub gender:u32,pub shiny:bool,pub is_egg:bool,pub encryption_constant:u32,pub variant:u32,pub decoration:u32}
impl Request {
    pub fn from_core(c:&[u8])->Result<Self,Error>{
        if c.len()!=0xc4{return Err(Error::InvalidPh4("Core length"));}
        if c[0xc]!=0{return Err(Error::UnsupportedBadEgg);}
        let species=u16le(c,0xd) as u32;
        let mut form=if species==414{0}else{u16le(c,0x22) as u32};
        let mut variant=0;
        if species==890 && form==1{form=0;variant=2;}
        let x=u32le(c,0xf)^u32le(c,0x1a);
        Ok(Self{species,form,gender:c[0x21] as u32,shiny:((x&0xfff0)^(x>>16))<16,is_egg:c[0x66]!=0,encryption_constant:u32le(c,8),variant,decoration:if species==869{u32le(c,0x94)&255}else{u32::MAX}})
    }
}
pub struct Ph4<'a>{core:&'a [u8],sides:BTreeMap<u8,&'a [u8]>}
impl<'a> Ph4<'a>{
    /// Only standalone decoded PH4, with strict length and padding checks.
    pub fn parse(b:&'a [u8])->Result<Self,Error>{
        if b.len()<0xe0 || u16le(b,0)!=4 || u16le(b,0x10)!=0xc4{return Err(Error::InvalidPh4("header/Core"));}
        let n=u16le(b,0xe) as usize;
        if n==0 || n%16!=0 || b.len()!=0x10+n{return Err(Error::InvalidPh4("payload length"));}
        let end=0xd8+u16le(b,0xd6) as usize;
        if end>b.len(){return Err(Error::InvalidPh4("SideData length"));}
        let pad=16-(end-0x10)%16;
        if b.len()-end!=pad || b[end..].iter().any(|&v|v as usize!=pad){return Err(Error::InvalidPh4("padding"));}
        let mut sides=BTreeMap::new();let mut p=0xd8;
        while p<end{
            if end-p<3{return Err(Error::InvalidPh4("TLV header"));}
            let tag=b[p];let n=u16le(b,p+1) as usize;
            if n==0 || p+3+n>end{return Err(Error::InvalidPh4("TLV size"));}
            if (1..=7).contains(&tag) && n!=LENGTH[tag as usize]{return Err(Error::InvalidPh4("known TLV size"));}
            if sides.insert(tag,&b[p+3..p+3+n]).is_some(){return Err(Error::InvalidPh4("duplicate tag"));}
            p+=3+n;
        }
        Ok(Self{core:&b[0x12..0xd6],sides})
    }
    pub fn request(&self)->Result<Request,Error>{Request::from_core(self.core)}
    pub fn side_ball(&self,tag:u8)->Result<u8,Error>{
        if self.core[0xc]!=0{return Err(Error::UnsupportedBadEgg);}
        if tag==6{return Ok(0);}
        let off=match tag{1=>0x36,2=>0x3f,3=>0x27,4=>0x26,5=>0x1b,7=>0x37,_=>return Err(Error::UnsupportedDefaultSide(tag))};
        self.sides.get(&tag).map(|b|b[off]).ok_or(Error::UnsupportedDefaultSide(tag))
    }
    pub fn cross_group_ball(&self)->Result<u32,Error>{
        if self.core[0xc]!=0{return Err(Error::UnsupportedBadEgg);}
        let v=self.core[0x91];let preferred=if (42..=53).contains(&v){ORIGIN[(v-42) as usize]}else{0};
        for tag in [preferred,1,2]{
            if tag!=0 && self.sides.contains_key(&tag){let b=self.side_ball(tag)?;return Ok(if b==0{27}else{b as u32});}
        }
        Ok(27)
    }
}
pub fn same_group_filter(ball:u32,target:u32)->u32{
    if ball==0{return 0;}
    match target{1|2=>if ball<=16 && ((0x1101e_u32>>ball)&1)!=0{ball}else{27},7=>if (28..=37).contains(&ball){ball}else{27},3..=6|8..=10=>ball.min(27),_=>ball}
}
#[derive(Debug,Deserialize)]
pub struct PokemonAsset{pub key:[u32;7],pub stem:String,pub icon:String,pub portrait:String}
#[derive(Debug,Deserialize)]
pub struct BallAsset{pub input:u32,pub item_id:u32,pub raw_name:String,pub path:String}
#[derive(Deserialize)] struct BallRows{rows:Vec<BallAsset>}
#[derive(Deserialize)] struct Index{schema_version:u32,home_version:String,elf_sha256:String,pokemon:Vec<PokemonAsset>,ball_display:BallRows}
pub struct HomeImageResourceCore{root:PathBuf,index:Index,species:BTreeMap<u32,Vec<usize>>,types:TypeImageResolver}
#[derive(Debug)]
pub struct Resolved<'a>{pub pokemon:&'a PokemonAsset,pub ball:&'a BallAsset,pub icon_path:PathBuf,pub portrait_path:PathBuf,pub ball_path:PathBuf}
impl HomeImageResourceCore{
    pub fn open(root:impl AsRef<Path>)->Result<Self,Error>{
        let root=root.as_ref().canonicalize().map_err(|e|Error::InvalidIndex(e.to_string()))?;
        let text=std::fs::read_to_string(root.join("core/resource_core.json")).map_err(|e|Error::InvalidIndex(e.to_string()))?;
        let index:Index=serde_json::from_str(&text).map_err(|e|Error::InvalidIndex(e.to_string()))?;
        if index.schema_version!=1 || index.home_version!="4.1.0" || index.elf_sha256!=ELF || index.pokemon.len()!=3506 || index.ball_display.rows.len()!=38{return Err(Error::InvalidIndex("version/count/SHA".into()));}
        let mut keys=HashSet::new();let mut stems=HashSet::new();let mut species=BTreeMap::<u32,Vec<usize>>::new();
        for (i,r) in index.pokemon.iter().enumerate(){
            if !keys.insert(r.key)||!stems.insert(r.stem.as_str()){return Err(Error::InvalidIndex("duplicate key/stem".into()));}
            species.entry(r.key[0]).or_default().push(i);
        }
        let ids:HashSet<_>=index.ball_display.rows.iter().map(|r|r.input).collect();
        if ids.len()!=38 || !(0..=37).all(|i|ids.contains(&i)) || !stems.contains(MISSING){return Err(Error::InvalidIndex("ball domain or missing stem".into()));}
        let type_text=std::fs::read_to_string(root.join("core/types/index.json")).map_err(|e|Error::InvalidIndex(e.to_string()))?;
        let types=TypeImageResolver::from_json(&type_text)?;
        Ok(Self{root,index,species,types})
    }
    pub fn pokemon_assets(&self)->&[PokemonAsset]{&self.index.pokemon}
    pub fn ball_assets(&self)->&[BallAsset]{&self.index.ball_display.rows}
    pub fn asset_path(&self,rel:&str)->Result<PathBuf,Error>{
        let p=Path::new(rel);
        if p.is_absolute() || p.components().any(|c|!matches!(c,std::path::Component::Normal(_))) || p.extension().and_then(|x|x.to_str())!=Some("png"){return Err(Error::MissingAsset(rel.into()));}
        let full=self.root.join(p).canonicalize().map_err(|_|Error::MissingAsset(rel.into()))?;
        if !full.starts_with(&self.root)||!full.is_file(){return Err(Error::MissingAsset(rel.into()));}Ok(full)
    }
    pub fn select(&self,q:&Request,view:u32)->&PokemonAsset{
        let (s,f,c,g,v,d)=if q.is_egg{(0,u32::from(q.species==490),0,2,0,0)}else{(q.species,q.form,u32::from(q.shiny),q.gender,q.variant,q.decoration)};
        let Some(indices)=self.species.get(&s) else{return self.index.pokemon.iter().find(|r|r.stem==MISSING).unwrap();};
        let mut rows:Vec<_>=indices.iter().map(|&i|&self.index.pokemon[i]).collect();
        for (col,req) in [(1,f),(2,c),(3,view&1)]{
            let chosen=if rows.iter().any(|r|r.key[col]==req){req}else if rows.iter().any(|r|r.key[col]==0){0}else{rows[0].key[col]};
            rows.retain(|r|r.key[col]==chosen);
        }
        for (v,d) in [(v,d),(0,d),(v,0),(0,0)]{
            let vv=match v{0|1=>0,2=>1,_=>u32::MAX};
            for r in &rows{
                let gender=match g{0=>matches!(r.key[4],0|3|4),1=>matches!(r.key[4],1|3|5),2=>r.key[4]==2,_=>false};
                if gender && r.key[5]==vv && (s!=869||r.key[6]==d){return r;}
            }
        }
        rows[0]
    }
    pub fn ball_display(&self,n:u32)->Result<&BallAsset,Error>{self.index.ball_display.rows.iter().find(|r|r.input==n).ok_or(Error::UnsupportedBall(n))}
    pub fn resolve_ph4_cross_group(&self,b:&[u8],view:u32)->Result<Resolved<'_>,Error>{
        let p=Ph4::parse(b)?;let q=p.request()?;let pokemon=self.select(&q,view);let ball=self.ball_display(p.cross_group_ball()?)?;
        Ok(Resolved{pokemon,ball,icon_path:self.asset_path(&pokemon.icon)?,portrait_path:self.asset_path(&pokemon.portrait)?,ball_path:self.asset_path(&ball.path)?})
    }
}
