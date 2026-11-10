/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fdabc; name: FUN_.text__004fdabc
 */


void FUN__text__004fdabc(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((piVar2 == (int *)0x0) || (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 != 0)) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  FUN__text__00400fc0(*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


