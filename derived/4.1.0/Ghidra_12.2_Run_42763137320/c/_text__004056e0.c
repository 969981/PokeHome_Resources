/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004056e0; name: FUN_.text__004056e0
 */


void FUN__text__004056e0(int param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_2[8];
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    lVar4 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4));
    plVar5 = (long *)param_2[8];
    if ((lVar6 != lVar4) && (*(int *)((long)plVar5 + 0xd1c) == 0)) {
      plVar5 = plVar5 + 0x19c;
      do {
        lVar6 = *plVar5;
        *param_2 = lVar6;
        while (*plVar5 == lVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = (long)param_2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  plVar5[0x19d] = plVar5[0x19d] + -1;
  lVar6 = param_2[9];
  if (*(long **)(param_2[8] + 0x3110) == param_2) {
    *(long *)(param_2[8] + 0x3110) = lVar6;
    uVar1 = *(uint *)((long)param_2 + 0x2c);
    lVar6 = param_2[8];
  }
  else {
    lVar4 = param_2[10];
    *(long *)(lVar4 + 0x48) = lVar6;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x50) = lVar4;
    }
    uVar1 = *(uint *)((long)param_2 + 0x2c);
    lVar6 = param_2[8];
  }
  if ((((uVar1 < 2) || (*(long *)(lVar6 + 0xbd8) != 0)) || (*(int *)(lVar6 + 0xd1c) != 0)) ||
     (*(int *)(lVar6 + 0xd00) != 0)) {
    FUN__text__00404260(param_1,lVar6,param_2);
    return;
  }
  *(long **)(lVar6 + 0xcf0) = param_2;
  *(undefined4 *)(lVar6 + 0xd00) = *(undefined4 *)((long)param_2 + 0x2c);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(ulong *)(lVar6 + 0xcf8) =
         (long)param_2 -
         (&DAT_00ae8a40)[(long)param_1 * 199] * (ulong)*(uint *)((long)param_2 + 0x34);
    return;
  }
  *(long **)(lVar6 + 0xcf8) = param_2;
  return;
}


