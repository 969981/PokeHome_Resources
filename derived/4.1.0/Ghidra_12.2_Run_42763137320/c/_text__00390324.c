/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00390324; name: FUN_.text__00390324
 */


undefined8
FUN__text__00390324(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__003901bc(param_1,0,param_2,param_3,param_4);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = FUN__text__003901bc(param_1,1,param_2,param_3,param_4), (uVar1 & 1) == 0)) {
    uVar2 = FUN__text__003901bc(param_1,2,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}


