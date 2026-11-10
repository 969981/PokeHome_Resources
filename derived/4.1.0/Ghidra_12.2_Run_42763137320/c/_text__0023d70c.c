/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023d70c; name: FUN_.text__0023d70c
 */


void FUN__text__0023d70c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x678);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    (*pcVar1)(param_1 + 0x690);
  }
  FUN__text__00128620(param_1);
  return;
}


