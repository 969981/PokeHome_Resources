/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d1120; name: FUN_.text__003d1120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d1120(long *param_1)

{
  code *pcVar1;
  
  *param_1 = _DAT_008a3738 + 0x10;
  if ((param_1[200] != 0) && (param_1[0xc5] != 0)) {
    (**(code **)(*(long *)(param_1[0xc5] + 0x48) + 0x18))();
  }
  param_1[0xc5] = 0;
  param_1[0xc6] = -0x340d631b7bddd9bb;
  param_1[199] = 0x70f683;
  param_1[200] = 0;
  if (param_1[0xc9] != 0) {
    (**(code **)(*(long *)(param_1[0xc9] + 0x48) + 0x18))();
  }
  pcVar1 = (code *)param_1[0xb5];
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  if (pcVar1 != (code *)0x0) {
    param_1[0xb7] = 0;
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
    param_1[0xb4] = 0;
    (*pcVar1)(param_1 + 0xb8);
  }
  if ((param_1[0xae] != 0) && (param_1[0xab] != 0)) {
    (**(code **)(*(long *)(param_1[0xab] + 0x48) + 0x18))();
  }
  param_1[0xab] = 0;
  param_1[0xac] = -0x340d631b7bddd9bb;
  param_1[0xad] = 0x70f683;
  param_1[0xae] = 0;
  if (param_1[0xaf] != 0) {
    (**(code **)(*(long *)(param_1[0xaf] + 0x48) + 0x18))();
  }
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN__text__003d122c(param_1 + 0x58);
  FUN__text__003d122c(param_1 + 6);
  return;
}


