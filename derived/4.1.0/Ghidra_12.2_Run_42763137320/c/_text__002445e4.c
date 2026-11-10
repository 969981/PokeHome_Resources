/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002445e4; name: FUN_.text__002445e4
 */


undefined8 FUN__text__002445e4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_40 [3];
  long local_28;
  
  if ((*(int *)(*(long *)(param_1 + 0x640) + 0xf0) != 1) ||
     (uVar1 = FUN__text__00119a4c(param_2,0x10000000), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN__text__0012cbe0(param_1 + 0x110,0x70ee35);
  local_40[0] = 0;
  FUN__text__003a8304(uVar2,local_40,1,0);
  *(undefined4 *)(param_1 + 0x708) = 1;
  FUN__text__00243e90(param_1);
  FUN__text__005e927c(local_40,0x8740c0);
  FUN__text__003c1e4c(local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return 1;
}


