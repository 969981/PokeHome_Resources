/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e2d20; name: FUN_.text__004e2d20
 */


undefined8 FUN__text__004e2d20(long param_1,void *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = iVar4 + param_3;
  if (iVar3 < iVar1) {
    uVar2 = iVar1 + 0x7fe;
    if (-0x400 < iVar1) {
      uVar2 = iVar1 + 0x3ff;
    }
    *(uint *)(param_1 + 8) = uVar2 & 0xfffffc00;
    lVar5 = FUN__text__00400fa0(*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x10),
                                (long)(int)(uVar2 & 0xfffffc00));
    if (lVar5 == 0) {
      *(int *)(param_1 + 8) = iVar3;
      return 0;
    }
    *(long *)(param_1 + 0x10) = lVar5;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  memcpy((void *)(lVar5 + iVar4),param_2,(ulong)param_3);
  *(int *)(param_1 + 0x18) = iVar1;
  *param_4 = param_3;
  return 1;
}


