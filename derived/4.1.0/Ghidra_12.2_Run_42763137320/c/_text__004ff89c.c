/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ff89c; name: FUN_.text__004ff89c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004ff89c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  short sVar11;
  short sVar10;
  uint uVar12;
  
  sVar10 = *(short *)(param_2 + 0x14);
  uVar9 = 3;
  if (sVar10 == 0) {
    sVar11 = 0;
    sVar10 = 0;
    if ((*(uint *)(param_2 + 0x30) & 0xfffffffd) != 1) goto LAB__text__004ff984;
LAB__text__004ff954:
    plVar5 = (long *)FUN__text__004febf0(param_1,param_2);
    uVar9 = 3;
    sVar11 = sVar10;
  }
  else {
    uVar9 = 1;
    if (*(short *)(param_2 + 0x16) != 0 || *(short *)(param_2 + 0x18) != 0) {
      iVar1 = (int)*(short *)(param_2 + 0x16) + (int)sVar10;
      iVar3 = (int)(short)iVar1;
      iVar4 = (int)(short)(*(short *)(param_2 + 0x18) + sVar10);
      if (iVar1 < 1) {
        iVar3 = 1;
      }
      if (iVar3 != iVar4) {
        iVar1 = (iVar4 - iVar3) + 1;
        lVar8 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
        *_DAT_008a45e8 = lVar8;
        sVar10 = 0;
        uVar6 = (ulong)lVar8 >> 0x21;
        if (iVar1 != 0) {
          sVar10 = (short)((int)(uint)uVar6 / iVar1);
        }
        sVar10 = ((short)uVar6 - sVar10 * (short)iVar1) + (short)iVar3;
      }
    }
    sVar11 = sVar10;
    if ((*(uint *)(param_2 + 0x30) & 0xfffffffd) == 1) goto LAB__text__004ff954;
LAB__text__004ff984:
    plVar5 = (long *)FUN__text__004fedb0(param_2);
  }
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar2 <= uVar12) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar6 = FUN__text__00501df0(param_1 + 0x18,iVar1);
    if (((uVar6 & 1) == 0) || (*(uint *)(param_1 + 0x24) <= uVar12)) goto LAB__text__004ffa08;
    uVar12 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x20) = uVar12 + 1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x18) + (ulong)uVar12 * 0x18);
    *plVar7 = param_2;
    *(short *)(plVar7 + 1) = sVar11;
    *(undefined1 *)((long)plVar7 + 10) = uVar9;
    plVar7[2] = (long)plVar5;
    return 1;
  }
LAB__text__004ffa08:
  if ((*(uint *)(param_2 + 0x30) & 0xfffffffd) != 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return 2;
}


