/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004444e4; name: FUN_.text__004444e4
 */


void FUN__text__004444e4(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  (**(code **)(*(long *)param_1[0xd] + 0x30))((long *)param_1[0xd],lVar1,param_1);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(lVar1 + 8);
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00444548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}


