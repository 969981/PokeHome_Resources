/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00131d14; name: FUN_.text__00131d14
 */


undefined8 FUN__text__00131d14(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x640) == 0) {
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x7c0) == '\0') {
      FUN__text__003c4008();
      *(undefined1 *)(param_1 + 0x7c0) = 1;
      uVar1 = FUN__text__003c415c(*(undefined8 *)(param_1 + 0x640));
    }
    else {
      uVar1 = FUN__text__003c415c();
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x640);
    *(undefined8 *)(param_1 + 0x640) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      return 1;
    }
  }
  return 1;
}


