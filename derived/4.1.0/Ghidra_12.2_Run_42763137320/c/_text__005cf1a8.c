/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf1a8; name: thunk_FUN_.text__005cf1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__005cf1b0(long *param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_58;
  
  plVar7 = _DAT_0089f428;
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  lVar10 = *_DAT_0089f428;
  pbVar1 = (byte *)(lVar10 + 0xe2);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005cf284;
  }
  pcVar2 = (char *)(lVar10 + 0xe3);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xe0));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005cf274;
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
LAB__text__005cf274:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005cf284:
  lVar9 = (((((((((((((((((((((((((((((((((ulong)*param_2 ^ 0xcbf29ce484222645) * 0x100000001b3 ^
                                        (ulong)param_2[1]) * 0x100000001b3 ^ (ulong)param_2[2]) *
                                       0x100000001b3 ^ (ulong)param_2[3]) * 0x100000001b3 ^
                                     (ulong)param_2[4]) * 0x100000001b3 ^ (ulong)param_2[5]) *
                                    0x100000001b3 ^ (ulong)param_2[6]) * 0x100000001b3 ^
                                  (ulong)param_2[7]) * 0x100000001b3 ^ (ulong)param_2[8]) *
                                 0x100000001b3 ^ (ulong)param_2[9]) * 0x100000001b3 ^
                               (ulong)param_2[10]) * 0x100000001b3 ^ (ulong)param_2[0xb]) *
                              0x100000001b3 ^ (ulong)param_2[0xc]) * 0x100000001b3 ^
                            (ulong)param_2[0xd]) * 0x100000001b3 ^ (ulong)param_2[0xe]) *
                           0x100000001b3 ^ (ulong)param_2[0xf]) * 0x100000001b3 ^
                         (ulong)param_2[0x10]) * 0x100000001b3 ^ (ulong)param_2[0x11]) *
                        0x100000001b3 ^ (ulong)param_2[0x12]) * 0x100000001b3 ^ (ulong)param_2[0x13]
                      ) * 0x100000001b3 ^ (ulong)param_2[0x14]) * 0x100000001b3 ^
                    (ulong)param_2[0x15]) * 0x100000001b3 ^ (ulong)param_2[0x16]) * 0x100000001b3 ^
                  (ulong)param_2[0x17]) * 0x100000001b3 ^ (ulong)param_2[0x18]) * 0x100000001b3 ^
                (ulong)param_2[0x19]) * 0x100000001b3 ^ (ulong)param_2[0x1a]) * 0x100000001b3 ^
              (ulong)param_2[0x1b]) * 0x100000001b3 ^ (ulong)param_2[0x1c]) * 0x100000001b3 ^
            (ulong)param_2[0x1d]) * 0x100000001b3 ^ (ulong)param_2[0x1e]) * 0x100000001b3 ^
          (ulong)param_2[0x1f]) * 0x100000001b3;
  FUN__text__005cdf90(param_1,*plVar7,lVar9);
  if (*param_1 == 0) {
    FUN__text__005cdba8(&lStack_58,*plVar7,lVar9);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    }
    lVar8 = *plVar7;
    *param_1 = lStack_58;
    lVar8 = lVar8 + 0x50;
    FUN__text__006f31b8(lStack_58 + 0x58,_DAT_008a0448,param_2);
    FUN__text__006ee594(lVar8);
    FUN__text__006ee5f0(lVar8,*(undefined4 *)(lStack_58 + 0xe0),lStack_58 + 0x58);
    FUN__text__006ee624(lVar8,lStack_58 + 0xd0,*(undefined4 *)(lStack_58 + 0xe0));
    FUN__text__006ee5a0(lVar8);
    *(long *)(lStack_58 + 0xd8) = lVar9;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar10 + 0xe3) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xe0));
  }
  return;
}


