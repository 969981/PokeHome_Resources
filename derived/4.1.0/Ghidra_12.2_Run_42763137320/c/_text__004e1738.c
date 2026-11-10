/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e1738; name: FUN_.text__004e1738
 */


undefined4 FUN__text__004e1738(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  plVar1 = (long *)*param_2;
  if (*plVar1 == 0) {
    return 0;
  }
  local_4 = (undefined4)plVar1[2];
  local_8 = 0;
  FUN__text__0041a060(plVar1,&local_4,&local_8);
  *(undefined4 *)(plVar1 + 2) = local_4;
  return local_8;
}


