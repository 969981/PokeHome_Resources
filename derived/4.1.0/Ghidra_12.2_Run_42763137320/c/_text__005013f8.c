/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005013f8; name: FUN_.text__005013f8
 */


undefined8 FUN__text__005013f8(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 local_44 [4];
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  local_28 = 1;
  uVar2 = (**(code **)*param_2)(param_2,&local_28,4,auStack_24);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x28,4,auStack_24), (uVar2 & 1) != 0)) &&
     (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x2c,4,auStack_24), (uVar2 & 1) != 0)) {
    local_44[0] = *(undefined1 *)(param_1 + 0x30);
    uVar2 = (**(code **)*param_2)(param_2,local_44,1,auStack_24);
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x32,2,auStack_24);
      if ((uVar2 & 1) == 0) {
        return 2;
      }
      iVar1 = FUN__text__005018f0(param_1,param_2);
      if (iVar1 != 1) {
        return 2;
      }
      local_28 = CONCAT22(local_28._2_2_,(short)*(undefined4 *)(param_1 + 0x20));
      uVar2 = (**(code **)*param_2)(param_2,&local_28,2,auStack_24);
      if ((uVar2 & 1) == 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      lVar3 = *(long *)(param_1 + 0x18);
      while (iVar1 = FUN__text__004fef5c(lVar3,param_2), iVar1 == 1) {
        lVar3 = lVar3 + 0x18;
        if (lVar3 == *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x18) {
          return 1;
        }
      }
    }
  }
  return 2;
}


