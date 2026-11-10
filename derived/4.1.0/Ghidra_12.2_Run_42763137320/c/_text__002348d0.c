/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002348d0; name: FUN_.text__002348d0
 */


void FUN__text__002348d0(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x7f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x7f0) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x778);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x770) = 0;
    (*pcVar1)(param_1 + 0x790);
  }
  pcVar1 = *(code **)(param_1 + 0x6e8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    (*pcVar1)(param_1 + 0x700);
  }
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


