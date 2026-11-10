/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467cb0; name: FUN_.text__00467cb0
 */


void FUN__text__00467cb0(long param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5
                        )

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0xb0);
  }
  if (iVar1 <= param_5) {
    FUN__text__004cf770(param_1 + 0xb8,param_2,param_3,param_4 & 1);
  }
  FUN__text__004ce75c(param_1 + 0xa8,param_2,param_3,param_4 & 1,param_5);
  return;
}


