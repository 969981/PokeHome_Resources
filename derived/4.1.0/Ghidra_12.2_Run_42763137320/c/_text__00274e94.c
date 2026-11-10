/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00274e94; name: FUN_.text__00274e94
 */


void FUN__text__00274e94(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x728) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x728) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x728) = 0;
  }
  if (*(long *)(param_1 + 0x720) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x720) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x658);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    (*pcVar1)(param_1 + 0x670);
  }
  if (*(long *)(param_1 + 0x640) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x640) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN__text__00128620(param_1);
  return;
}


