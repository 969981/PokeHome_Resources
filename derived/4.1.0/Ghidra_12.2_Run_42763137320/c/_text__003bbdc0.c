/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bbdc0; name: FUN_.text__003bbdc0
 */


void FUN__text__003bbdc0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x488);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    (*pcVar1)(param_1 + 0x4a0);
  }
  pcVar1 = *(code **)(param_1 + 0x408);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    (*pcVar1)(param_1 + 0x420);
  }
  pcVar1 = *(code **)(param_1 + 0x388);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    (*pcVar1)(param_1 + 0x3a0);
  }
  pcVar1 = *(code **)(param_1 + 0x308);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    (*pcVar1)(param_1 + 800);
  }
  pcVar1 = *(code **)(param_1 + 0x288);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    (*pcVar1)(param_1 + 0x2a0);
  }
  FUN__text__003a4810(param_1);
  return;
}


