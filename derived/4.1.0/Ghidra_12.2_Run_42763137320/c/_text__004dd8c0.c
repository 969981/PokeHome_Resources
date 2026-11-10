/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd8c0; name: FUN_.text__004dd8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004dd8c0(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int local_40 [3];
  undefined4 uStack_34;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = *param_2 + iVar2;
  iVar4 = *(ushort *)(param_1 + 0x54) - 1;
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar4 == 0) {
    if (*(uint *)(param_1 + 0x24) <= uVar1) {
      uVar6 = 0x11;
      *param_2 = *(uint *)(param_1 + 0x24) - iVar2;
      goto LAB__text__004dd93c;
    }
  }
  else if (*(uint *)(param_1 + 0x38) < uVar1) {
    if (*(ushort *)(param_1 + 0x54) != 0) {
      *(short *)(param_1 + 0x54) = (short)iVar4;
    }
    *param_2 = (*(uint *)(param_1 + 0x38) - iVar2) + 1;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x34);
  }
  uVar6 = 0x2d;
LAB__text__004dd93c:
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  FUN__text__004af510(param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),iVar2,*param_2 + iVar2);
  lVar5 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar5 + 10) >> 4 & 1) != 0) {
    uStack_34 = *(undefined4 *)(lVar5 + 0x2b0);
    local_40[1] = 0x3f800000;
    local_40[0] = iVar2;
    local_40[2] = uVar3;
    FUN__text__0048e990(*_DAT_008a4638,*(undefined4 *)(lVar5 + 0x280),local_40,param_1);
  }
  return uVar6;
}


