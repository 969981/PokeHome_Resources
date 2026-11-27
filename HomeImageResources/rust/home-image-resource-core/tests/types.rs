use home_image_resource_core::*;
use sha2::{Digest,Sha256};
use std::collections::HashSet;
#[test]
fn all_type_resources(){
    let root=std::env::var_os("HOME_IMAGE_PACKAGE").expect("HOME_IMAGE_PACKAGE");
    let core=HomeImageResourceCore::open(root).unwrap();
    let mut files=HashSet::new();
    for row in core.type_assets(){
        let kind=if row.kind=="symbol"{TypeKind::Symbol}else{TypeKind::Text};
        let a=core.resolve_type_display(row.native_display_index,kind,&row.language).unwrap().unwrap();
        let b=core.resolve_type_message_label(row.message_label_id,kind,&row.language).unwrap().unwrap();
        assert_eq!(a,b);
        if files.insert(a.clone()){
            let data=std::fs::read(&a).unwrap();
            assert!(data.starts_with(b"\x89PNG\r\n\x1a\n"));
            assert_eq!(format!("{:x}",Sha256::digest(&data)),row.stored_png_sha256);
        }
    }
    assert_eq!(core.type_assets().len(),360);assert_eq!(files.len(),179);
    for lang in LANGUAGES{for n in 0..18{for kind in [TypeKind::Symbol,TypeKind::Text]{assert!(core.resolve_type_display(n,kind,lang).unwrap().is_some());}}}
    assert!(core.resolve_type_display(18,TypeKind::Symbol,"JPN").unwrap().is_none());
    assert!(core.resolve_type_message_label(9,TypeKind::Symbol,"JPN").unwrap().is_none());
    assert!(core.resolve_type_display(0,TypeKind::Text,"INVALID").unwrap().is_none());
    println!("360 native type rows; 179 unique PNG SHA-256 verified; 10 languages; message label gap 9 rejected");
}
#[test]
fn bad_type_contract(){
    let root=std::path::PathBuf::from(std::env::var_os("HOME_IMAGE_PACKAGE").unwrap());
    let text=std::fs::read_to_string(root.join("core/types/index.json")).unwrap();
    let mut j:serde_json::Value=serde_json::from_str(&text).unwrap();
    j["rows"][0]["message_label_id"]=9.into();
    assert!(TypeImageResolver::from_json(&j.to_string()).is_err());
}
