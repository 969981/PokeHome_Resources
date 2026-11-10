/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a37e4; name: FUN_.text__003a37e4
 */


void FUN__text__003a37e4(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long local_18;
  
  if ((param_2 & 1) == 0) {
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
    plVar4 = (long *)(param_1 + 0xf0);
    if (*(char *)(param_1 + 0x82) != '\0') {
      plVar4 = (long *)(param_1 + 0xe0);
    }
    local_18 = *plVar4;
    if ((local_18 != -0x340d631b7bddd9bb) && (local_18 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),&local_18);
      (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))(*(long **)(param_1 + 0x98),&local_18);
    }
    plVar4 = (long *)(param_1 + 0xd0);
    if (*plVar4 == -0x340d631b7bddd9bb) {
      return;
    }
    if (*plVar4 == 0) {
      return;
    }
    FUN__text__003a22b0(param_1);
    plVar1 = *(long **)(param_1 + 0x98);
    pcVar3 = *(code **)(*plVar1 + 0x78);
  }
  else {
    lVar2 = *(long *)(param_1 + 200);
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      FUN__text__003a22b0(param_1);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x78))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 200));
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    if (*(char *)(param_1 + 0x80) == '\0') {
      if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
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
      plVar4 = (long *)(param_1 + 0xf0);
      if (*(char *)(param_1 + 0x82) != '\0') {
        plVar4 = (long *)(param_1 + 0xe0);
      }
      local_18 = *plVar4;
      if (local_18 == -0x340d631b7bddd9bb) {
        return;
      }
      if (local_18 == 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),&local_18);
      plVar1 = *(long **)(param_1 + 0x98);
      plVar4 = &local_18;
      pcVar3 = *(code **)(*plVar1 + 0xa0);
    }
    else {
      if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
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
      plVar4 = (long *)(param_1 + 0xe8);
      if (*(char *)(param_1 + 0x82) != '\0') {
        plVar4 = (long *)(param_1 + 0xd8);
      }
      local_18 = *plVar4;
      if (local_18 == -0x340d631b7bddd9bb) {
        return;
      }
      if (local_18 == 0) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0x98);
      plVar4 = &local_18;
      pcVar3 = *(code **)(*plVar1 + 0x78);
    }
  }
  (*pcVar3)(plVar1,plVar4);
  return;
}


