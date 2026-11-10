/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c0170; name: FUN_.text__006c0170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__006c0170(long *param_1,char *param_2,uint param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  
  plVar2 = (long *)FUN__text__006a0f04(0x18);
  lVar4 = _DAT_008a36f8;
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    *plVar2 = lVar4 + 0x10;
    plVar2[1] = -1;
  }
  plVar3 = (long *)FUN__text__006a0f04(0xa0);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN__text__006bff80(plVar3,plVar2,param_3 & 1);
  lVar4 = 0;
  cVar1 = *param_2;
  plVar6 = plVar3;
  do {
    if (cVar1 == '\0') {
      plVar6 = plVar6 + 2;
LAB__text__006c0224:
      *(undefined1 *)plVar6 = 0;
      pcVar5 = param_2 + lVar4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      lVar4 = *plVar3;
      *plVar3 = *param_1;
      *(long **)(lVar4 + 8) = param_1;
      *(long **)(*param_1 + 8) = plVar3;
      *param_1 = lVar4;
      return plVar2;
    }
    *(char *)(plVar6 + 2) = cVar1;
    if (((int)lVar4 == 0x7e) || (param_2[lVar4 + 1] == '\0')) {
      lVar4 = lVar4 + 1;
      plVar6 = (long *)((long)plVar6 + 0x11);
      goto LAB__text__006c0224;
    }
    *(char *)((long)plVar6 + 0x11) = param_2[lVar4 + 1];
    lVar4 = lVar4 + 2;
    cVar1 = param_2[lVar4];
    plVar6 = (long *)((long)plVar3 + lVar4);
  } while( true );
}


