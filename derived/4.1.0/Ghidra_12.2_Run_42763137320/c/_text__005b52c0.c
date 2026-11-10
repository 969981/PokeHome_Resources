/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b52c0; name: FUN_.text__005b52c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b52c0(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  undefined8 local_38;
  
  uVar9 = tpidr_el0;
  uVar3 = uVar9 & 0xffffffffffffe000;
  local_38 = param_2;
  if (((uVar3 == 0) || (iVar12 = *(int *)(uVar3 + 0xb0), iVar12 == -1)) || (iVar12 == 3)) {
    pbVar1 = (byte *)(param_1 + 0x3f6);
    bVar8 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
LAB__text__005b5334:
    if (*pbVar1 == 0x4f) goto code_r0x005b5340;
    pcVar2 = (char *)(param_1 + 0x3f7);
    ClearExclusiveLocal();
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar7) {
        *pcVar2 = *pcVar2 + '\x01';
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    do {
      if (*pbVar1 != 0x4f) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3f4));
          while (*pbVar1 == 0x4f) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
            if (bVar7) {
              *pbVar1 = bVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB__text__005b53b4;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        *pbVar1 = bVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB__text__005b53b4:
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar7) {
        *pcVar2 = *pcVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB__text__005b53c4:
    bVar7 = false;
    iVar12 = 3;
    iVar5 = *_DAT_008a0300;
    piVar10 = _DAT_008a0300;
    goto joined_r0x005b53e0;
  }
  bVar7 = true;
  iVar5 = *_DAT_008a0300;
  piVar10 = _DAT_008a0300;
joined_r0x005b53e0:
  _DAT_008a0300 = piVar10;
  if (iVar5 != 0) {
    lVar11 = param_1 + (long)iVar12 * 0x60;
    puVar4 = *(undefined8 **)(lVar11 + 0xf8);
    if (puVar4 == *(undefined8 **)(lVar11 + 0x100)) {
      FUN__text__005b64c0(lVar11 + 0xf0,&local_38);
      iVar5 = *piVar10;
    }
    else {
      if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__005b5518;
      *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *(undefined8 *)(lVar11 + 0x108);
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      *puVar4 = local_38;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      *(undefined8 **)(lVar11 + 0xf8) = puVar4 + 1;
      iVar5 = *piVar10;
    }
    if (iVar5 == 1) goto joined_r0x005b5440;
  }
  lVar11 = param_1 + (long)iVar12 * 0x60;
  puVar4 = *(undefined8 **)(lVar11 + 0x128);
  if (puVar4 == *(undefined8 **)(lVar11 + 0x130)) {
    FUN__text__005b64c0(lVar11 + 0x120,&local_38);
  }
  else {
    if (*(long *)(uVar3 + 0x98) == 0x10) {
LAB__text__005b5518:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *(undefined8 *)(lVar11 + 0x138);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *puVar4 = local_38;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(lVar11 + 0x128) = puVar4 + 1;
  }
joined_r0x005b5440:
  if (!bVar7) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass((undefined1 *)(param_1 + 0x3f6),0x10);
      if (bVar7) {
        *(undefined1 *)(param_1 + 0x3f6) = 0x4f;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (*(char *)(param_1 + 0x3f7) != '\0') {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3f4));
      return;
    }
  }
  return;
code_r0x005b5340:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
  if (bVar7) {
    *pbVar1 = bVar8;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB__text__005b53c4;
  goto LAB__text__005b5334;
}


