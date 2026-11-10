/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00643fa4; name: FUN_.text__00643fa4
 */


void FUN__text__00643fa4(undefined4 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN__text__0063a010(param_1 + 2,0x160);
  *(undefined2 *)((long)param_1 + 6) = uVar1;
  FUN__text__0063a0c0(param_1 + 2,0x160,*param_1);
  return;
}


