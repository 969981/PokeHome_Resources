/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00501a40; name: FUN_.text__00501a40
 */


undefined8 FUN__text__00501a40(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long local_58;
  ushort local_38 [2];
  undefined1 auStack_34 [4];
  
  uVar3 = (**(code **)*param_2)(param_2,local_38,2,auStack_34);
  if ((uVar3 & 1) == 0) {
    return 2;
  }
  if (local_38[0] != 0) {
    iVar2 = (uint)local_38[0] - *(uint *)((long)param_1 + 0x24);
    if ((uint)local_38[0] < *(uint *)((long)param_1 + 0x24) || iVar2 == 0) {
      local_58 = *param_1;
    }
    else {
      uVar3 = FUN__text__00501df0(param_1 + 3,iVar2);
      if ((uVar3 & 1) == 0) {
        return 2;
      }
      local_58 = *param_1;
      if (local_38[0] == 0) {
        return 1;
      }
    }
    local_58 = local_58 + 0x138;
    lVar6 = 0;
    uVar3 = 0;
    do {
      uVar7 = *(uint *)(param_1 + 4);
      uVar1 = *(uint *)((long)param_1 + 0x24);
      if (uVar1 <= uVar7) {
        iVar2 = uVar1 + (uVar1 >> 1);
        if (uVar1 == 0) {
          iVar2 = 1;
        }
        uVar4 = FUN__text__00501df0(param_1 + 3,iVar2);
        if ((uVar4 & 1) == 0) {
          return 2;
        }
        if (*(uint *)((long)param_1 + 0x24) <= uVar7) {
          return 2;
        }
        uVar7 = *(uint *)(param_1 + 4);
      }
      *(uint *)(param_1 + 4) = uVar7 + 1;
      if (param_1[3] == 0) {
        return 2;
      }
      lVar5 = param_1[3] + (ulong)uVar7 * 0x18;
      *(undefined2 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(byte *)(lVar5 + 10) = *(byte *)(lVar5 + 10) & 0xfc;
      iVar2 = FUN__text__004ff0d0(param_1[3] + lVar6,param_2,&local_58,param_1);
      if (iVar2 != 1) {
        return 2;
      }
      uVar3 = uVar3 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar3 < local_38[0]);
  }
  return 1;
}


