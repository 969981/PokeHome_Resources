/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404660; name: FUN_.text__00404660
 */


void FUN__text__00404660(int param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  if ((*(uint *)(param_2 + 0x28) & 1) == 0) {
    uVar12 = *(uint *)(param_2 + 0x2c);
    uVar8 = (&DAT_00ae8a40)[(long)param_1 * 199];
    lVar11 = param_2 - uVar8 * *(uint *)(param_2 + 0x34);
    if (*(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638) <= uVar8) {
      (**(code **)(&DAT_00ae89e8 + (long)param_1 * 0x638))
                (param_2,uVar8 * uVar12,*(undefined8 *)(param_2 + 0x58),0);
    }
  }
  else {
    uVar12 = *(uint *)(param_2 + 0x2c);
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0xb;
    lVar11 = param_2;
  }
  piVar1 = (int *)(lVar11 + 0x38);
  do {
    iVar3 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar3 - uVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)(iVar3 - uVar12) < 1) {
    lVar4 = (long)param_1 * 0x638;
    uVar8 = (&DAT_00ae8a40)[(long)param_1 * 199];
    lVar9 = uVar8 * *(uint *)(lVar11 + 0x30);
    lVar7 = 0x30;
    if (*(ulong *)(&DAT_00ae8a28 + lVar4) <= uVar8) {
      lVar7 = 0x2c;
    }
    iVar3 = *(int *)(lVar11 + 0x3c);
    lVar7 = uVar8 * *(uint *)(lVar11 + lVar7);
    uVar10 = -((ulong)((uint)-iVar3 >> 0x1c) & 1) & 0xffffffff00000000 |
             ((ulong)(uint)-iVar3 & 0x1fffffff) << 3;
    if (iVar3 == 0 || lVar9 == 0) {
      uVar8 = 0;
    }
    lVar2 = uVar8 + lVar9;
    if (iVar3 == 0 || lVar9 == 0) {
      uVar10 = 0;
    }
    (**(code **)(&DAT_00ae89e8 + lVar4))(lVar11 + uVar10,lVar7,*(undefined8 *)(lVar11 + 0x58),lVar2)
    ;
    if (lVar2 != 0) {
      do {
        lVar11 = DAT_00ae89d0;
        lVar7 = DAT_00ae89d0 - lVar2;
        while (DAT_00ae89d0 == lVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            DAT_00ae89d0 = lVar7;
          }
          if (cVar5 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  return;
}


