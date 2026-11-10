/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9250; name: FUN_.text__004e9250
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__004e9250(long *param_1)

{
  byte bVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = DAT_00aeba20;
  if (DAT_00aeba20 != (long *)0x0 && DAT_00aeba20 + 1 != param_1) {
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0 && plVar6 + 1 != param_1);
  }
  bVar3 = *(byte *)(plVar6 + 2);
  bVar1 = bVar3 & 0xfd;
  *(byte *)(plVar6 + 2) = bVar1;
  if ((bVar3 & 1) == 0) {
    lVar4 = plVar6[1];
    *(byte *)(plVar6 + 2) = bVar1 | 1;
    FUN__text__0040e7c0((int)lVar4,*(undefined4 *)((long)plVar6 + 0xc),0,1);
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (*(int *)(plVar6 + 1) == (int)lVar4) {
        *(byte *)(plVar6 + 2) = *(byte *)(plVar6 + 2) | 1;
      }
    }
  }
  if (DAT_00aeba20 != (long *)0x0) {
    plVar6 = (long *)0x0;
    plVar7 = DAT_00aeba20;
    do {
      while (plVar5 = plVar7, plVar7 = (long *)*plVar5, (*(byte *)(plVar5 + 2) >> 1 & 1) == 0) {
        plVar2 = (long *)&DAT_00aeba20;
        if (DAT_00aeba20 != plVar5) {
          plVar2 = plVar6;
        }
        *plVar2 = (long)plVar7;
        if (DAT_00aeba28 == plVar5) {
          DAT_00aeba28 = plVar6;
          if (plVar5 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= plVar5)
          goto LAB__text__004e9350;
        }
        else if (plVar5 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= plVar5) {
LAB__text__004e9350:
          FUN__text__00400fc0(0);
          DAT_00aeba44 = DAT_00aeba44 + -1;
          plVar5 = plVar6;
          break;
        }
        *plVar5 = (long)DAT_00aeba30;
        DAT_00aeba44 = DAT_00aeba44 + -1;
        DAT_00aeba30 = plVar5;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      plVar6 = plVar5;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


