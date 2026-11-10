/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00402100; name: FUN_.text__00402100
 */


void FUN__text__00402100(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4));
  if (lVar6 != 0) {
    FUN__text__00403d00(param_1,lVar6,0,1);
  }
  FUN__text__00405b80(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4),0);
  lVar6 = (long)param_1 * 0x638;
  if (*(long *)(&DAT_00ae8e68 + lVar6) != 0) {
    iVar2 = *(int *)(&DAT_00ae8e70 + (long)param_1 * 0x638);
    piVar1 = (int *)(*(long *)(&DAT_00ae8e78 + (long)param_1 * 0x638) + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 - iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(&DAT_00ae8e70 + lVar6) = 0;
    *(undefined8 *)(&DAT_00ae8e78 + lVar6) = 0;
    *(undefined8 *)(&DAT_00ae8e68 + lVar6) = 0;
  }
  lVar6 = 0;
  *(undefined4 *)(&DAT_00ae8ff8 + (long)param_1 * 0x638) = 0;
  do {
    lVar5 = *(long *)(&DAT_00ae8e80 + (long)param_1 * 0x638 + lVar6 * 8);
    while (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0xd08);
      *(undefined4 *)(lVar5 + 0xd1c) = 1;
      FUN__text__00402220(param_1);
      lVar5 = lVar7;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x2f);
  lVar6 = (long)param_1 * 4;
  FUN__text__00405ac0(*(undefined4 *)(&DAT_00ae89c0 + lVar6));
  *(undefined4 *)(&DAT_00ae89c0 + lVar6) = 0;
  *(undefined4 *)(&DAT_00ae89d8 + (long)param_1 * 0x638) = 0;
  return;
}


