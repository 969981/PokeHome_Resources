/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e34e0; name: FUN_.text__005e34e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e34e0(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 *puVar11;
  
  puVar6 = _DAT_0089f798;
  puVar5 = _DAT_0089f4a0;
  if (*(int *)(param_2 + 0x54) == 0) {
    *param_1 = 0;
    return;
  }
  piVar1 = (int *)(param_2 + 0x54);
  puVar8 = _DAT_0089f798;
  pbVar9 = _DAT_0089f790;
  iVar10 = *(int *)(param_2 + 0x54);
  do {
    puVar11 = *(undefined8 **)(param_2 + 0x58);
    if (((*pbVar9 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(_DAT_0089f790), puVar8 = _DAT_0089f798, pbVar9 = _DAT_0089f790,
       iVar7 != 0)) {
      if (((*_DAT_0089f498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(_DAT_0089f498), iVar7 != 0)) {
        *puVar5 = 0;
        __cxa_guard_release(_DAT_0089f498);
      }
      *puVar6 = puVar5;
      pbVar9 = _DAT_0089f790;
      __cxa_guard_release(_DAT_0089f790);
      puVar8 = puVar6;
    }
    if (puVar11 != puVar8) {
      do {
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != puVar8 && puVar11 != (undefined8 *)0x0);
      if (puVar11 == (undefined8 *)0x0) break;
    }
    iVar7 = *piVar1;
    if (iVar7 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(param_2 + 0x60) != 0) {
          lVar2 = *(long *)(param_2 + 0x60) + -8;
        }
        *param_1 = lVar2;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar7;
  } while (iVar7 != 0);
  *param_1 = 0;
  return;
}


