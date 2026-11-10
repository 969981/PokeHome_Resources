/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005026f0; name: FUN_.text__005026f0
 */


void FUN__text__005026f0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  plVar2 = (long *)param_1[0x10];
  if ((long *)param_1[0x10] == (long *)0x0) {
    return;
  }
  do {
    plVar4 = plVar2;
    if (param_2 <= plVar4[1]) {
      uVar3 = 0;
      goto LAB__text__00502788;
    }
    plVar2 = (long *)*plVar4;
  } while ((long *)*plVar4 != (long *)0x0);
  if (plVar4[1] < param_2) {
    uVar3 = 0;
    do {
      if ((char)param_1[0x19] == '\0') {
        return;
      }
      lVar5 = param_1[0xf];
      lVar1 = FUN__text__00502238(param_1,&uStack_22);
      if (lVar1 == lVar5) {
        return;
      }
      if (lVar1 == 0) {
        return;
      }
      if (uVar3 == 0x40) goto LAB__text__0050280c;
      plVar4 = (long *)*plVar4;
      uVar3 = uVar3 + 1;
    } while (plVar4[1] < param_2);
LAB__text__00502788:
    plVar2 = (long *)*plVar4;
    if (plVar2 == (long *)0x0) goto LAB__text__005027dc;
LAB__text__00502790:
    if (*plVar2 != 0 || (char)param_1[0x19] == '\0') {
      return;
    }
  }
  else {
    uVar3 = 0;
    plVar2 = (long *)*plVar4;
    if (plVar2 != (long *)0x0) goto LAB__text__00502790;
LAB__text__005027dc:
    if ((char)param_1[0x19] == '\0') {
      return;
    }
    lVar5 = param_1[0xf];
    lVar1 = FUN__text__00502238(param_1,&uStack_21);
    if (lVar1 == lVar5) {
      return;
    }
    if (lVar1 == 0) {
      return;
    }
    uVar3 = uVar3 + 1;
    if (0x40 < uVar3) goto LAB__text__0050280c;
    if (*(long *)*plVar4 != 0 || (char)param_1[0x19] == '\0') {
      return;
    }
  }
  lVar5 = param_1[0xf];
  lVar1 = FUN__text__00502238(param_1,&uStack_21);
  if (((lVar1 == lVar5) || (lVar1 == 0)) || (0xffffffbe < uVar3 - 0x40)) {
    return;
  }
LAB__text__0050280c:
                    /* WARNING: Could not recover jumptable at 0x00502828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1);
  return;
}


