/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d068; name: FUN_.text__0069d068
 */


long FUN__text__0069d068(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x20))) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 0x10 + 8);
    uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar3 = uVar1;
    }
    if (param_2 != (uint *)0x0) {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 0x10 + 0xc);
      uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if (*(int *)(param_1 + 0x30) != 0) {
        uVar1 = uVar2;
      }
      if (uVar1 < uVar3) {
        return 0;
      }
      *param_2 = uVar3;
      param_2[1] = uVar1 - uVar3;
    }
    lVar4 = *(long *)(param_1 + 0x28) + (ulong)uVar3;
  }
  return lVar4;
}


