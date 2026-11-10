/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144394; name: FUN_.text__00144394
 */


void FUN__text__00144394(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x378);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    (*pcVar1)(param_1 + 0x390);
  }
  FUN__text__005e8798(param_1);
  return;
}


