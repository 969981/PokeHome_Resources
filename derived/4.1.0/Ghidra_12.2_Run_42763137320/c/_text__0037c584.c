/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037c584; name: FUN_.text__0037c584
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037c584(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  long local_18;
  
  FUN__text__0037d60c(&local_18,*(undefined8 *)(param_1 + 8));
  plVar1 = *(long **)(param_1 + 0x1d8);
  if (plVar1 < *(long **)(param_1 + 0x1e0)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x1e8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *plVar1 = local_18;
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(long **)(param_1 + 0x1d8) = plVar1 + 1;
  }
  else {
    FUN__text__0037d710(param_1 + 0x1d0,&local_18);
  }
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  uVar2 = FUN__text__0039b7d0(param_1,auStack_50);
  FUN__text__00396c34(uVar2,local_18);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


