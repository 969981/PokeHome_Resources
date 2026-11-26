//! Native HOME display type index only. No implicit PKM TypeID conversion.
use super::{Error,ELF,HomeImageResourceCore};
use serde::Deserialize;
use std::{collections::{HashMap,HashSet},path::PathBuf};
pub const LANGUAGES:[&str;10]=["JPN","English","French","German","Italian","Korean","LATAM","Simp_Chinese","Spanish","Trad_Chinese"];
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub enum TypeKind{Symbol,Text}
impl TypeKind{pub fn as_str(self)->&'static str{match self{Self::Symbol=>"symbol",Self::Text=>"text"}}}
#[derive(Debug,Deserialize)]
pub struct TypeAsset{
    pub native_display_index:u8,pub message_label_id:u8,pub kind:String,pub language:String,
    pub localized_name:String,pub raw_name:String,pub path:String,pub stored_png_sha256:String,
    pub rgba_sha256:String,pub status:String,
}
#[derive(Deserialize)]
struct TypeIndex{schema_version:u32,home_version:String,elf_sha256:String,distinct_rgba:usize,rows:Vec<TypeAsset>}
pub struct TypeImageResolver{rows:Vec<TypeAsset>,lookup:HashMap<(u8,String,String),usize>}
impl TypeImageResolver{
    pub fn from_json(text:&str)->Result<Self,Error>{
        let index:TypeIndex=serde_json::from_str(text).map_err(|e|Error::InvalidIndex(e.to_string()))?;
        if index.schema_version!=1 || index.home_version!="4.1.0" || index.elf_sha256!=ELF || index.rows.len()!=360 || index.distinct_rgba!=179{return Err(Error::InvalidIndex("type version/SHA/count".into()));}
        let mut lookup=HashMap::new();let mut pixels=HashSet::new();let mut hashes=HashMap::new();
        let hex64=|s:&str|s.len()==64 && s.bytes().all(|b|b.is_ascii_hexdigit());
        for (i,r) in index.rows.iter().enumerate(){
            if r.native_display_index>=18 || r.message_label_id!=r.native_display_index+u8::from(r.native_display_index>=9)
                || !LANGUAGES.contains(&r.language.as_str()) || !matches!(r.kind.as_str(),"symbol"|"text")
                || r.status!="static_native_display_selector_exact" || !hex64(&r.rgba_sha256) || !hex64(&r.stored_png_sha256)
                || r.path!=format!("core/types/pixels/{}.png",r.rgba_sha256)
                || lookup.insert((r.native_display_index,r.kind.clone(),r.language.clone()),i).is_some(){
                return Err(Error::InvalidIndex("type row domain/duplicate/path".into()));
            }
            pixels.insert(r.path.as_str());
            if let Some(prev)=hashes.insert(r.path.as_str(),r.stored_png_sha256.as_str()){
                if prev!=r.stored_png_sha256{return Err(Error::InvalidIndex("type shared PNG hash mismatch".into()));}
            }
        }
        if pixels.len()!=179{return Err(Error::InvalidIndex("type pixel count".into()));}
        Ok(Self{rows:index.rows,lookup})
    }
    pub fn assets(&self)->&[TypeAsset]{&self.rows}
    pub fn resolve(&self,native_display_index:u8,kind:TypeKind,language:&str)->Option<&TypeAsset>{
        self.lookup.get(&(native_display_index,kind.as_str().into(),language.into())).map(|&i|&self.rows[i])
    }
    pub fn resolve_message_label(&self,label:u8,kind:TypeKind,language:&str)->Option<&TypeAsset>{
        match label{0..=8=>self.resolve(label,kind,language),10..=18=>self.resolve(label-1,kind,language),_=>None}
    }
}
impl HomeImageResourceCore{
    pub fn type_assets(&self)->&[TypeAsset]{self.types.assets()}
    pub fn resolve_type_display(&self,index:u8,kind:TypeKind,language:&str)->Result<Option<PathBuf>,Error>{
        self.types.resolve(index,kind,language).map(|r|self.asset_path(&r.path)).transpose()
    }
    pub fn resolve_type_message_label(&self,label:u8,kind:TypeKind,language:&str)->Result<Option<PathBuf>,Error>{
        self.types.resolve_message_label(label,kind,language).map(|r|self.asset_path(&r.path)).transpose()
    }
}
