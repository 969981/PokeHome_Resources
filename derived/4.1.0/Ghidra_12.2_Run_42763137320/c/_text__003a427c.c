/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a427c; name: FUN_.text__003a427c
 */


void FUN__text__003a427c(long param_1)

{
  long *plVar1;
  long local_18;
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN__text__003a1648(param_1,0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x241) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if ((*(long *)(param_1 + 0xa8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xb0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xb0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xb8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xb8) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  plVar1 = (long *)(param_1 + 0xc0);
  if ((*plVar1 != -0x340d631b7bddd9bb) && (*plVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar1);
  }
  FUN__text__003a44c8(param_1);
  if ((*(long *)(param_1 + 0xc0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xc0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))(*(long **)(param_1 + 0x98),plVar1);
  }
  if ((*(long *)(param_1 + 0xd8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xd8) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xe0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xe0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xe8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xe8) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*(long *)(param_1 + 0xf0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xf0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  FUN__text__003a466c(param_1);
  plVar1 = (long *)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0x82) != '\0') {
    plVar1 = (long *)(param_1 + 0xe0);
  }
  local_18 = *plVar1;
  if ((local_18 == -0x340d631b7bddd9bb) || (local_18 == 0)) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),&local_18);
  (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))(*(long **)(param_1 + 0x98),&local_18);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}


