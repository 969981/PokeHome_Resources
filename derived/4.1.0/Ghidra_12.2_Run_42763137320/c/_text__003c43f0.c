/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c43f0; name: FUN_.text__003c43f0
 */


void FUN__text__003c43f0(long param_1)

{
  int iVar1;
  
  FUN__text__005f3280(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(param_1 + 0xa8) == 0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))
              (*(long **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x88));
    iVar1 = *(int *)(param_1 + 0x78);
  }
  else {
    FUN__text__00163fb4(*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x90));
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))
              (*(long **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x90));
    iVar1 = *(int *)(param_1 + 0x78);
  }
  if (iVar1 == 6) {
    *(undefined4 *)(param_1 + 0x78) = 4;
  }
  return;
}


