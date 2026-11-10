/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fef5c; name: FUN_.text__004fef5c
 */


undefined8 FUN__text__004fef5c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined2 local_34;
  undefined4 local_18;
  undefined1 auStack_14 [4];
  
  local_18 = *(undefined4 *)(*param_1 + 0x10);
  uVar1 = *(uint *)(*param_1 + 0x30);
  uVar3 = (**(code **)*param_2)(param_2,&local_18,4,auStack_14);
  if ((uVar3 & 1) != 0) {
    local_34 = CONCAT11(local_34._1_1_,(char)uVar1);
    uVar3 = (**(code **)*param_2)(param_2,&local_34,1,auStack_14);
    if ((uVar3 & 1) != 0) {
      if ((uVar1 & 0xfffffffd) != 1) {
        local_34 = (ushort)*(undefined4 *)(*param_1 + 0x28);
        uVar3 = (**(code **)*param_2)(param_2,&local_34,2,auStack_14);
        if (((uVar3 & 1) == 0) ||
           (iVar2 = (**(code **)(*(long *)param_1[2] + 0x28))
                              ((long *)param_1[2],param_2,*(undefined4 *)(*param_1 + 0x28)),
           iVar2 != 1)) {
          return 2;
        }
      }
      local_34 = CONCAT11(local_34._1_1_,*(undefined1 *)((long)param_1 + 10)) & 0xff03;
      uVar3 = (**(code **)*param_2)(param_2,param_1 + 1,2,auStack_14);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = (**(code **)*param_2)(param_2,&local_34,1,auStack_14), (uVar3 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 2;
}


