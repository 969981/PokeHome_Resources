/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00176350; name: FUN_.text__00176350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00176350(long *param_1)

{
  long lVar1;
  LightEventType *pLVar2;
  LightEventType *pLVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  LightEventType *pLVar9;
  long *plVar10;
  
  lVar1 = _DAT_008a04f8;
  param_1[2] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0;
  FUN__text__0016afa8(param_1 + 3);
  FUN__text__0012fde8(param_1,0);
  lVar1 = _DAT_0089f3c0 + 0x10;
  *param_1 = _DAT_008a15a8 + 0x10;
  plVar10 = param_1 + 5;
  *plVar10 = lVar1;
  pLVar9 = (LightEventType *)FUN__text__005f6af4();
  uVar7 = tpidr_el0;
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar2 = pLVar9 + 2;
  while (*pLVar2 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__00176454;
  }
  pLVar3 = pLVar9 + 3;
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar3,0x10);
    if (bVar5) {
      *pLVar3 = (LightEventType)((char)*pLVar3 + '\x01');
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pLVar2 != (LightEventType)0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar9);
        while (*pLVar2 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
          if (bVar5) {
            *pLVar2 = LVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__00176444;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00176444:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar3,0x10);
    if (bVar5) {
      *pLVar3 = (LightEventType)((char)*pLVar3 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00176454:
  lVar1 = _DAT_0089f3c8;
  if (*(long *)(_DAT_0089f3c8 + 0x800) == 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(_DAT_0089f3c8 + *(long *)(_DAT_0089f3c8 + 0x800) * 8) = plVar10;
  *(long *)(lVar1 + 0x800) = *(long *)(lVar1 + 0x800) + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar9[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar9);
  }
  lVar1 = _DAT_008a15b0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar8 = _DAT_008a15b8;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[5] = lVar1 + 0x10;
  param_1[6] = 0;
  *puVar8 = plVar10;
  FUN__text__0016afa8(param_1 + 0xc);
  param_1[0xf] = 0;
  FUN__text__0016afa8(param_1 + 0x10);
  param_1[0x13] = 0;
  FUN__text__0016afa8(param_1 + 0x14);
  param_1[0x17] = 0;
  FUN__text__0016afa8(param_1 + 0x18);
  param_1[0x1b] = 0;
  FUN__text__0016afa8(param_1 + 0x1c);
  param_1[0x1f] = 0;
  FUN__text__0016afa8(param_1 + 0x20);
  param_1[0x23] = 0;
  FUN__text__0016afa8(param_1 + 0x24);
  param_1[0x27] = 0;
  FUN__text__0016afa8(param_1 + 0x28);
  param_1[0x2b] = 0;
  FUN__text__0016afa8(param_1 + 0x2c);
  param_1[0x2f] = 0;
  FUN__text__0016afa8(param_1 + 0x30);
  param_1[0x33] = 0;
  FUN__text__0016afa8(param_1 + 0x34);
  param_1[0x37] = 0;
  FUN__text__0016afa8(param_1 + 0x38);
  param_1[0x3b] = 0;
  FUN__text__0016afa8(param_1 + 0x3c);
  param_1[0x3f] = 0;
  FUN__text__0016afa8(param_1 + 0x40);
  param_1[0x43] = 0;
  FUN__text__0016afa8(param_1 + 0x44);
  param_1[0x47] = 0;
  FUN__text__0016afa8(param_1 + 0x48);
  param_1[0x4b] = 0;
  FUN__text__0016afa8(param_1 + 0x4c);
  param_1[0x4f] = 0;
  FUN__text__0016afa8(param_1 + 0x50);
  param_1[0x53] = 0;
  FUN__text__0016afa8(param_1 + 0x54);
  param_1[0x57] = 0;
  FUN__text__0016afa8(param_1 + 0x58);
  param_1[0x5b] = 0;
  FUN__text__0016afa8(param_1 + 0x5c);
  param_1[0x5f] = 0;
  FUN__text__0016afa8(param_1 + 0x60);
  param_1[99] = 0;
  FUN__text__0016afa8(param_1 + 100);
  param_1[0x67] = 0;
  FUN__text__0016afa8(param_1 + 0x68);
  param_1[0x6b] = 0;
  FUN__text__0016afa8(param_1 + 0x6c);
  param_1[0x6f] = 0;
  FUN__text__0016afa8(param_1 + 0x70);
  param_1[0x73] = 0;
  FUN__text__0016afa8(param_1 + 0x74);
  param_1[0x77] = 0;
  FUN__text__0016afa8(param_1 + 0x78);
  param_1[0x7b] = 0;
  FUN__text__0016afa8(param_1 + 0x7c);
  param_1[0x7f] = 0;
  FUN__text__0016afa8(param_1 + 0x80);
  param_1[0x83] = 0;
  FUN__text__0016afa8(param_1 + 0x84);
  param_1[0x87] = 0;
  FUN__text__0016afa8(param_1 + 0x88);
  param_1[0x8b] = 0;
  FUN__text__0016afa8(param_1 + 0x8c);
  return;
}


