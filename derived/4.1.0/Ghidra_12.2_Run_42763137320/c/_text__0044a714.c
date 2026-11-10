/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a714; name: FUN_.text__0044a714
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044a714(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN__text__00400f80(4,0x50);
      if (plVar8 == (long *)0x0) {
        return;
      }
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[8] = 0;
      plVar8[9] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      piVar6 = _DAT_008a3fa0;
      piVar2 = *(int **)(_DAT_008a3fa0 + 2);
      lVar3 = *(long *)(_DAT_008a3fa0 + 4);
      plVar8[3] = (long)piVar2;
      plVar8[4] = 0;
      piVar1 = piVar6;
      if (lVar3 != 0) {
        piVar1 = piVar2;
      }
      *(long **)(piVar6 + 2) = plVar8;
      *(long **)(piVar1 + 4) = plVar8;
      *piVar6 = *piVar6 + 1;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[8] = 0;
      *(undefined2 *)(plVar8 + 9) = 0;
      *plVar8 = (long)&DAT_00889e18;
      *(undefined1 *)((long)plVar8 + 0x4a) = 1;
      *(long **)(param_1 + 0x18) = plVar8;
      plVar8[1] = param_1;
      iVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x58));
      if (iVar7 != 1) {
        (**(code **)*plVar8)(plVar8);
        FUN__text__00400fc0(4,plVar8);
        *(undefined8 *)(param_1 + 0x18) = 0;
        return;
      }
    }
    uVar5 = 1 << (ulong)(param_2 - 1U & 0x1f);
    uVar4 = *(ushort *)(plVar8 + 9);
    *(ushort *)(plVar8 + 9) = uVar4 | (ushort)uVar5;
    if (((uVar5 & uVar4) == 0) || ((*(byte *)(lVar9 + 0x7c) & 1) != 0)) {
      FUN__text__00493260(plVar8);
      *(byte *)(lVar9 + 0x7c) = *(byte *)(lVar9 + 0x7c) & 0xfe;
    }
  }
  return;
}


