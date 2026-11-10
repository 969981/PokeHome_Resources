/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bc590; name: FUN_.text__003bc590
 */


void FUN__text__003bc590(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = (long *)(param_1 + 0x310);
  if (*(long *)(param_1 + 0x318) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0x318) == 0) {
    if (*plVar1 != -0x340d631b7bddd9bb && *plVar1 != 0) {
LAB__text__003bc62c:
      (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar1);
                    /* WARNING: Could not recover jumptable at 0x003bc660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),plVar1);
      return;
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),param_1 + 0x318);
    uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x280));
    (**(code **)(**(long **)(param_1 + 0x98) + 0x98))
              (uVar2,*(long **)(param_1 + 0x98),param_1 + 0x318);
    if (*plVar1 != -0x340d631b7bddd9bb && *plVar1 != 0) goto LAB__text__003bc62c;
  }
  return;
}


