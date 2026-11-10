/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475ac0; name: FUN_.text__00475ac0
 */


void FUN__text__00475ac0(undefined4 param_1,long *param_2,int param_3,int param_4)

{
  if (param_3 == 4) {
    if (param_4 == 1) {
      *(uint *)((long)param_2 + 0x313) = *(uint *)((long)param_2 + 0x313) & 0xfffffeff | 0x800;
    }
  }
  else if (param_3 == 3) {
    *(uint *)((long)param_2 + 0x313) = *(uint *)((long)param_2 + 0x313) | 0x100;
    (**(code **)(*param_2 + 0x80))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00475b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2);
    return;
  }
  return;
}


