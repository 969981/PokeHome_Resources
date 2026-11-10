/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00401580; name: FUN_.text__00401580
 */


undefined8 FUN__text__00401580(uint param_1,ulong param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (((param_1 >> 0x1d & 1) == 0) && (param_2 <= DAT_00ae89b4)) {
    lVar6 = tpidr_el0;
    lVar5 = *(long *)(lVar6 + 0x18);
    if (lVar5 == -1) {
      lVar5 = FUN__text__00403cc0(0);
      *(long *)(lVar6 + 0x18) = lVar5;
      FUN__text__004047e0(0,lVar5);
      lVar6 = lVar5;
      if (lVar5 == DAT_00ae89b8) goto LAB__text__0040164c;
      goto LAB__text__00401600;
    }
    lVar6 = DAT_00ae89b8;
    if (lVar5 == 0) goto LAB__text__0040164c;
  }
  else {
    lVar5 = DAT_00ae89b8;
  }
  lVar6 = lVar5;
  if (lVar5 == DAT_00ae89b8) {
LAB__text__0040164c:
    FUN__text__00400fe0(&DAT_00ae8978);
    uVar4 = thunk_FUN__text__004036d0(0,lVar6,param_3,param_2);
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
        return uVar4;
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
    return uVar4;
  }
LAB__text__00401600:
  uVar4 = thunk_FUN__text__004036d0(0,lVar5,param_3,param_2);
  return uVar4;
}


