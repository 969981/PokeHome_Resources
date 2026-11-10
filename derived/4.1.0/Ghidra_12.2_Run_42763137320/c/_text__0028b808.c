/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028b808; name: FUN_.text__0028b808
 */


void FUN__text__0028b808(long param_1)

{
  code *pcVar1;
  
  FUN__text__003d1120(param_1 + 0xfa8);
  FUN__text__003d1120(param_1 + 0x948);
  if (*(long *)(param_1 + 0x940) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x940) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x940) = 0;
  }
  if (*(long *)(param_1 + 0x938) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x938) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x938) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x850);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x860) = 0;
    *(undefined8 *)(param_1 + 0x858) = 0;
    *(undefined8 *)(param_1 + 0x850) = 0;
    *(undefined8 *)(param_1 + 0x848) = 0;
    (*pcVar1)(param_1 + 0x868);
  }
  FUN__text__0028bbfc(param_1 + -0x48);
  return;
}


