/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004728b0; name: FUN_.text__004728b0
 */


void FUN__text__004728b0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  plVar1 = DAT_00aea7b0;
  if (DAT_00aea7b8 == 0) {
LAB__text__00472908:
    if (plVar1 != DAT_00aea7b0 + DAT_00aea7b8) {
      uVar2 = DAT_00aea7b8 - 1;
      if (plVar1 < DAT_00aea7b0 + uVar2) {
        memmove(plVar1,plVar1 + 1,
                (ulong)(uint)((int)(DAT_00aea7b0 + uVar2) - (int)plVar1) & 0xfffffff8);
        uVar2 = DAT_00aea7b8 - 1;
      }
      DAT_00aea7b8 = uVar2;
      return;
    }
  }
  else {
    lVar3 = (ulong)DAT_00aea7b8 << 3;
    do {
      if (*plVar1 == param_1) goto LAB__text__00472908;
      plVar1 = plVar1 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}


