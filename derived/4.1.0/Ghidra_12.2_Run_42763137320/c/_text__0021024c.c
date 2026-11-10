/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0021024c; name: FUN_.text__0021024c
 */


void FUN__text__0021024c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_18;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(lVar2 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_18 = 0x36e86d7e522b02e3;
  FUN__text__003c7c60(lVar1,&local_18,0);
  local_18 = 0xa3097788f56e012d;
  FUN__text__003c7c60(lVar1,&local_18,0);
  local_18 = 0xe26fc0cc12057d8c;
  FUN__text__0012c378(lVar2 + 0x110,&local_18);
  FUN__text__003c8320(lVar1,0x728fe0);
  FUN__text__003c81e0(lVar1,0x728fe8,0x728fe0);
  FUN__text__003c7c60(lVar1,0x728ff0,0);
  FUN__text__003c7c60(lVar1,0x728fe0,1);
  FUN__text__003c7c60(lVar1,0x728ff8,0);
  FUN__text__003c7c60(lVar1,0x728fe8,0);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


