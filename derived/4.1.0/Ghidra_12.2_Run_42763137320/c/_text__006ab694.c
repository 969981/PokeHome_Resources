/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ab694; name: FUN_.text__006ab694
 */


undefined8 FUN__text__006ab694(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char local_50 [8];
  char local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  
  local_38 = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_40 = 0;
  FUN__text__0069d590(local_48);
  if ((*(code **)(param_3 + 0xb0) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_3 + 0xb0))
                        (local_48,*(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_3 + 0xb8)),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  puVar2 = (undefined8 *)FUN__text__006a0f04(0x10);
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  **(undefined4 **)(param_1 + 0x38) = (undefined4)local_40;
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 4) = local_38;
  local_50[4] = '\0';
  local_50[5] = '\0';
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 8) = local_40._4_4_;
  strcpy(local_50,local_48);
  uVar3 = FUN__text__006a4238(*(undefined8 *)(param_4 + 0x38),param_2,local_50);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
  return 1;
}


