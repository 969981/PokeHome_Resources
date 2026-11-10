/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a23f4; name: FUN_.text__003a23f4
 */


void FUN__text__003a23f4(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_28;
  
  if (*(long *)(param_1 + 0xd8) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0xd8) == 0) {
    lVar2 = *(long *)(param_1 + 0xe0);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
    lVar2 = *(long *)(param_1 + 0xe0);
  }
  if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xe8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xe8) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xf0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xf0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  FUN__text__003a466c(param_1);
  plVar1 = (long *)(param_1 + 0xe8);
  if (*(char *)(param_1 + 0x82) != '\0') {
    plVar1 = (long *)(param_1 + 0xd8);
  }
  local_28 = *plVar1;
  if ((local_28 == -0x340d631b7bddd9bb) || (local_28 == 0)) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),&local_28);
  (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))(*(long **)(param_1 + 0x98),&local_28);
  return;
}


