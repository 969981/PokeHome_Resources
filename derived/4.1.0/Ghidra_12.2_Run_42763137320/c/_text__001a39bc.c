/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a39bc; name: FUN_.text__001a39bc
 */


void FUN__text__001a39bc(long param_1,int param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  if ((param_3 & 1) != 0) {
    FUN__text__0012c898(lVar1,param_1 + 0x1e0);
    FUN__text__0012c898(lVar1,param_1 + 0x1e8);
    FUN__text__0012c898(lVar1,param_1 + 0x1f0);
    FUN__text__0012c378(lVar1,param_1 + 0x1f8);
    return;
  }
  if (param_2 == 0) {
    FUN__text__0012c898(lVar1,param_1 + 0x1e8);
  }
  else {
    FUN__text__0012c898(lVar1,param_1 + 0x1e0);
    if (param_2 == 1) {
      bVar2 = true;
      goto LAB__text__001a3a88;
    }
    FUN__text__0012c898(lVar1,param_1 + 0x1e8);
    if (param_2 == 2) {
      FUN__text__0012c898(lVar1,param_1 + 0x1f8);
      FUN__text__0012c378(lVar1,param_1 + 0x1f0);
      return;
    }
  }
  bVar2 = false;
LAB__text__001a3a88:
  FUN__text__0012c898(lVar1,param_1 + 0x1f0);
  FUN__text__0012c898(lVar1,param_1 + 0x1f8);
  if (param_2 == 0) {
    FUN__text__0012c378(lVar1,param_1 + 0x1e0);
  }
  if (bVar2) {
    FUN__text__0012c378(lVar1,param_1 + 0x1e8);
    return;
  }
  return;
}


