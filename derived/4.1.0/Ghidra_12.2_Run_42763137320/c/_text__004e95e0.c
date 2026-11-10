/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e95e0; name: FUN_.text__004e95e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__004e95e0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN__text__0040e7c0(param_1,*(undefined4 *)(*param_2 + 0xc),0,1);
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) | 1;
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) & 0xfd;
  plVar3 = (long *)*param_2;
  while (plVar3 != (long *)0x0) {
    if ((int)plVar3[1] == (int)param_1) {
      *(byte *)(plVar3 + 2) = *(byte *)(plVar3 + 2) | 1;
      plVar3 = (long *)*param_2;
    }
    plVar3 = (long *)*plVar3;
    *param_2 = (long)plVar3;
  }
  if (DAT_00aeba20 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    puVar5 = DAT_00aeba20;
    do {
      while (puVar2 = puVar5, puVar5 = (undefined8 *)*puVar2, (*(byte *)(puVar2 + 2) >> 1 & 1) == 0)
      {
        puVar1 = &DAT_00aeba20;
        if (DAT_00aeba20 != puVar2) {
          puVar1 = puVar4;
        }
        *puVar1 = puVar5;
        if (DAT_00aeba28 == puVar2) {
          DAT_00aeba28 = puVar4;
          if (puVar2 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= puVar2)
          goto LAB__text__004e96cc;
        }
        else if (puVar2 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= puVar2) {
LAB__text__004e96cc:
          FUN__text__00400fc0(0);
          DAT_00aeba44 = DAT_00aeba44 + -1;
          puVar2 = puVar4;
          break;
        }
        *puVar2 = DAT_00aeba30;
        DAT_00aeba44 = DAT_00aeba44 + -1;
        DAT_00aeba30 = puVar2;
        if (puVar5 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar4 = puVar2;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


