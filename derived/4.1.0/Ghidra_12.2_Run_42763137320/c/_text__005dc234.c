/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc234; name: FUN_.text__005dc234
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005dc234(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a5a30 + 0x10;
  lVar2 = _DAT_008a5a30 + 0x98;
  param_1[9] = _DAT_008a5a30 + 0x58;
  param_1[10] = lVar2;
  *param_1 = lVar1;
  if (*(char *)((long)param_1 + 0xa9) != '\0') {
    nn::fs::FlushFile(param_1[0x12]);
    nn::fs::CloseFile(param_1[0x12]);
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
  }
  if ((param_1[0xf] != 0) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x340d631b7bddd9bb;
  param_1[0xe] = 0x70f683;
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


