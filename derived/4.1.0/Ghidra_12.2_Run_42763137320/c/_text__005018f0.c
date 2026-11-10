/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005018f0; name: FUN_.text__005018f0
 */


undefined8 FUN__text__005018f0(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  local_48 = CONCAT22(local_48._2_2_,(short)*(undefined4 *)(param_1 + 0x40));
  uVar3 = 2;
  uVar2 = (**(code **)*param_2)(param_2,&local_48,2,auStack_44);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x38);
      do {
        local_48 = *puVar4;
        iVar1 = (**(code **)(**(long **)(puVar4 + 2) + 0x18))();
        uVar2 = (**(code **)*param_2)(param_2,&local_48,4,auStack_44);
        if ((uVar2 & 1) == 0) {
          return 2;
        }
        local_4c[0] = 3;
        if (iVar1 != 0) {
          local_4c[0] = 1;
        }
        uVar2 = (**(code **)*param_2)(param_2,local_4c,1,auStack_44);
        if ((uVar2 & 1) == 0) {
          return 2;
        }
        uVar2 = (**(code **)*param_2)(param_2,puVar4 + 4,2,auStack_44);
        if ((uVar2 & 1) == 0) {
          return 2;
        }
        iVar1 = (**(code **)(**(long **)(puVar4 + 2) + 0x28))
                          (*(long **)(puVar4 + 2),param_2,*(undefined2 *)(puVar4 + 4));
        if (iVar1 != 1) {
          return 2;
        }
        puVar4 = puVar4 + 6;
      } while (puVar4 != (undefined4 *)
                         (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 0x18));
    }
    uVar3 = 1;
  }
  return uVar3;
}


