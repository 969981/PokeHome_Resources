/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b5520; name: FUN_.text__005b5520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b5520(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  undefined8 local_38;
  
  uVar8 = tpidr_el0;
  uVar3 = uVar8 & 0xffffffffffffe000;
  local_38 = param_2;
  if (((uVar3 == 0) || (iVar12 = *(int *)(uVar3 + 0xb0), iVar12 == -1)) || (iVar12 == 3)) {
    pbVar1 = (byte *)(param_1 + 0x3fe);
    bVar7 = (byte)((uint)uVar8 >> 0xd) & 0x4f;
LAB__text__005b5594:
    if (*pbVar1 == 0x4f) goto code_r0x005b55a0;
    pcVar2 = (char *)(param_1 + 0x3ff);
    ClearExclusiveLocal();
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar6) {
        *pcVar2 = *pcVar2 + '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    do {
      if (*pbVar1 != 0x4f) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3fc));
          while (*pbVar1 == 0x4f) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
            if (bVar6) {
              *pbVar1 = bVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB__text__005b5614;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = bVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB__text__005b5614:
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar6) {
        *pcVar2 = *pcVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB__text__005b5624:
    bVar6 = false;
    iVar12 = 3;
    iVar4 = *_DAT_008a0300;
    piVar9 = _DAT_008a0300;
    goto joined_r0x005b5640;
  }
  bVar6 = true;
  iVar4 = *_DAT_008a0300;
  piVar9 = _DAT_008a0300;
joined_r0x005b5640:
  _DAT_008a0300 = piVar9;
  if (iVar4 != 0) {
    lVar11 = param_1 + (long)iVar12 * 0x60;
    puVar10 = *(undefined8 **)(lVar11 + 0x278);
    if (puVar10 == *(undefined8 **)(lVar11 + 0x280)) {
      FUN__text__005b6650(lVar11 + 0x270,&local_38);
      iVar4 = *piVar9;
    }
    else {
      if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__005b577c;
      *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *(undefined8 *)(lVar11 + 0x288);
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      *puVar10 = local_38;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      *(undefined8 **)(lVar11 + 0x278) = puVar10 + 1;
      iVar4 = *piVar9;
    }
    if (iVar4 == 1) goto joined_r0x005b56a4;
  }
  lVar11 = param_1 + (long)iVar12 * 0x60;
  puVar10 = *(undefined8 **)(lVar11 + 0x2a8);
  if (puVar10 == *(undefined8 **)(lVar11 + 0x2b0)) {
    FUN__text__005b6650(lVar11 + 0x2a0,&local_38);
  }
  else {
    if (*(long *)(uVar3 + 0x98) == 0x10) {
LAB__text__005b577c:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *(undefined8 *)(lVar11 + 0x2b8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *puVar10 = local_38;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(lVar11 + 0x2a8) = puVar10 + 1;
  }
joined_r0x005b56a4:
  if (!bVar6) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass((undefined1 *)(param_1 + 0x3fe),0x10);
      if (bVar6) {
        *(undefined1 *)(param_1 + 0x3fe) = 0x4f;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (*(char *)(param_1 + 0x3ff) != '\0') {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3fc));
      return;
    }
  }
  return;
code_r0x005b55a0:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
  if (bVar6) {
    *pbVar1 = bVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB__text__005b5624;
  goto LAB__text__005b5594;
}


