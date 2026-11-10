/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b709c; name: FUN_.text__005b709c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b709c(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar12 = _DAT_0089f690;
  uVar20 = tpidr_el0;
  uVar20 = uVar20 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar12 + 0x10;
  if (uVar20 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(uVar20 + 0x98) != 0) {
      lVar12 = *(long *)(uVar20 + *(long *)(uVar20 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar11 = _DAT_008a5818;
  *param_1 = _DAT_008a5818 + 0x10;
  param_1[1] = lVar12;
  param_1[9] = lVar11 + 0x50;
  nn::os::InitializeLightEvent((long)param_1 + 0x54,0,1);
  *(undefined1 *)((long)param_1 + 0x56) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x57) = 0;
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  lVar12 = param_2[3];
  param_1[0xf] = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  plVar1 = param_1 + 0xe8;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar12 = _DAT_0089f4c8 + 0x10;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x1ffffffffff;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = lVar12;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1ffffffffff;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = lVar12;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0x1ffffffffff;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = lVar12;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0x1ffffffffff;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = lVar12;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0x1ffffffffff;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0x10] = lVar12;
  param_1[0x11] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x1ffffffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x34] = lVar12;
  param_1[0x35] = 0;
  if (((uVar20 == 0) || (*(long *)(uVar20 + 0x98) == 0)) ||
     (lVar12 = *(long *)(uVar20 + *(long *)(uVar20 + 0x98) * 8 + 0x10), lVar12 == 0)) {
    lVar12 = FUN__text__005f52b0();
  }
  param_1[0xeb] = lVar12;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  FUN__text__006f4410(param_1 + 0xee);
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  FUN__text__006f4828(param_1 + 0xfc);
  puVar2 = (undefined8 *)((long)param_1 + 0x7fc);
  *(undefined8 *)((long)param_1 + 0x82c) = 0;
  *(undefined8 *)((long)param_1 + 0x834) = 0;
  *(undefined8 *)((long)param_1 + 0x81c) = 0;
  *(undefined8 *)((long)param_1 + 0x824) = 0;
  *(undefined8 *)((long)param_1 + 0x80c) = 0;
  *(undefined8 *)((long)param_1 + 0x814) = 0;
  *puVar2 = 0;
  *(undefined8 *)((long)param_1 + 0x804) = 0;
  FUN__text__006f45e4(param_1 + 0x108);
  *(undefined2 *)(param_1 + 0x11b) = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  *(undefined1 *)((long)param_1 + 0x8da) = 1;
  FUN__text__006ebccc(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0xf4) = 0x3020002;
  *(ushort *)((long)param_1 + 0x7a4) = *(ushort *)((long)param_1 + 0x7a4) & 0xfff0 | 10;
  uVar15 = _DAT_008a0448;
  FUN__text__006f4424(param_1 + 0xee,_DAT_008a0448,param_1 + 0xf4);
  FUN__text__006ebd70(puVar2);
  *(ushort *)(param_1 + 0x100) = *(ushort *)(param_1 + 0x100) | 3;
  FUN__text__006f483c(param_1 + 0xfc,uVar15,puVar2);
  FUN__text__006ebd10(param_1 + 0x113);
  FUN__text__006ebd38(param_1 + 0x10d);
  *(undefined1 *)(param_1 + 0x10d) = 1;
  param_1[0x110] = (long)(param_1 + 0x113);
  if (param_3 <= (ulong)(param_1[0xea] - *plVar1 >> 9)) {
    return;
  }
  if (param_3 >> 0x37 != 0) {
    auVar21 = FUN__text__005b8a24(plVar1);
    lVar11 = auVar21._8_8_;
    lVar12 = auVar21._0_8_;
    if ((*_DAT_008a01f8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(_DAT_008a01f8);
      puVar2 = _DAT_008a0200;
      if (iVar9 != 0) {
        *_DAT_008a0200 = 0xcbf29ce484222645;
        puVar2[1] = 0x70f683;
        puVar2[2] = 0;
        puVar2[3] = 0;
        FUN__text__001001d0(_DAT_008a0208,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(_DAT_008a01f8);
      }
    }
    FUN__text__005b709c(lVar12,_DAT_008a0200,0);
    uVar15 = tpidr_el0;
    bVar8 = (byte)((uint)uVar15 >> 0xd) & 0x4f;
    pbVar3 = (byte *)(lVar12 + 0x56);
    while (*pbVar3 == 0x4f) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
      if (bVar7) {
        *pbVar3 = bVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB__text__005b7724;
    }
    ClearExclusiveLocal();
    pcVar4 = (char *)(lVar12 + 0x57);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
      if (bVar7) {
        *pcVar4 = *pcVar4 + '\x01';
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    do {
      if (*pbVar3 != 0x4f) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x54));
          while (*pbVar3 == 0x4f) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
            if (bVar7) {
              *pbVar3 = bVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB__text__005b7714;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
      if (bVar7) {
        *pbVar3 = bVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB__text__005b7714:
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
      if (bVar7) {
        *pcVar4 = *pcVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB__text__005b7724:
    puVar19 = (uint *)&DAT_00757c98;
    do {
      uVar5 = *puVar19;
      uVar20 = (ulong)uVar5;
      if ((*(uint *)(uVar20 * 4 + 0x757cb0) & *(uint *)(lVar11 + 0x11c)) != 0) {
        lVar18 = *(long *)(lVar11 + 8);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
        }
        lVar17 = lVar12 + 0x80 + uVar20 * 0x120;
        lVar16 = *(long *)(lVar17 + 8);
        *(long *)(lVar17 + 8) = lVar18;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
        }
        pcVar14 = *(code **)(lVar17 + 0x18);
        if (pcVar14 != (code *)0x0) {
          *(undefined8 *)(lVar17 + 0x20) = 0;
          *(undefined8 *)(lVar17 + 0x28) = 0;
          *(undefined8 *)(lVar17 + 0x10) = 0;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (*pcVar14)(lVar17 + 0x30);
        }
        if (*(code **)(lVar11 + 0x20) != (code *)0x0) {
          (**(code **)(lVar11 + 0x20))(lVar11 + 0x30,lVar17 + 0x30);
          uVar15 = *(undefined8 *)(lVar11 + 0x28);
          *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined8 *)(lVar17 + 0x28) = uVar15;
          uVar15 = *(undefined8 *)(lVar11 + 0x10);
          *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
          *(undefined8 *)(lVar17 + 0x10) = uVar15;
        }
        pcVar14 = *(code **)(lVar17 + 0x98);
        if (pcVar14 != (code *)0x0) {
          *(undefined8 *)(lVar17 + 0xa0) = 0;
          *(undefined8 *)(lVar17 + 0xa8) = 0;
          *(undefined8 *)(lVar17 + 0x90) = 0;
          *(undefined8 *)(lVar17 + 0x98) = 0;
          (*pcVar14)(lVar17 + 0xb0);
        }
        if (*(code **)(lVar11 + 0xa0) != (code *)0x0) {
          (**(code **)(lVar11 + 0xa0))(lVar11 + 0xb0,lVar17 + 0xb0);
          uVar15 = *(undefined8 *)(lVar11 + 0xa8);
          *(undefined8 *)(lVar17 + 0x98) = *(undefined8 *)(lVar11 + 0x98);
          *(undefined8 *)(lVar17 + 0xa8) = uVar15;
          uVar15 = *(undefined8 *)(lVar11 + 0x90);
          *(undefined8 *)(lVar17 + 0xa0) = *(undefined8 *)(lVar11 + 0xa0);
          *(undefined8 *)(lVar17 + 0x90) = uVar15;
        }
        lVar18 = lVar12 + 0x80 + uVar20 * 0x120;
        *(undefined8 *)(lVar18 + 0x118) = *(undefined8 *)(lVar11 + 0x118);
        *(undefined8 *)(lVar18 + 0x110) = *(undefined8 *)(lVar11 + 0x110);
        lVar16 = *(long *)(lVar12 + 0x748);
        for (lVar18 = *(long *)(lVar12 + 0x740); lVar18 != lVar16; lVar18 = lVar18 + 0x200) {
          if (*(uint *)(lVar18 + 0x1e8) == uVar5) {
            uVar10 = FUN__text__005cf99c(lVar17,uVar5,2,*(undefined8 *)(lVar18 + 0x28));
            *(undefined4 *)(lVar18 + 0x1ec) = uVar10;
          }
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != (uint *)0x757cb0);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
      if (bVar7) {
        *pbVar3 = 0x4f;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (*(char *)(lVar12 + 0x57) == '\0') {
      return;
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x54));
    return;
  }
  lVar12 = param_1[0xe9] - *plVar1 >> 9;
  lVar11 = (**(code **)(*(long *)param_1[0xeb] + 0x10))((long *)param_1[0xeb],param_3 << 9,0x10);
  if (lVar11 == 0) {
    (**(code **)(*(long *)param_1[0xeb] + 0xb8))();
    lVar12 = lVar12 * 0x200;
    lVar11 = param_3 * 0x200;
    lVar18 = *plVar1;
    lVar16 = param_1[0xe9];
    if (lVar16 == lVar18) goto LAB__text__005b756c;
  }
  else {
    lVar12 = lVar11 + lVar12 * 0x200;
    lVar11 = lVar11 + param_3 * 0x200;
    lVar18 = *plVar1;
    lVar16 = param_1[0xe9];
    if (lVar16 == lVar18) {
LAB__text__005b756c:
      lVar18 = param_1[0xea];
      *plVar1 = lVar12;
      param_1[0xe9] = lVar12;
      param_1[0xea] = lVar11;
      goto joined_r0x005b7578;
    }
  }
  uVar20 = tpidr_el0;
  uVar20 = uVar20 & 0xffffffffffffe000;
  lVar13 = *(long *)(uVar20 + 0x98);
  lVar17 = lVar12;
  do {
    if (lVar13 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    lVar16 = lVar16 + -0x200;
    lVar17 = lVar17 + -0x200;
    *(long *)((uVar20 | 0x18) + lVar13 * 8) = param_1[0xeb];
    *(long *)(uVar20 + 0x98) = *(long *)(uVar20 + 0x98) + 1;
    FUN__text__005a6738(lVar17,lVar16);
    lVar13 = *(long *)(uVar20 + 0x98) + -1;
    *(long *)(uVar20 + 0x98) = lVar13;
  } while (lVar16 != lVar18);
  lVar16 = *plVar1;
  lVar13 = param_1[0xe9];
  *plVar1 = lVar17;
  param_1[0xe9] = lVar12;
  lVar18 = param_1[0xea];
  param_1[0xea] = lVar11;
  while (lVar13 != lVar16) {
    lVar13 = lVar13 + -0x200;
    FUN__text__0014821c(lVar13);
  }
joined_r0x005b7578:
  if (lVar16 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005b7544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xeb] + 0x18))((long *)param_1[0xeb],lVar16,lVar18 - lVar16,0x10);
  return;
}


