/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1690; name: FUN_.text__006c1690
 */


ulong FUN__text__006c1690(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  FUN__text__006ebbe4(&local_40);
  local_40 = CONCAT44(param_2,(int)param_3);
  lVar1 = FUN__text__006ec37c(param_1,&local_40);
  return (param_3 + lVar1) - 1U & -lVar1;
}


