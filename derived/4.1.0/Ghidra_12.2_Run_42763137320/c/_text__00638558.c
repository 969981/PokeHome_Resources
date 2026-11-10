/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638558; name: FUN_.text__00638558
 */


float FUN__text__00638558(undefined4 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN__text__005ff89c(param_1,param_2,3);
  return (((float)param_3 / 255.0) * 0.40000004 + 0.8) * (float)uVar1;
}


