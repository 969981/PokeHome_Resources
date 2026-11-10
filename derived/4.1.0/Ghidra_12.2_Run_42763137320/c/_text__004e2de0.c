/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e2de0; name: FUN_.text__004e2de0
 */


undefined8 FUN__text__004e2de0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < param_2) {
    uVar1 = param_2 + 0x7fe;
    if (-0x400 < param_2) {
      uVar1 = param_2 + 0x3ff;
    }
    *(uint *)(param_1 + 8) = uVar1 & 0xfffffc00;
    lVar3 = FUN__text__00400fa0(*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x10),
                                (long)(int)(uVar1 & 0xfffffc00));
    if (lVar3 == 0) {
      *(int *)(param_1 + 8) = iVar2;
      return 0;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
  return 1;
}


