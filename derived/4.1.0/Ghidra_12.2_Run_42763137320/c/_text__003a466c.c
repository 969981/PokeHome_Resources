/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a466c; name: FUN_.text__003a466c
 */


void FUN__text__003a466c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0xd8);
  if (*plVar2 == -0x340d631b7bddd9bb || *plVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),plVar2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar2);
    lVar1 = *(long *)(param_1 + 0xe0);
  }
  if ((lVar1 != -0x340d631b7bddd9bb) && (lVar3 = param_1 + 0xe0, lVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),lVar3);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),lVar3);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),lVar3);
  }
  plVar2 = (long *)(param_1 + 0xe8);
  if ((*plVar2 != -0x340d631b7bddd9bb) && (*plVar2 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),plVar2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar2);
  }
  plVar2 = (long *)(param_1 + 0xf0);
  if ((*plVar2 == -0x340d631b7bddd9bb) || (*plVar2 == 0)) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar2);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),plVar2);
                    /* WARNING: Could not recover jumptable at 0x003a480c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar2);
  return;
}


