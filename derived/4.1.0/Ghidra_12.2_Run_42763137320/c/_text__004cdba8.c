/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdba8; name: FUN_.text__004cdba8
 */


undefined8 FUN__text__004cdba8(long param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined2 local_38 [2];
  undefined4 local_34;
  ushort local_18 [2];
  undefined1 auStack_14 [4];
  
  local_34 = 0;
  local_18[0] = param_3;
  uVar2 = (**(code **)*param_2)(param_2,local_18,2,auStack_14);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)*param_2)(param_2,param_1 + 8,4,auStack_14), (uVar2 & 1) != 0)) &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0xc,4,auStack_14), (uVar2 & 1) != 0)) &&
     ((uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x10,2,auStack_14), (uVar2 & 1) != 0 &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x12,2,auStack_14), (uVar2 & 1) != 0)))) {
    local_38[0] = (undefined2)*(undefined4 *)(param_1 + 0x20);
    uVar2 = (**(code **)*param_2)(param_2,local_38,2,auStack_14);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_3 + 7 >> 3;
      uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar1,&local_34);
      if ((((uVar2 & 1) != 0) &&
          (uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar1,&local_34),
          (uVar2 & 1) != 0)) &&
         ((*(int *)(param_1 + 0x20) == 0 ||
          (uVar2 = (**(code **)*param_2)
                             (param_2,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x20) << 1,
                              &local_34), (uVar2 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 2;
}


