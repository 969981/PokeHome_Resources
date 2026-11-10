/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667384; name: FUN_.text__00667384
 */


undefined4
FUN__text__00667384(long param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  uVar1 = FUN__text__006672b8(param_1,*(int *)(param_1 + 0x25c) == param_2,param_3,param_4,&local_4)
  ;
  *param_5 = uVar1;
  return local_4;
}


