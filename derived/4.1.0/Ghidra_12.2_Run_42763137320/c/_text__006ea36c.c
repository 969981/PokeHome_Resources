/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea36c; name: FUN_.text__006ea36c
 */


void FUN__text__006ea36c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN__text__006d83b0();
  FUN__text__006eae14(param_1 + 0x38,param_2,uVar1);
  uVar1 = FUN__text__006d83b0();
  FUN__text__006eae14(param_1 + 0x1e8,param_2,uVar1);
  if (*(int *)(param_1 + 4) == 3) {
    uVar1 = FUN__text__006d83b0();
    FUN__text__006eae14(param_1 + 0x398,param_2,uVar1);
    return;
  }
  return;
}


