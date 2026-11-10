/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d57b8; name: FUN_.text__003d57b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d57b8(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if ((param_1[0x31] != 0) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = -0x340d631b7bddd9bb;
  param_1[0x30] = 0x70f683;
  param_1[0x31] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
  }
  lVar1 = _DAT_008a37d8;
  lVar2 = _DAT_0089f718;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[0xc] = lVar2 + 0x10;
  param_1[9] = lVar1 + 0x60;
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0;
    pcVar3 = (code *)param_1[0x1f];
  }
  else {
    FUN__text__005d9290();
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar3)(param_1 + 0x22);
  }
  pcVar3 = (code *)param_1[0xf];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar3)(param_1 + 0x12);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  return;
}


