/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050ace0; name: FUN_.text__0050ace0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0050ace0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((int)param_1[1] == 0) {
LAB__text__0050ada8:
    FUN__text__00542970(param_2);
    param_1 = param_1 + 0x10;
    plVar3 = param_1;
    plVar2 = (long *)0x0;
    do {
      plVar4 = plVar2;
      plVar3 = (long *)*plVar3;
      plVar2 = plVar3;
    } while (plVar3 != (long *)0x0 && plVar3 != param_2);
    if (plVar3 != (long *)0x0) {
      if ((long *)*param_1 != plVar3) {
        param_1 = plVar4;
      }
      *param_1 = *plVar3;
    }
    FUN__text__00542970(param_2);
    param_2[1] = _DAT_008a40a0 + 0x10;
    if (param_2[2] != 0) {
      FUN__text__0050cda0();
      param_2[2] = 0;
    }
    FUN__text__00400fc0(9,param_2);
    return;
  }
  lVar5 = *(long *)*param_1;
  if (lVar5 == 0) {
    uVar6 = 0;
    do {
      if ((int)param_1[1] - 1 == uVar6) goto LAB__text__0050ada8;
      lVar5 = ((long *)*param_1)[uVar6 + 1];
      uVar6 = uVar6 + 1;
    } while (lVar5 == 0);
  }
  else {
    uVar6 = 0;
  }
LAB__text__0050ad40:
  do {
    if (*(long **)(lVar5 + 0xb0) == param_2) goto LAB__text__0050ad60;
    lVar5 = *(long *)(lVar5 + 0x80);
  } while (lVar5 != 0);
  goto LAB__text__0050ad74;
LAB__text__0050ad60:
  FUN__text__00523910(lVar5,param_1[0xf]);
  lVar5 = *(long *)(lVar5 + 0x80);
  if (lVar5 == 0) {
LAB__text__0050ad74:
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 <= (int)uVar6 + 1U) {
      uVar1 = (int)uVar6 + 1;
    }
    do {
      if (uVar1 - 1 == (int)uVar6) goto LAB__text__0050ada8;
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar5 = *(long *)(*param_1 + uVar6 * 8);
    } while (lVar5 == 0);
  }
  goto LAB__text__0050ad40;
}


