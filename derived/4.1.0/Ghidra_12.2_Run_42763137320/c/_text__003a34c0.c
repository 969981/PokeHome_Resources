/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a34c0; name: FUN_.text__003a34c0
 */


void FUN__text__003a34c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((*(char *)(param_1 + 0x158) != '\0') ||
     (plVar1 = (long *)(param_1 + 0xb8), *plVar1 == -0x340d631b7bddd9bb || *plVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    return;
  }
  plVar2 = (long *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x88))(*(long **)(param_1 + 0x98),plVar2);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x1c8) != '\0') {
        *(undefined2 *)(param_1 + 0x1cc) = 0x100;
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c8) = 0;
    }
  }
  if ((*plVar2 != -0x340d631b7bddd9bb) && (*plVar2 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar2);
  }
  if ((*(long *)(param_1 + 0xb0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xb0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  if ((*plVar1 != -0x340d631b7bddd9bb) && (*plVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar1);
  }
  if ((*(long *)(param_1 + 0xc0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xc0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
  }
  FUN__text__003a44c8(param_1);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar1);
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined2 *)(param_1 + 0x1cc) = 1;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  return;
}


