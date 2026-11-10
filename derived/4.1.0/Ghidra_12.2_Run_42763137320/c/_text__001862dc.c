/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001862dc; name: FUN_.text__001862dc
 */


void FUN__text__001862dc(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x698);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x690) = 0;
    (*pcVar1)(param_1 + 0x6b0);
  }
  FUN__text__00128620(param_1);
  return;
}


