/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404130; name: FUN_.text__00404130
 */


void FUN__text__00404130(undefined4 param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_2 + 0xce0);
  do {
    plVar5 = (long *)*plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
joined_r0x00404160:
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar6 = (long *)*plVar5;
    if (*(uint *)((long)plVar5 + 0xc) < 0x7e) break;
    if (*(uint *)((long)plVar5 + 0xc) != 0xffffffff) {
      *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + -1;
      lVar4 = plVar5[9];
      if ((long *)*(long *)(param_2 + 0x3110) == plVar5) {
        *(long *)(param_2 + 0x3110) = lVar4;
      }
      else {
        lVar3 = plVar5[10];
        *(long *)(lVar3 + 0x48) = lVar4;
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x50) = lVar3;
        }
      }
      if ((param_3 != (long *)0x0) && (*(int *)((long)plVar5 + 0x2c) == 1))
      goto LAB__text__004041dc;
      goto LAB__text__00404170;
    }
    FUN__text__00404510(param_1,plVar5);
    plVar5 = plVar6;
  }
  *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + -1;
  lVar4 = param_2 + (ulong)*(uint *)((long)plVar5 + 0xc) * 8;
  lVar3 = plVar5[9];
  if ((long *)*(long *)(lVar4 + 0x2d20) == plVar5) {
    *(long *)(lVar4 + 0x2d20) = lVar3;
  }
  else {
    lVar4 = plVar5[10];
    *(long *)(lVar4 + 0x48) = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x50) = lVar4;
    }
  }
  if (param_3 != (long *)0x0) {
LAB__text__004041dc:
    if (*param_3 == 0) {
      *param_3 = (long)plVar5;
      plVar5 = plVar6;
      goto joined_r0x00404160;
    }
  }
LAB__text__00404170:
  FUN__text__00404260(param_1,param_2);
  plVar5 = plVar6;
  goto joined_r0x00404160;
}


