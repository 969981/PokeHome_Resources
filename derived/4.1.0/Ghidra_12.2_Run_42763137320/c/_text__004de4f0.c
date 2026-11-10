/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de4f0; name: FUN_.text__004de4f0
 */


undefined8 FUN__text__004de4f0(double *param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  double dVar7;
  
  iVar2 = *(int *)(param_3 + 4);
  dVar7 = *param_1 + (double)param_2 * param_1[1];
  uVar3 = *(ushort *)(param_3 + 0x14);
  iVar4 = (int)dVar7 - iVar2;
  if (uVar3 == 1) {
    uVar6 = *(uint *)(param_3 + 8);
  }
  else {
    uVar6 = *(int *)(param_3 + 0x10) + 1;
  }
  iVar1 = uVar6 - iVar2;
  if ((uint)(int)dVar7 <= uVar6) {
    iVar1 = iVar4;
  }
  uVar6 = iVar1 + iVar2;
  *(uint *)(param_3 + 4) = uVar6;
  uVar5 = 0x2d;
  if (iVar1 == 0) {
    uVar5 = 0x2e;
  }
  iVar2 = uVar3 - 1;
  if (iVar2 == 0) {
    if (*(uint *)(param_3 + 8) <= uVar6) {
      uVar5 = 0x11;
    }
    *param_1 = dVar7;
  }
  else if (*(uint *)(param_3 + 0x10) < uVar6) {
    *(uint *)(param_3 + 4) = *(uint *)(param_3 + 0xc);
    if (1 < uVar3) {
      *(short *)(param_3 + 0x14) = (short)iVar2;
    }
    *param_1 = (double)*(uint *)(param_3 + 0xc);
  }
  else {
    *param_1 = dVar7;
  }
  if (iVar1 == iVar4) {
    return CONCAT44(iVar4,uVar5);
  }
  return CONCAT44(iVar1,uVar5);
}


