/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b87e0; name: FUN_.text__005b87e0
 */


void FUN__text__005b87e0(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_260 [128];
  uint local_44;
  
  uVar11 = tpidr_el0;
  bVar5 = (byte)((uint)uVar11 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x56);
  while (local_44 = param_4, *pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005b88b4;
  }
  pcVar2 = (char *)(param_1 + 0x57);
  ClearExclusiveLocal();
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005b88a4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005b88a4:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005b88b4:
  uVar6 = local_44;
  lVar7 = param_1 + (ulong)local_44 * 0x120;
  if (*(int *)(lVar7 + 0x198) < 0) goto LAB__text__005b89e0;
  lVar9 = *(long *)(param_1 + 0x740);
  lVar8 = *(long *)(param_1 + 0x748);
  if (lVar9 == lVar8) {
LAB__text__005b8904:
    if (lVar9 != lVar8) {
      FUN__text__005d51dc(local_260,param_3,*(undefined4 *)(lVar9 + 0x1e8),
                          *(undefined4 *)(lVar9 + 0x1ec),param_2);
      FUN__text__0014d25c(lVar9,local_260);
      FUN__text__0014821c(local_260);
      goto LAB__text__005b89e0;
    }
  }
  else {
    do {
      if ((*(long *)(lVar9 + 0x20) == *param_2) && (local_44 == *(uint *)(lVar9 + 0x1e8)))
      goto LAB__text__005b8904;
      lVar9 = lVar9 + 0x200;
    } while (lVar9 != lVar8);
  }
  local_260[0] = FUN__text__005cf99c(lVar7 + 0x80,local_44,2,param_2[1]);
  uVar10 = *(ulong *)(param_1 + 0x748);
  if (uVar10 < *(ulong *)(param_1 + 0x750)) {
    uVar11 = uVar11 & 0xffffffffffffe000;
    if (*(long *)(uVar11 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x758)
    ;
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
    FUN__text__005d51dc(uVar10,param_3,uVar6,local_260[0],param_2);
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
    *(ulong *)(param_1 + 0x748) = uVar10 + 0x200;
  }
  else {
    FUN__text__005b8a40(param_1 + 0x740,param_3,&local_44,local_260,param_2);
  }
LAB__text__005b89e0:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x57) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  }
  return;
}


