/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00427984; name: FUN_.text__00427984
 */


void FUN__text__00427984(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN__text__00400fc0(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0xdc) >> 3 & 1) == 0)) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN__text__004af200(param_1 + 0xa0);
  FUN__text__00426760(param_1 + 0x40);
  return;
}


