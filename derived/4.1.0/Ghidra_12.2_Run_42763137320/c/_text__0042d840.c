/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d840; name: FUN_.text__0042d840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0042d840(long *param_1,int param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  
  uVar5 = (**(code **)(*param_1 + 0x78))();
  if ((uVar5 & 1) == 0) {
    return (long *)0x0;
  }
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
  if (plVar6 != (long *)0x0) {
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
      if ((int)plVar6[7] == param_2) {
        return plVar6;
      }
    }
  }
  plVar6 = (long *)FUN__text__00400f80(2,0x48);
  lVar2 = _DAT_008a4c60;
  if (plVar6 != (long *)0x0) {
    plVar6[2] = 0;
    plVar6[3] = (long)param_1;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    *plVar6 = lVar2 + 0x10;
    plVar6[1] = 0;
    puVar1 = _DAT_008a4658;
    *(int *)(plVar6 + 7) = param_2;
    *(undefined4 *)((long)plVar6 + 0x3c) = 0x2ca33bdb;
    uVar7 = *puVar1;
    *(undefined1 *)(plVar6 + 8) = 0;
    iVar3 = FUN__text__00430dd0(uVar7,param_2,plVar6);
    if (iVar3 != 1) {
      FUN__text__004303d0(plVar6);
      FUN__text__00400fc0(2,plVar6);
      return (long *)0x0;
    }
    plVar8 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
    if (*plVar8 == 0) {
      *plVar8 = (long)plVar6;
      plVar6[2] = 0;
      uVar4 = FUN__text__004317a0(*puVar1,param_2);
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar4;
    }
    else {
      plVar6[2] = *plVar8;
      *plVar8 = (long)plVar6;
      uVar4 = FUN__text__004317a0(*puVar1,param_2);
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar4;
    }
    if ((param_3 & 1) != 0) {
      FUN__text__0042d4a0(param_1);
      return plVar6;
    }
  }
  return plVar6;
}


