/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404510; name: FUN_.text__00404510
 */


void FUN__text__00404510(int param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)param_2[8];
  lVar6 = *plVar4;
  if (lVar6 != 0) {
    lVar3 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4));
    plVar4 = (long *)param_2[8];
    if ((lVar6 != lVar3) && (*(int *)((long)plVar4 + 0xd1c) == 0)) {
      plVar4 = plVar4 + 0x19c;
      do {
        lVar6 = *plVar4;
        *param_2 = lVar6;
        while (*plVar4 == lVar6) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = (long)param_2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  plVar4[0x19d] = plVar4[0x19d] + -1;
  lVar6 = param_2[9];
  if (*(long **)(param_2[8] + 0x3110) == param_2) {
    *(long *)(param_2[8] + 0x3110) = lVar6;
  }
  else {
    lVar3 = param_2[10];
    *(long *)(lVar3 + 0x48) = lVar6;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x50) = lVar3;
    }
  }
  plVar4 = param_2 + 0xb;
  lVar6 = *(long *)(&DAT_00ae8a28 + (long)param_1 * 0x638) * (ulong)*(uint *)((long)param_2 + 0x2c);
  if ((*(int *)((long)param_2 + 0x3c) == 0) || (lVar6 == 0)) {
    lVar3 = lVar6;
  }
  else {
    param_2 = (long *)((long)param_2 +
                      ((long)((ulong)(uint)-*(int *)((long)param_2 + 0x3c) << 0x23) >> 0x20));
    lVar3 = (&DAT_00ae8a40)[(long)param_1 * 199] + lVar6;
  }
  (**(code **)(&DAT_00ae89e8 + (long)param_1 * 0x638))(param_2,lVar6,*plVar4,lVar3);
  if (lVar3 == 0) {
    return;
  }
  do {
    lVar6 = DAT_00ae89d0;
    lVar5 = DAT_00ae89d0 - lVar3;
    while (DAT_00ae89d0 == lVar6) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00ae89d0 = lVar5;
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


