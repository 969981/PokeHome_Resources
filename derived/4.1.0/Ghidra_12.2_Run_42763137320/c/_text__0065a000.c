/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a000; name: FUN_.text__0065a000
 */


void FUN__text__0065a000(long param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (*(int *)(param_1 + 0x60) != iVar1) {
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0x11) {
      *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) = *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) + -1;
    }
    if ((0x5fdfbU >> (param_2 & 0x3f) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0065a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((param_2 & 0xffffffff) * 8 + 0x899dd0))();
      return;
    }
  }
  return;
}


