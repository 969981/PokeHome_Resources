/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a22b0; name: FUN_.text__003a22b0
 */


void FUN__text__003a22b0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 200);
  if (*plVar3 == -0x340d631b7bddd9bb || *plVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0xd0);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar3);
    lVar1 = *(long *)(param_1 + 0xd0);
  }
  if ((lVar1 != -0x340d631b7bddd9bb) && (lVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),param_1 + 0xd0);
  }
  plVar2 = (long *)(param_1 + 0xd0);
  if ((*plVar3 != -0x340d631b7bddd9bb) && (*plVar3 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar3);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),plVar3);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar3);
  }
  if ((*plVar2 == -0x340d631b7bddd9bb) || (*plVar2 == 0)) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar2);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),plVar2);
                    /* WARNING: Could not recover jumptable at 0x003a23f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),plVar2);
  return;
}


