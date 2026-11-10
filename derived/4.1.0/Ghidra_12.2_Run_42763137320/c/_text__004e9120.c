/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9120; name: FUN_.text__004e9120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e9120(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = _DAT_008a5070;
  plVar3 = _DAT_008a5070 + 1;
  plVar6 = (long *)0x0;
  do {
    plVar5 = plVar6;
    plVar6 = (long *)*plVar3;
    plVar3 = plVar6 + 0xe;
  } while (plVar6 != (long *)0x0 && plVar6 != param_1);
  if (plVar6 != (long *)0x0) {
    plVar3 = _DAT_008a5070 + 1;
    if ((long *)_DAT_008a5070[1] != plVar6) {
      plVar3 = plVar5 + 0xe;
    }
    *plVar3 = plVar6[0xe];
    if ((long *)*puVar1 == plVar6) {
      *puVar1 = plVar5;
      lVar7 = param_1[0xc];
      goto joined_r0x004e9238;
    }
  }
  lVar7 = param_1[0xc];
joined_r0x004e9238:
  if (lVar7 == 0) {
    return;
  }
  iVar4 = *(int *)(lVar7 + 0x2c);
  if (iVar4 != 0) {
    if ((*(byte *)((long)param_1 + 0x22) >> 5 & 1) != 0) {
      FUN__text__004f6d50(&DAT_00aeb9f0);
      iVar4 = *(int *)(lVar7 + 0x2c);
    }
    FUN__text__0048dff0(*_DAT_008a45d8,iVar4,param_1 + 3);
    lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar2 != 0) {
      plVar3 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
      (**(code **)(*plVar3 + 0x130))(plVar3,1);
      (**(code **)(*param_1 + 0xd0))(param_1);
      FUN__text__00464fec();
    }
  }
  FUN__text__004ea390(lVar7);
  FUN__text__00400fc0(0,lVar7);
  return;
}


