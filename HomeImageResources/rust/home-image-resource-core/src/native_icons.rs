//! Native icon selector domain adapters; read-only static HOME 4.1.0.
//! Runtime color/tint and UI row producers remain outside this contract.
use super::{Error,HomeImageResourceCore,Ph4};
use std::path::PathBuf;

const LANGUAGE:[(&str,&str);10]=[
    ("icon_lang_jpn_00^q","languages/switch/a644da5fbdc41284a974303142ac7f6c1f892adb.png"),
    ("icon_lang_eng_00^q","languages/switch/745895794371887aa6c20d0b8c274e247349c27f.png"),
    ("icon_lang_fra_00^q","languages/switch/dcea82bfc53addeefbaeb18de429963abc3832ca.png"),
    ("icon_lang_ger_00^q","languages/switch/c4de034777176914d390a02c7aadd5bdea1ef3c4.png"),
    ("icon_lang_ita_00^q","languages/switch/9d79ff8c9726a7e6de70c701d4e828291b40fa82.png"),
    ("icon_lang_kor_00^q","languages/switch/ef2b89d61326398e06feecadec7c722732ed75c3.png"),
    ("icon_lang_spa_00^q","languages/switch/8c4f1993447cd2aa52ce3a451a7d8eb6871c5632.png"),
    ("icon_lang_chs_00^q","languages/switch/557118a7f77d054edb9ff8dad7f8847bc57af0e9.png"),
    ("icon_lang_cht_00^q","languages/switch/0eaee8c9d44355f5a478beeb87b3fa5a5e0bce47.png"),
    ("icon_lang_ltm_00^q","languages/switch/d82de8e224fea2f65d939cafe58a2b544cc8953b.png"),
];
const VERSION:[(&str,&str);25]=[
    ("icon_version_9999^q","origins/switch/fec6498a0af1ad7794b1b1facea37477ffe58e96.png"),
    ("icon_version_0000^q","origins/switch/ed163951dfadc64db3320c3073b16f3e5923c411.png"),
    ("icon_version_0001^q","origins/switch/e794e5e11b4758d1b5b03c55664dcb0acabcbd99.png"),
    ("icon_version_0010^q","origins/switch/b92fd92d28e263cc348df3a14939daec4405d9ce.png"),
    ("icon_version_0011^q","origins/switch/03a1e5d73b72061cb02c152684361f629b389791.png"),
    ("icon_version_0020^q","origins/switch/31f3159a51293fc2007052776b1277dbeb18b9db.png"),
    ("icon_version_0021^q","origins/switch/a870804d6213edd2184682d4dee2b898eeb203f8.png"),
    ("icon_version_0030^q","origins/switch/551679b846d742e8d12651676ee9496514106ca9.png"),
    ("icon_version_0031^q","origins/switch/8c6c7e921d25f2bf35c1c66bcf1d6cf02050333e.png"),
    ("icon_version_0040^q","origins/switch/8fcc454ca3da6997b9246f6d8e8e377a93cdf5e7.png"),
    ("icon_version_0041^q","origins/switch/b4fa27a9a255c05ffd620d36a976d4cb5c7e9a96.png"),
    ("icon_version_0050^q","origins/switch/c5d01df029f7b7d7a83dc63e6fb9eb620e8ad88d.png"),
    ("icon_version_0051^q","origins/switch/2d34c750b77a2575956946796a2ae30f0894ff03.png"),
    ("icon_version_0060^q","origins/switch/3079849e242bd73e01ebc7ebca55b5ada35c1e61.png"),
    ("icon_version_0070^q","origins/switch/a43542bcd73af237428beaec13e36611f78714e5.png"),
    ("icon_version_0080^q","origins/switch/69e21f1ea99e1f1ddef4ddb8c465bd3189a1a2c9.png"),
    ("icon_version_0100^q","origins/switch/1fc0bbc72e75d3aca6dc317fc4de599da3346c03.png"),
    ("icon_version_0101^q","origins/switch/66fc88c6a40d058f67233d9187ebb76b0dc04113.png"),
    ("icon_version_0090^q","origins/switch/e17312c7de155ab8dc41f081e571b84371c8f7e1.png"),
    ("icon_version_0110^q","origins/switch/e4fb8bdca03060ea74e2ad3ce5c24e15c9ad9eb1.png"),
    ("icon_version_0111^q","origins/switch/203557ab8d10d422a444abb6f8c4eb179823cadd.png"),
    ("icon_version_0120^q","origins/switch/59c33949cdd901cf171b0af1c41e031fc21a7cde.png"),
    ("icon_version_0130^q","origins/switch/0b95a6edbd9582848ca93c2f2cf7ecf580e000d7.png"),
    ("icon_version_0140^q","origins/switch/8cf842845eef41b85023162a3721f34bac7b27eb.png"),
    ("icon_version_0141^q","origins/switch/9072ee1d120c8be8c289bb46d76bc5914e8465b2.png"),
];
const LANGUAGE_INDEX:[usize;11]=[0,1,2,4,3,9,6,5,7,8,9];
const INTERNAL_LANGUAGE:[u8;11]=[1,1,2,3,4,5,7,8,9,10,11];
const INTERNAL_GAME_VERSION:[u8;13]=[0,42,43,44,45,48,49,47,50,51,52,56,57];
const VERSION_INDEX:[u8;34]=[1,2,4,3,0,0,5,6,7,8,13,0,0,0,0,0,0,0,9,10,11,12,0,18,16,17,19,20,22,21,0,0,23,24];
const ORIGIN_TEXTURE:[u8;12]=[2,3,1,0,6,5,4,8,7,9,10,11];

#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct PokemonLanguageId(pub u8);
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct OriginVersionCode(pub u8);
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct HomeInternalGameCode(pub u32);
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct NativeVersionCode(pub u8);
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct VersionDisplayIndex(pub u32);
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub enum OriginMarkStyle{Normal,Color}
#[derive(Debug,Clone,PartialEq,Eq)]
pub struct NativeIconAsset{pub raw_name:String,pub path:PathBuf}
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct Ph4IconInputs{pub language:PokemonLanguageId,pub origin_version:OriginVersionCode}
/// UI snapshot, not a PH4 record or a producer model. A and B intentionally unnamed.
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub struct UiIconRow{pub language:PokemonLanguageId,pub version_a:VersionDisplayIndex,pub version_b:VersionDisplayIndex}

impl Ph4<'_>{
    pub fn native_icon_inputs(&self)->Result<Ph4IconInputs,Error>{
        if self.core[0xc]!=0{return Err(Error::UnsupportedBadEgg);}
        Ok(Ph4IconInputs{language:PokemonLanguageId(self.core[0x93]),origin_version:OriginVersionCode(self.core[0x91])})
    }
}
impl UiIconRow{
    pub fn from_snapshot(row:&[u8])->Result<Self,Error>{
        if row.len()!=0x50{return Err(Error::InvalidIndex("UI snapshot must be 0x50 bytes".into()));}
        let read=|off:usize|u32::from_le_bytes(row[off..off+4].try_into().unwrap());
        Ok(Self{language:PokemonLanguageId(row[0x1c]),version_a:VersionDisplayIndex(read(0x48)),version_b:VersionDisplayIndex(read(0x4c))})
    }
}
/// 0x6A6F8: internal locale to native Pokémon language input, not UI locale names.
pub fn native_internal_language(input:u32)->PokemonLanguageId{
    PokemonLanguageId(INTERNAL_LANGUAGE.get(input as usize).copied().unwrap_or(2))
}
/// 0x6AF80, exact 13-byte table with zero fallback.
pub fn native_internal_game_version(input:HomeInternalGameCode)->NativeVersionCode{
    NativeVersionCode(INTERNAL_GAME_VERSION.get(input.0 as usize).copied().unwrap_or(0))
}
/// 0x2D5164, version code conversion; explicit raw version domain.
pub fn native_version_display(input:NativeVersionCode)->VersionDisplayIndex{
    VersionDisplayIndex(input.0.checked_sub(24).and_then(|i|VERSION_INDEX.get(i as usize)).copied().unwrap_or(0) as u32)
}
/// 0x105790, complete byte-input model. Do not use on arbitrary wide integers.
pub fn origin_generation(input:OriginVersionCode)->u8{
    match input.0 {
        24..=29=>0,30..=33=>1,34=>4,35..=41=>3,42..=43=>5,44..=45=>6,
        47=>8,48..=49=>7,50..=51=>9,52=>10,56..=57=>11,_=>2
    }
}
impl HomeImageResourceCore{
    fn native_icon_asset(&self,key:&str,path:&str)->Result<NativeIconAsset,Error>{
        Ok(NativeIconAsset{raw_name:key.into(),path:self.asset_path(path)?})
    }
    pub fn resolve_native_language(&self,input:PokemonLanguageId)->Result<Option<NativeIconAsset>,Error>{
        if input.0==6 || !(1..=11).contains(&input.0){return Ok(None);}
        let (key,path)=LANGUAGE[LANGUAGE_INDEX[(input.0-1) as usize]];
        self.native_icon_asset(key,path).map(Some)
    }
    pub fn resolve_native_version_display(&self,input:VersionDisplayIndex)->Result<Option<NativeIconAsset>,Error>{
        let Some(&(key,path))=VERSION.get(input.0 as usize) else{return Ok(None);};
        self.native_icon_asset(key,path).map(Some)
    }
    pub fn resolve_native_game_version(&self,input:NativeVersionCode)->Result<NativeIconAsset,Error>{
        let i=native_version_display(input);
        self.resolve_native_version_display(i)?.ok_or(Error::InvalidIndex("version conversion".into()))
    }
    pub fn resolve_selected_game(&self,input:HomeInternalGameCode)->Result<NativeIconAsset,Error>{
        self.resolve_native_game_version(native_internal_game_version(input))
    }
    pub fn resolve_origin_mark(&self,input:OriginVersionCode,style:OriginMarkStyle)->Result<NativeIconAsset,Error>{
        let index=ORIGIN_TEXTURE[origin_generation(input) as usize];
        let (folder,suffix)=match style{OriginMarkStyle::Normal=>("normal",""),OriginMarkStyle::Color=>("color","_color")};
        let key=format!("icon_generation_{index:02}{suffix}^t");
        let path=format!("research/origin_swizzle/{folder}/{index:02}.png");
        self.native_icon_asset(&key,&path)
    }
    pub fn resolve_ph4_language(&self,plaintext:&[u8])->Result<Option<NativeIconAsset>,Error>{
        self.resolve_native_language(Ph4::parse(plaintext)?.native_icon_inputs()?.language)
    }
    pub fn resolve_ph4_origin_mark(&self,plaintext:&[u8],style:OriginMarkStyle)->Result<NativeIconAsset,Error>{
        self.resolve_origin_mark(Ph4::parse(plaintext)?.native_icon_inputs()?.origin_version,style)
    }
}
