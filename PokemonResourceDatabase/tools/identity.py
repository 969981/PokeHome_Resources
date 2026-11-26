# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Stable identity primitives for PRDB V1. No inferred game/form mappings."""
import hashlib,json,struct,unicodedata,uuid
NS=uuid.UUID("7fa765ae-c864-5c47-9d8b-187e38df7a1b")
PIXEL_CONTRACT="rgba8-straight-v1"

def text(value):
    if not isinstance(value,str) or not value: raise ValueError("nonempty string required")
    return unicodedata.normalize("NFC",value)

def stable_id(domain,*parts):
    def normalize(x):
        if isinstance(x,str): return text(x)
        if isinstance(x,(tuple,list)): return [normalize(v) for v in x]
        raise ValueError("IDs use strings and ordered arrays only")
    payload=json.dumps(normalize([domain,*parts]),ensure_ascii=False,separators=(",",":"))
    return str(uuid.uuid5(NS,payload))

def appearance_id(form_uid,gender_id,color_id,variant_id,attributes=()):
    pairs=[(text(k),text(v)) for k,v in attributes]
    if len({k for k,v in pairs})!=len(pairs): raise ValueError("duplicate attribute ID")
    return stable_id("appearance",form_uid,gender_id,color_id,variant_id,sorted(pairs))

def subject_id(type_id,stable_business_id):
    return stable_id("subject",type_id,stable_business_id)

def content_id(width,height,rgba):
    if type(width) is not int or type(height) is not int or not 0<width<2**32 or not 0<height<2**32:
        raise ValueError("invalid dimensions")
    if len(rgba)!=width*height*4: raise ValueError("RGBA8 byte length mismatch")
    h=hashlib.sha256(b"PRDB-RGBA8-STRAIGHT-V1\0"+struct.pack("<II",width,height))
    h.update(rgba)
    return h.hexdigest()

def png_cas_path(file_sha256):
    if len(file_sha256)!=64 or any(x not in "0123456789abcdef" for x in file_sha256):
        raise ValueError("invalid SHA256")
    return f"sha256/{file_sha256[:2]}/{file_sha256}.png"
