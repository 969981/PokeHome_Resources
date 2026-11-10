/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bf228; name: FUN_.text__003bf228
 */


void FUN__text__003bf228(long param_1)

{
  code *pcVar1;
  
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


