/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477910; name: FUN_.text__00477910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00477910(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 local_18;
  
  if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1d8) + 0x18))();
    plVar8 = *(long **)(param_1 + 0x1d8);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      FUN__text__00400fc0(0,plVar8);
    }
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    if (((*(byte *)(*(long *)(param_1 + 0x150) + 0x28) >> 1 & 1) != 0) &&
       (puVar6 = (undefined4 *)FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1d0)),
       puVar6 != (undefined4 *)0x0)) {
      plVar8 = *(long **)(puVar6 + 2);
      if (plVar8 != (long *)0x0) {
        if (*(ushort *)(plVar8 + 2) - 1 == 0) {
          if (*plVar8 != 0) {
            *(undefined4 *)(plVar8 + 1) = 0;
            FUN__text__00400fc0(0);
            *plVar8 = 0;
            *(undefined4 *)((long)plVar8 + 0xc) = 0;
          }
          FUN__text__00400fc0(0,plVar8);
        }
        else {
          *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
        }
      }
      *(undefined8 *)(puVar6 + 2) = 0;
      *puVar6 = 0;
    }
    FUN__text__0047bea0(*_DAT_008a4650,*(undefined8 *)(param_1 + 0x150),param_1);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  local_18 = 0xffffffffffffffff;
  FUN__text__0046c3b0(param_1,&local_18,1);
  FUN__text__00477aa0(param_1);
  puVar9 = *(undefined8 **)(param_1 + 8);
  iVar2 = *(int *)(puVar9 + 0xc);
  iVar5 = iVar2 + -1;
  *(int *)(puVar9 + 0xc) = iVar5;
  if (((iVar5 == 0) ||
      (((iVar5 == 1 && (iVar2 != 0 || *(char *)((long)puVar9 + 100) == '\0')) &&
       (*(char *)((long)puVar9 + 100) != '\0')))) &&
     (FUN__text__004473f0(puVar9), *(int *)(puVar9 + 0xc) == 0)) {
    (**(code **)*puVar9)(puVar9);
    FUN__text__00400fc0(4,puVar9);
  }
  lVar7 = *(long *)(param_1 + 0x1d0);
  piVar1 = (int *)(lVar7 + 0x24);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))();
  }
  return;
}


