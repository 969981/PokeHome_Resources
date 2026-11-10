/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028b780; name: FUN_.text__0028b780
 */


void FUN__text__0028b780(long param_1)

{
  code *pcVar1;
  
  FUN__text__003d1120(param_1 + 0xff0);
  FUN__text__003d1120(param_1 + 0x990);
  if (*(long *)(param_1 + 0x988) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x988) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x988) = 0;
  }
  if (*(long *)(param_1 + 0x980) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x980) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x980) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x898);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x8a8) = 0;
    *(undefined8 *)(param_1 + 0x8a0) = 0;
    *(undefined8 *)(param_1 + 0x898) = 0;
    *(undefined8 *)(param_1 + 0x890) = 0;
    (*pcVar1)(param_1 + 0x8b0);
  }
  FUN__text__0028bbfc(param_1);
  return;
}


