/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022220c; name: FUN_.text__0022220c
 */


void FUN__text__0022220c(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x6c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x648);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(undefined8 *)(param_1 + 0x640) = 0;
    (*pcVar1)(param_1 + 0x660);
  }
  FUN__text__00128620(param_1);
  return;
}


