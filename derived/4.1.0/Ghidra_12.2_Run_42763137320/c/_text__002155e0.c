/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002155e0; name: FUN_.text__002155e0
 */


undefined8 FUN__text__002155e0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (((param_1[0xc] == 0) || (iVar1 = FUN__text__00215fa0(), iVar1 == 0)) ||
     (uVar2 = FUN__text__00215f48(param_1[0xc]), (uVar2 & 1) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00215620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x130))(param_1);
  return uVar3;
}


