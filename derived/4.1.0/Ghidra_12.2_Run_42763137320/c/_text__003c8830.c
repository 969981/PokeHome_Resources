/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8830; name: FUN_.text__003c8830
 */


void FUN__text__003c8830(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  if (param_2 != 0) {
    FUN__text__005a7f80(auStack_50,param_2);
    lVar1 = FUN__text__005c6c30(param_2,auStack_50);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0xb0) == 0)) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    FUN__text__005cd5c8();
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar1 = *(long *)(param_1 + 0xe8) * 0x18;
    pcVar3 = (char *)(*(long *)(param_1 + 0xe0) + 0x10);
    do {
      if (*pcVar3 == '\0') {
        FUN__text__003e716c(*(undefined8 *)(pcVar3 + -8));
      }
      lVar1 = lVar1 + -0x18;
      pcVar3 = pcVar3 + 0x18;
    } while (lVar1 != 0);
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x188) != 0)) {
    lVar1 = *(long *)(param_1 + 0x188) << 4;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x180) + 8);
    do {
      FUN__text__005c60c0(param_2,*puVar2);
      lVar1 = lVar1 + -0x10;
      puVar2 = puVar2 + 2;
    } while (lVar1 != 0);
  }
  return;
}


