/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a334c; name: FUN_.text__003a334c
 */


void FUN__text__003a334c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x158) == '\0') {
    plVar1 = (long *)(param_1 + 0xa8);
    lVar3 = *plVar1;
    if (lVar3 != -0x340d631b7bddd9bb && lVar3 != 0) {
      if (*(char *)(param_1 + 0x1cc) != '\0') {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0x88))
                          (*(long **)(param_1 + 0x98),param_1 + 0xb8);
        if ((uVar2 & 1) == 0) {
          if (*(char *)(param_1 + 0x1cc) != '\0') {
            *(undefined2 *)(param_1 + 0x1c8) = 0x100;
            return;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x1cc) = 0;
        }
        lVar3 = *plVar1;
      }
      if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
        (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar1);
      }
      if ((*(long *)(param_1 + 0xb0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xb0) != 0)) {
        (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
      }
      if ((*(long *)(param_1 + 0xb8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xb8) != 0)) {
        (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
      }
      if ((*(long *)(param_1 + 0xc0) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xc0) != 0)) {
        (**(code **)(**(long **)(param_1 + 0x98) + 0x80))();
      }
      FUN__text__003a44c8(param_1);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar1);
      *(undefined2 *)(param_1 + 0x1c8) = 1;
      *(undefined1 *)(param_1 + 0x1ce) = 1;
      *(undefined4 *)(param_1 + 0x1ca) = 0;
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1ca) = 0;
  return;
}


