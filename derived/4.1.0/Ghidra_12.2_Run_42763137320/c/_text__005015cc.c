/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005015cc; name: FUN_.text__005015cc
 */


undefined4 FUN__text__005015cc(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  char local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar2 = (**(code **)*param_2)(param_2,auStack_28,4,auStack_24);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x28,4,auStack_24), (uVar2 & 1) != 0)) &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x2c,4,auStack_24), (uVar2 & 1) != 0)) &&
     ((uVar2 = (**(code **)*param_2)(param_2,local_2c,1,auStack_24), (uVar2 & 1) != 0 &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x32,2,auStack_24), (uVar2 & 1) != 0)))) {
    *(bool *)(param_1 + 0x30) = local_2c[0] != '\0';
    iVar1 = FUN__text__005016f0(param_1,param_2);
    if (iVar1 == 1) {
      iVar1 = FUN__text__00501a40(param_1,param_2);
      uVar3 = 1;
      if (iVar1 != 1) {
        uVar3 = 2;
      }
      return uVar3;
    }
  }
  return 2;
}


