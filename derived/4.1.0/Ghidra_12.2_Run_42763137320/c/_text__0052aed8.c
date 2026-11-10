/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052aed8; name: FUN_.text__0052aed8
 */


void FUN__text__0052aed8(long param_1,long param_2,long param_3,undefined8 *param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar3 = *(ulong *)(param_3 + 0x70);
  uVar4 = param_4[0xe];
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(int *)(param_1 + 0xf8) != 0) {
    puVar1 = (undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 0xf8) - 1) * 0x18 + 0x20);
  }
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  local_48 = puVar1[2];
  if (*(int *)(param_2 + 0xf8) == 0) {
    local_70 = *param_4;
    uStack_68 = param_4[1];
    local_60 = param_4[2];
    FUN__text__0052acf0(param_1,&local_58,&local_70,param_5,param_3);
    if (uVar4 <= uVar3) goto LAB__text__0052aff8;
  }
  else {
    if (uVar4 <= uVar3) {
      local_70 = *(undefined8 *)(param_2 + 0x20);
      uStack_68 = *(undefined8 *)(param_2 + 0x28);
      local_60 = *(undefined8 *)(param_2 + 0x30);
      FUN__text__0052acf0(param_1,&local_58,&local_70,param_5,param_3);
LAB__text__0052aff8:
      FUN__text__0052aa30(param_1,param_2,param_6);
      return;
    }
    lVar2 = param_2 + (ulong)(*(int *)(param_2 + 0xf8) - 1) * 0x18;
    local_70 = *(undefined8 *)(lVar2 + 0x20);
    uStack_68 = *(undefined8 *)(lVar2 + 0x28);
    local_60 = *(undefined8 *)(lVar2 + 0x30);
    FUN__text__0052acf0(param_1,&local_58,&local_70,param_5,param_3);
  }
  FUN__text__0052ab90(param_1,param_2,param_6);
  return;
}


