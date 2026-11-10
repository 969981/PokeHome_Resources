/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a3630; name: FUN_.text__003a3630
 */


void FUN__text__003a3630(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  
  if ((*(char *)(param_1 + 0x158) != '\0') ||
     (plVar1 = (long *)(param_1 + 0xb0), *plVar1 == -0x340d631b7bddd9bb || *plVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined2 *)(param_1 + 0x1cc) = 0;
    return;
  }
  plVar2 = (long *)(param_1 + 0xa8);
  if ((*(char *)(param_1 + 0x1c8) != '\0') &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x98) + 0x88))(*(long **)(param_1 + 0x98),plVar2),
     (uVar5 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x98) + 0x88))
                      (*(long **)(param_1 + 0x98),param_1 + 0xb8);
    if ((uVar5 & 1) == 0) {
      bVar4 = *(char *)(param_1 + 0x1cc) == '\0';
      cVar3 = *(char *)(param_1 + 0x1c8);
      goto joined_r0x003a36dc;
    }
    *(undefined1 *)(param_1 + 0x1cc) = 0;
  }
  bVar4 = true;
  cVar3 = *(char *)(param_1 + 0x1c8);
joined_r0x003a36dc:
  if ((cVar3 == '\0') && (bVar4)) {
    if ((*plVar2 != -0x340d631b7bddd9bb) && (*plVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar2);
    }
    if ((*plVar1 != -0x340d631b7bddd9bb) && (*plVar1 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar1);
    }
    if ((*(long *)(param_1 + 0xb8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xb8) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
    }
    if ((*(long *)(param_1 + 0xc0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xc0) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
    }
    FUN__text__003a44c8(param_1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar1);
    *(undefined1 *)(param_1 + 0x1ce) = 0;
    *(undefined2 *)(param_1 + 0x1ca) = 1;
    *(undefined2 *)(param_1 + 0x1c8) = 0;
    *(undefined2 *)(param_1 + 0x1cc) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x1ca) = 0x100;
  return;
}


