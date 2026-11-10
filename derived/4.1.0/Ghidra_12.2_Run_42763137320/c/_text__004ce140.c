/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce140; name: FUN_.text__004ce140
 */


undefined4 FUN__text__004ce140(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  uVar1 = (**(code **)*param_2)(param_2,param_1 + 8,1,auStack_18);
  if ((uVar1 & 1) == 0) {
    return 2;
  }
  uVar1 = (**(code **)*param_2)(param_2,param_1 + 10,2,auStack_14);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


