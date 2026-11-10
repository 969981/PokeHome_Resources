/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00499940; name: FUN_.text__00499940
 */


undefined1  [16] FUN__text__00499940(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *param_2;
  plVar4 = param_1 + 0x25;
  if ((long *)param_1[0x25] != param_2) {
    plVar4 = param_3;
  }
  *plVar4 = lVar5;
  if (*(char *)(param_2[1] + 0x130) != '\0') {
    (**(code **)(*param_1 + 0x130))(param_1,1);
  }
  FUN__text__004992f0(param_2);
  FUN__text__00458c80(param_2 + 0xc);
  if (param_2[8] != 0) {
    FUN__text__0040c060();
  }
  if (DAT_00aea940 == (long *)0x0) {
    plVar3 = (long *)0x0;
    plVar4 = (long *)0x0;
  }
  else if ((param_2 < DAT_00aea940) || (DAT_00aea940 + 0x880 <= param_2)) {
    plVar3 = (long *)DAT_00aea940[0x880];
    plVar4 = DAT_00aea940;
    if (plVar3 != (long *)0x0) {
      do {
        plVar2 = plVar3;
        if (plVar2 <= param_2) {
          plVar3 = plVar2;
          if (param_2 < plVar2 + 0x880) break;
        }
        plVar3 = (long *)plVar2[0x880];
        plVar4 = plVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  else {
    plVar3 = DAT_00aea940;
    plVar4 = (long *)0x0;
  }
  plVar2 = plVar3 + 0x881;
  if (plVar3[0x882] == 0) {
    plVar3[0x882] = (long)param_2;
    *param_2 = 0;
    iVar1 = (int)*plVar2 + 1;
    *(int *)plVar2 = iVar1;
  }
  else {
    *param_2 = plVar3[0x882];
    plVar3[0x882] = (long)param_2;
    iVar1 = (int)*plVar2 + 1;
    *(int *)plVar2 = iVar1;
  }
  if (iVar1 == 0x80) {
    plVar2 = (long *)&DAT_00aea940;
    if (DAT_00aea940 != plVar3) {
      plVar2 = plVar4 + 0x880;
    }
    *plVar2 = plVar3[0x880];
    FUN__text__00400fc0(0);
  }
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = lVar5;
  return auVar6;
}


