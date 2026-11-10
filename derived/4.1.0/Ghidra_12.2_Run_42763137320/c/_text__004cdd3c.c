/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdd3c; name: FUN_.text__004cdd3c
 */


undefined8 FUN__text__004cdd3c(long param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_50;
  ushort local_4c [2];
  undefined2 local_48 [2];
  undefined2 local_44 [2];
  undefined4 local_40;
  undefined4 local_3c;
  ushort local_38 [2];
  undefined1 auStack_34 [4];
  
  local_38[0] = 0;
  uVar3 = 2;
  uVar2 = (**(code **)*param_2)(param_2,local_38,2,auStack_34);
  if (((uVar2 & 1) != 0) && (local_38[0] == param_3)) {
    local_3c = 0;
    local_40 = 0;
    local_44[0] = 0;
    local_48[0] = 0;
    local_4c[0] = 0;
    local_50 = 0;
    uVar2 = (**(code **)*param_2)(param_2,&local_3c,4,auStack_34);
    if (((uVar2 & 1) != 0) &&
       ((((uVar2 = (**(code **)*param_2)(param_2,&local_40,4,auStack_34), (uVar2 & 1) != 0 &&
          (uVar2 = (**(code **)*param_2)(param_2,local_44,2,auStack_34), (uVar2 & 1) != 0)) &&
         (uVar2 = (**(code **)*param_2)(param_2,local_48,2,auStack_34), (uVar2 & 1) != 0)) &&
        (uVar2 = (**(code **)*param_2)(param_2,local_4c,2,auStack_34), (uVar2 & 1) != 0)))) {
      uVar1 = param_3 + 7 >> 3;
      uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar1,&local_50);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar1,&local_50),
         (uVar2 & 1) != 0)) {
        *(undefined4 *)(param_1 + 8) = local_3c;
        *(undefined4 *)(param_1 + 0xc) = local_40;
        *(undefined2 *)(param_1 + 0x10) = local_44[0];
        *(undefined2 *)(param_1 + 0x12) = local_48[0];
        if (local_4c[0] == 0) {
          uVar3 = 1;
        }
        else {
          uVar2 = FUN__text__004cdf60((undefined8 *)(param_1 + 0x18));
          if (((uVar2 & 1) != 0) &&
             (uVar2 = (**(code **)*param_2)
                                (param_2,*(undefined8 *)(param_1 + 0x18),(ulong)local_4c[0] << 1,
                                 &local_50), (uVar2 & 1) != 0)) {
            return 1;
          }
          *(undefined4 *)(param_1 + 0xc) = local_3c;
          *(ushort *)(param_1 + 0x10) = local_38[0];
          if (local_38[0] != 0) {
            uVar2 = 0;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar2) = 0;
              uVar2 = uVar2 + 1;
            } while (uVar2 < (ulong)local_38[0] + 7 >> 3);
          }
        }
      }
    }
  }
  return uVar3;
}


