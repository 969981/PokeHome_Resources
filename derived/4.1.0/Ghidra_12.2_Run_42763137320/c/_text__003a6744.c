/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a6744; name: FUN_.text__003a6744
 */


void FUN__text__003a6744(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x488) != '\0') {
    lVar2 = *(long *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x488) = 0;
    lVar1 = param_1 + 0x520;
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xa8),lVar1);
    }
    lVar2 = *(long *)(param_1 + 0xb8);
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xb8),lVar1);
    }
    lVar2 = *(long *)(param_1 + 200);
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 200),lVar1);
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xd8),lVar1);
    }
    lVar2 = *(long *)(param_1 + 0xe8);
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xe8),lVar1);
    }
    lVar2 = *(long *)(param_1 + 0xf8);
    if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xf8),lVar1);
    }
    if ((*(long *)(param_1 + 0x108) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0x108) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003a68a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
                (*(long **)(param_1 + 0x98),param_1 + 0x108,lVar1);
      return;
    }
  }
  return;
}


