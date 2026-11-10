/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea390; name: FUN_.text__004ea390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ea390(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = (long *)(param_1 + 0x40);
  plVar5 = (long *)*plVar8;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5;
    do {
      plVar9 = (long *)*plVar6;
      plVar1 = plVar8;
      if (plVar5 != plVar6) {
        plVar1 = (long *)0x0;
      }
      *plVar1 = (long)plVar9;
      iVar2 = (int)plVar6[6] + -1;
      *(int *)(plVar6 + 6) = iVar2;
      if (iVar2 == 0) {
        lVar4 = plVar6[1];
        plVar6[1] = 0;
        if ((lVar4 != 0) && (FUN__text__004eb980(), plVar6[1] != 0)) {
          FUN__text__004eb980();
          plVar6[1] = 0;
        }
        FUN__text__00400fc0(0,plVar6);
      }
      plVar5 = (long *)*plVar8;
      plVar6 = plVar9;
    } while (plVar5 != (long *)0x0);
  }
  FUN__text__00431eb0(*_DAT_008a4658,param_1);
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (puVar7 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar7 + 0xc);
    iVar3 = iVar2 + -1;
    *(int *)(puVar7 + 0xc) = iVar3;
    if (((iVar3 == 0) ||
        (((iVar3 == 1 && (iVar2 != 0 || *(char *)((long)puVar7 + 100) == '\0')) &&
         (*(char *)((long)puVar7 + 100) != '\0')))) &&
       (FUN__text__004473f0(puVar7), *(int *)(puVar7 + 0xc) == 0)) {
      (**(code **)*puVar7)(puVar7);
      FUN__text__00400fc0(4,puVar7);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN__text__004e7168(param_1 + 0x58);
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN__text__0040c060();
  return;
}


