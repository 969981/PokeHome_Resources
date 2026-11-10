/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023af28; name: FUN_.text__0023af28
 */


void FUN__text__0023af28(long param_1)

{
  code *pcVar1;
  
  FUN__text__003d1120(param_1 + 0x6e0);
  pcVar1 = *(code **)(param_1 + 0x668);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    (*pcVar1)(param_1 + 0x680);
  }
  FUN__text__00128620(param_1);
  return;
}


