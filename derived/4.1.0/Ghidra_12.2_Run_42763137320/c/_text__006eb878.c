/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eb878; name: FUN_.text__006eb878
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006eb878(long *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  lVar3 = _DAT_008a6c90;
  iVar4 = 0;
  if ((param_2 & 1) != 0) {
    iVar4 = 0xc;
  }
  *(uint *)(param_1 + 3) = param_2;
  *(int *)(param_1 + 8) = param_4;
  if ((param_2 & 2) != 0) {
    iVar4 = iVar4 + 0xc;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 4) != 0) {
    iVar4 = iVar4 + 8;
  }
  *param_1 = lVar3 + 0x10;
  uVar1 = param_4 + 1;
  uVar5 = (ulong)uVar1;
  *(int *)(param_1 + 4) = param_3;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  param_1[6] = (long)iVar4 * (long)(int)uVar1;
  if (param_3 == 3) {
    uVar5 = (ulong)(uint)(param_4 * 3);
  }
  else if (param_3 != 2) {
    uVar5 = 0;
  }
  iVar4 = (int)uVar5;
  *(int *)(param_1 + 5) = iVar4;
  uVar6 = 1;
  if (0xffff < iVar4) {
    uVar6 = 2;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
  uVar2 = -(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1;
  if (0xffff < iVar4) {
    uVar2 = uVar5 << 2;
  }
  param_1[7] = uVar2;
  return;
}


