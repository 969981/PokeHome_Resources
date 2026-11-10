/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e2220; name: FUN_.text__002e2220
 */


void FUN__text__002e2220(long *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 4;
  (**(code **)(*param_1 + 0x78))(0);
  (**(code **)(*param_1 + 0x88))(0,param_1);
  (**(code **)(*param_1 + 0x98))(0,param_1);
                    /* WARNING: Could not recover jumptable at 0x002e2288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1,0);
  return;
}


