/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004018a0; name: FUN_.text__004018a0
 */


undefined8 FUN__text__004018a0(uint param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = DAT_00ae89b8;
  if (((param_1 >> 0x1d & 1) == 0) && (param_3 <= DAT_00ae89b4)) {
    lVar4 = tpidr_el0;
    lVar7 = *(long *)(lVar4 + 0x18);
    if (lVar7 == -1) {
      lVar5 = FUN__text__00403cc0(0);
      *(long *)(lVar4 + 0x18) = lVar5;
      FUN__text__004047e0(0,lVar5);
      lVar7 = FUN__text__00404880(0,param_2);
      if (lVar7 == DAT_00ae89b8) goto LAB__text__004019a4;
    }
    else {
      if (lVar7 != 0) goto LAB__text__00401924;
      lVar7 = FUN__text__00404880(0,param_2);
      if (lVar7 == DAT_00ae89b8) goto LAB__text__004019a4;
    }
  }
  else {
    lVar7 = DAT_00ae89b8;
LAB__text__00401924:
    lVar5 = lVar7;
    lVar7 = FUN__text__00404880(0,param_2);
    if (lVar7 == DAT_00ae89b8) goto LAB__text__004019a4;
  }
  if (lVar5 != DAT_00ae89b8) {
    uVar6 = FUN__text__00404110(0,lVar5,param_2,param_4,param_3,0);
    return uVar6;
  }
LAB__text__004019a4:
  FUN__text__00400fe0(&DAT_00ae8978);
  uVar6 = FUN__text__00404110(0,lVar5,param_2,param_4,param_3,0);
  DAT_00ae897c = DAT_00ae897c + -1;
  if (DAT_00ae897c == 0) {
    DAT_00ae89a8 = 0;
    do {
      iVar3 = DAT_00ae8978 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xae8978,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00ae8978 = iVar3;
      }
    } while (cVar1 != '\0');
    if (-1 < iVar3) {
      nn::os::ReleaseSemaphore((SemaphoreType *)&DAT_00ae8980,1);
      return uVar6;
    }
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xae8978,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00ae8978 = DAT_00ae8978 + -1;
      }
    } while (cVar1 != '\0');
  }
  return uVar6;
}


