/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00531350; name: FUN_.text__00531350
 */


uint FUN__text__00531350(uint *param_1,long param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if ((param_5 & 1) == 0) {
    uVar7 = param_1[0x4c] - 1;
    local_70 = *(undefined8 *)(param_1 + (ulong)uVar7 * 6 + 2);
    uStack_68 = *(undefined8 *)(param_1 + (ulong)uVar7 * 6 + 4);
    local_60 = *(undefined8 *)(param_1 + (ulong)uVar7 * 6 + 6);
    puVar9 = param_4;
    if (param_3[0x3e] != 0) {
      puVar9 = param_3 + (ulong)(param_3[0x3e] - 1) * 6 + 8;
    }
    FUN__text__00520ce4(param_2,&local_70,puVar9,&local_58);
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = 0x50c5d1f;
    if (*param_1 != 0) {
      uVar7 = *param_1 * 0x1000193;
    }
    uVar5 = (uint)uVar6;
    uVar3 = (uint)((ulong)uVar6 >> 0x20);
    *param_1 = (((((((uVar7 ^ uVar5 & 0xff) * 0x1000193 ^ uVar5 >> 8 & 0xff) * 0x1000193 ^
                   uVar5 >> 0x10 & 0xff) * 0x1000193 ^ uVar5 >> 0x18) * 0x1000193 ^ uVar3 & 0xff) *
                 0x1000193 ^ uVar3 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar6 >> 0x30) & 0xff)
               * 0x1000193 ^ (uint)(byte)((ulong)uVar6 >> 0x38);
    uVar7 = param_3[0x3e] - 1;
    if (-1 < (int)uVar7) {
      puVar9 = param_3 + (ulong)uVar7 * 6 + 8;
      do {
        local_60 = *(undefined8 *)(puVar9 + 4);
        local_70 = *(undefined8 *)puVar9;
        uStack_68 = *(undefined8 *)(puVar9 + 2);
        uVar4 = FUN__text__005311fc(local_58,local_50,local_48,param_1,&local_70);
        bVar2 = uVar7 != 0;
        uVar7 = uVar7 - 1;
        local_58 = local_70;
        local_50 = uStack_68;
        local_48 = local_60;
        if ((uVar4 & 1) == 0) break;
        puVar9 = puVar9 + -6;
      } while (bVar2);
      goto LAB__text__005315c8;
    }
  }
  else {
    puVar9 = param_3 + 8;
    uVar7 = param_1[0x4c] - 1;
    local_70 = *(undefined8 *)(param_1 + (ulong)uVar7 * 6 + 2);
    uStack_68 = *(undefined8 *)(param_1 + (ulong)uVar7 * 6 + 4);
    local_60 = *(undefined8 *)(param_1 + (ulong)uVar7 * 6 + 6);
    puVar1 = param_3 + 0x38;
    if (param_3[0x3e] != 0) {
      puVar1 = puVar9;
    }
    FUN__text__00520ce4(param_2,&local_70,puVar1,&local_58);
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = 0x50c5d1f;
    if (*param_1 != 0) {
      uVar7 = *param_1 * 0x1000193;
    }
    uVar5 = (uint)uVar6;
    uVar3 = (uint)((ulong)uVar6 >> 0x20);
    *param_1 = (((((((uVar7 ^ uVar5 & 0xff) * 0x1000193 ^ uVar5 >> 8 & 0xff) * 0x1000193 ^
                   uVar5 >> 0x10 & 0xff) * 0x1000193 ^ uVar5 >> 0x18) * 0x1000193 ^ uVar3 & 0xff) *
                 0x1000193 ^ uVar3 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar6 >> 0x30) & 0xff)
               * 0x1000193 ^ (uint)(byte)((ulong)uVar6 >> 0x38);
    if (param_3[0x3e] != 0) {
      uVar8 = 1;
      do {
        local_60 = *(undefined8 *)(puVar9 + 4);
        local_70 = *(undefined8 *)puVar9;
        uStack_68 = *(undefined8 *)(puVar9 + 2);
        uVar4 = FUN__text__005311fc(local_58,local_50,local_48,param_1,&local_70);
        local_58 = local_70;
        local_50 = uStack_68;
        local_48 = local_60;
        if ((uVar4 & 1) == 0) break;
        puVar9 = puVar9 + 6;
        bVar2 = uVar8 < param_3[0x3e];
        uVar8 = uVar8 + 1;
      } while (bVar2);
LAB__text__005315c8:
      local_70 = local_58;
      uStack_68 = local_50;
      local_60 = local_48;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
        uVar7 = *param_3;
        goto joined_r0x005315e4;
      }
    }
  }
  uVar3 = FUN__text__005311fc(local_58,local_50,local_48,param_1,param_4);
  uVar7 = *param_3;
joined_r0x005315e4:
  if (uVar7 != 0) {
    if (*param_1 != 0) {
      uVar7 = (((*param_1 * 0x1000193 ^ uVar7 & 0xff) * 0x1000193 ^ uVar7 >> 8 & 0xff) * 0x1000193 ^
              uVar7 >> 0x10 & 0xff) * 0x1000193 ^ uVar7 >> 0x18;
    }
    *param_1 = uVar7;
  }
  return uVar3 & 1;
}


