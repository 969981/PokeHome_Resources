/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2cb0; name: FUN_.text__004f2cb0
 */


void FUN__text__004f2cb0(long param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  piVar1 = (int *)(param_1 + 0x24);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar7 = *param_2;
  if (uVar7 == 2) {
    FUN__text__004e88b0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                        *(undefined1 *)((long)param_2 + 0x1e),param_2[4]);
  }
  else {
    if (uVar7 == 1) {
      FUN__text__004e8740(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
      cVar3 = *(char *)((long)param_2 + 0x1f);
      goto joined_r0x004f2d38;
    }
    if (uVar7 == 0) {
      FUN__text__004e85a0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
      cVar3 = *(char *)((long)param_2 + 0x1f);
      goto joined_r0x004f2d38;
    }
  }
  cVar3 = *(char *)((long)param_2 + 0x1f);
joined_r0x004f2d38:
  if (((cVar3 != '\0') && (*(char *)((long)param_2 + 0x1d) != '\0')) && (*param_2 < 3)) {
    FUN__text__0042eb90(param_1 + 0x28,*param_2 & 1);
  }
  uVar7 = *(uint *)(param_1 + 0x100);
  while (uVar7 != 0) {
    uVar7 = uVar7 - 1;
    plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + (ulong)uVar7 * 8);
    if ((((char)param_2[7] == '\0') || (plVar6[0x10] == 0)) &&
       (uVar5 = FUN__text__004647d0(plVar6,*(undefined8 *)(param_2 + 0xc)), (uVar5 & 1) == 0)) {
      (**(code **)(*plVar6 + 0xa0))(plVar6,param_2);
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x004f2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x20))((long *)(param_1 + 0x10));
    return;
  }
  return;
}


