/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00401120; name: FUN_.text__00401120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00401120(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar4 = FUN__text__00400f10();
  puVar3 = _DAT_008a5180;
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  *(undefined4 *)(_DAT_008a5180 + 0x16) = *(undefined4 *)(param_1 + 0x16);
  uVar5 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar6 = *(uint *)(param_1 + 0xf);
  puVar3[0xb] = uVar5;
  puVar3[0xc] = uVar1;
  *(uint *)(puVar3 + 0xf) = uVar6;
  if (param_1[2] != 0) {
    if (param_1[3] == 0) {
      return 2;
    }
    if (param_1[4] == 0) {
      return 2;
    }
    if (param_1[5] == 0) {
      return 2;
    }
    if (param_1[6] == 0) {
      return 2;
    }
    uVar5 = *param_1;
    uVar1 = param_1[1];
    puVar3[0x17] = param_1[0x17];
    *puVar3 = uVar5;
    puVar3[1] = uVar1;
    uVar5 = param_1[3];
    puVar3[2] = param_1[2];
    puVar3[3] = uVar5;
    uVar5 = param_1[5];
    puVar3[4] = param_1[4];
    puVar3[5] = uVar5;
    uVar5 = param_1[7];
    puVar3[6] = param_1[6];
    puVar3[7] = uVar5;
    puVar3[8] = param_1[8];
    goto LAB__text__004011c8;
  }
  if (param_1[3] != 0) {
    return 2;
  }
  if (param_1[4] != 0) {
    return 2;
  }
  if (param_1[5] != 0) {
    return 2;
  }
  if (param_1[6] != 0) {
    return 2;
  }
  if (param_1[8] != 0) {
    return 2;
  }
  local_28 = param_1[9];
  uStack_30 = 0;
  uVar2 = 0x10000;
  if (uVar6 != 0) {
    uVar2 = uVar6;
  }
  local_48 = (ulong)uVar2;
  local_58 = &DAT__text__00401340;
  uStack_50 = 0;
  uStack_40 = local_48;
  if (local_48 < 0x10001) {
    uStack_40 = 0x10000;
  }
  if (*(int *)(param_1 + 0x18) == 2) {
    if (uStack_40 < 0x100001) {
      uVar6 = 0x200000;
      goto LAB__text__0040128c;
    }
LAB__text__00401294:
    local_38 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x18) != 1) || (0x40000 < uStack_40)) goto LAB__text__00401294;
    uVar6 = 0x80000;
LAB__text__0040128c:
    uVar2 = 0;
    if ((uint)uStack_40 != 0) {
      uVar2 = uVar6 / (uint)uStack_40;
    }
    local_38 = (ulong)uVar2;
  }
  local_68 = uVar5;
  uStack_60 = uVar1;
  FUN__text__00401cd0(0,&local_68);
  DAT_00ae89b8 = FUN__text__00403cc0(0);
  *puVar3 = FUN__text__00401350;
  puVar3[1] = FUN__text__00401380;
  puVar3[0x17] = FUN__text__004013d0;
  puVar3[2] = FUN__text__00401420;
  puVar3[3] = FUN__text__00401580;
  puVar3[4] = FUN__text__004016f0;
  puVar3[5] = FUN__text__004018a0;
  puVar3[6] = FUN__text__00401a50;
  puVar3[7] = &LAB__text__00401b20;
  DAT_00ae89b4 = *(undefined4 *)(param_1 + 0x10);
  puVar3[8] = &LAB__text__00401b30;
  DAT_00ae89b0 = 1;
LAB__text__004011c8:
  puVar3[9] = param_1[9];
  uVar5 = FUN__text__00400ef0();
  return uVar5;
}


