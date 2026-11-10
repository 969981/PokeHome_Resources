/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477cb0; name: FUN_.text__00477cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00477cb0(undefined4 param_1,long *param_2,undefined8 param_3,uint param_4,
                       undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char local_64 [4];
  
  *(undefined4 *)(param_2 + 0x3e) = param_1;
  if ((*(ushort *)(param_2 + 0x41) >> 6 & 1) == 0) {
    FUN__text__0046ab40(param_2[0x3a],param_2 + 1,param_2 + 0x2c,param_2 + 0x31);
    if ((((*(byte *)(param_2 + 0x2e) >> 3 & 1) != 0) &&
        ((*(ushort *)((long)param_2 + 0x19c) & 7) - 1 < 2)) && (param_2[0x39] == 0)) {
      FUN__text__0046adf0(param_2[0x3a],param_2 + 0x39);
    }
  }
  else {
    param_2[0x2c] = 0x3f8000003f000000;
    param_2[0x2d] = 0x42c8000000000000;
    *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) & 0xf0;
  }
  lVar11 = DAT_00ae9a38;
  lVar13 = param_2[0x34];
  if (lVar13 == 0) {
    uVar10 = *(uint *)((long)param_2 + 0x18c);
    if (uVar10 != 0) {
      piVar1 = (int *)(DAT_00ae9a38 + 0x2d0);
      pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x2e0);
      while( true ) {
        while (iVar9 = *piVar1, -1 < iVar9) {
          while (*piVar1 == iVar9) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB__text__00477efc;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar2);
        if (*piVar1 < 0) break;
        nn::os::UnlockMutex(pMVar2);
      }
LAB__text__00477efc:
      uVar4 = *(uint *)(lVar11 + 0x338);
      if (uVar4 == 0) {
        lVar13 = 0;
      }
      else {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar10 / uVar4;
        }
        lVar13 = *(long *)(*(long *)(lVar11 + 0x330) + (ulong)(uVar10 - uVar8 * uVar4) * 8);
        if (lVar13 != 0) {
LAB__text__00477f20:
          if (*(uint *)(lVar13 + 0x10) != uVar10) goto code_r0x00477f2c;
          piVar3 = (int *)(lVar13 + 0x14);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = *piVar3 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
LAB__text__00477f64:
      while (iVar9 = *piVar1, -1 < iVar9) {
        while (*piVar1 == iVar9) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar11 + 0x300))) {
              nn::os::SignalEvent((EventType *)(lVar11 + 0x308));
            }
            param_2[0x34] = lVar13;
            goto joined_r0x00477fa8;
          }
        }
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      param_2[0x34] = lVar13;
joined_r0x00477fa8:
      if (lVar13 != 0) goto LAB__text__00477d60;
    }
  }
  else {
LAB__text__00477d60:
    local_64[0] = '\x01';
    *(undefined4 *)(param_2 + 0x32) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)((long)param_2 + 0x194) = *(undefined4 *)(lVar13 + 0x24);
    *(undefined4 *)(param_2 + 0x33) = *(undefined4 *)(lVar13 + 0x28);
    if ((int)param_2[0x3d] != 0) {
      puVar12 = (undefined8 *)param_2[0x3c];
      do {
        FUN__text__00432ba0(param_2 + 0xb,puVar12[2],local_64);
        if (local_64[0] == '\0') {
          FUN__text__00433930(param_2,*puVar12);
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != (undefined8 *)(param_2[0x3c] + (ulong)*(uint *)(param_2 + 0x3d) * 0x18));
    }
    *(undefined4 *)(param_2 + 0x3d) = 0;
    FUN__text__0047acd0(param_2,lVar13);
  }
  if ((param_2[0x39] == 0) || (param_2[0x2a] != 0)) {
    iVar9 = 1;
    uVar5 = *(ushort *)(param_2 + 0x41);
    lVar11 = *param_2;
  }
  else {
    iVar9 = FUN__text__004785a8(param_2,param_3);
    if (iVar9 == 1) {
      if (param_2[0x2a] != 0) {
        iVar9 = FUN__text__0047bc40(*_DAT_008a4650,param_2[0x2a],param_2);
        if (iVar9 == 2) {
          param_2[0x2a] = 0;
          uVar5 = *(ushort *)(param_2 + 0x41);
          lVar11 = *param_2;
        }
        else {
          (**(code **)(*param_2 + 0x88))(param_2,param_2[0x2a]);
          uVar5 = *(ushort *)(param_2 + 0x41);
          lVar11 = *param_2;
        }
        goto joined_r0x00478100;
      }
      iVar9 = 1;
    }
    uVar5 = *(ushort *)(param_2 + 0x41);
    lVar11 = *param_2;
  }
joined_r0x00478100:
  if ((uVar5 & 1) == 0) {
    (**(code **)(lVar11 + 0x70))(param_2,param_6);
  }
  else {
    (**(code **)(lVar11 + 0x78))(param_2);
    if ((*(ushort *)(param_2 + 0x41) >> 4 & 1) != 0) {
      (**(code **)(*param_2 + 0x80))(param_2);
    }
  }
  fVar16 = *(float *)(param_2 + 0x11) * 0.05;
  fVar14 = 0.0;
  if ((-37.0 <= fVar16) && (fVar16 <= 37.0)) {
    uVar10 = (uint)(*(float *)(param_2 + 0x11) * 1393317.6 + 1.0653532e+09);
    fVar14 = (float)(uVar10 & 0x7fffff | 0x3f800000);
    fVar14 = (fVar14 * (fVar14 * 0.32518977 + 0.020805772) + 0.65304345) *
             (float)(uVar10 & 0xff800000);
  }
  fVar16 = *(float *)(param_2 + 0x20);
  fVar15 = *_DAT_008a4f40;
  *(bool *)param_7 = fVar16 * fVar14 <= fVar15;
  if ((iVar9 == 1 && (param_4 & 1) == 0) && (iVar9 = 1, fVar16 * fVar14 <= fVar15)) {
    if ((*(ushort *)(param_2 + 0x41) >> 6 & 1) == 0) {
      iVar9 = 3;
      *param_5 = 0x29;
    }
    else {
      iVar9 = 1;
    }
  }
  return iVar9;
code_r0x00477f2c:
  lVar13 = *(long *)(lVar13 + 8);
  if (lVar13 == 0) goto LAB__text__00477f64;
  goto LAB__text__00477f20;
}


