/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066cdb0; name: FUN_.text__0066cdb0
 */


undefined8 FUN__text__0066cdb0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0xa30);
  if (lVar2 == 0) {
LAB__text__0066cdfc:
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa28) == 2) {
      if (param_2 < lVar2) goto LAB__text__0066cdfc;
      uVar1 = 0x71635c;
    }
    else {
      if (lVar2 < param_2) goto LAB__text__0066cdfc;
      uVar1 = 0x71c765;
    }
    FUN__text__00666f74(param_1,uVar1);
    uVar1 = 0;
    *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
  }
  return uVar1;
}


