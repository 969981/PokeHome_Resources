/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bda44; name: FUN_.text__006bda44
 */


void FUN__text__006bda44(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x117) == '\0') {
    local_30 = 0;
    local_28 = 0;
    local_88 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    local_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    FUN__text__00693ff8(&local_88);
    uStack_74 = 0;
    local_70 = 0;
    bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 8);
    local_60 = *(long *)(param_1 + 0xf0);
    local_28 = CONCAT71((int7)(CONCAT53(local_28._3_5_,CONCAT12(bVar1 >> 6,(undefined2)local_28)) >>
                              8),bVar1) & 0xffffffffff01ff01;
    uStack_68 = CONCAT44(*(undefined4 *)(param_1 + 0x118),(undefined4)uStack_68);
    if (local_60 != 0) {
      FUN__text__0068a8b8(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),&local_88)
      ;
      local_48 = CONCAT44(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104));
      uVar2 = 0x7f7fffff;
      if ((*(ushort *)(param_1 + 0x114) & 0x40) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
      }
      local_50 = CONCAT44(uVar2,(undefined4)local_50);
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      local_30 = *(long *)(param_1 + 0x108);
    }
    FUN__text__006941e0(&local_88,param_2,*(undefined8 *)(param_1 + 0xd8),
                        *(undefined2 *)(param_1 + 0x112));
    thunk_FUN__text__0068a8b4(&local_88);
    return;
  }
  local_30 = 0;
  local_28 = 0;
  local_88 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  FUN__text__00692638(&local_88);
  uStack_74 = 0;
  local_70 = 0;
  bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 8);
  local_60 = *(long *)(param_1 + 0xf0);
  local_28 = CONCAT71((int7)(CONCAT53(local_28._3_5_,CONCAT12(bVar1 >> 6,(undefined2)local_28)) >> 8
                            ),bVar1) & 0xffffffffff01ff01;
  uStack_68 = CONCAT44(*(undefined4 *)(param_1 + 0x118),(undefined4)uStack_68);
  if (local_60 != 0) {
    FUN__text__0068a8b8(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),&local_88);
    local_48 = CONCAT44(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104));
    uVar2 = 0x7f7fffff;
    if ((*(ushort *)(param_1 + 0x114) & 0x40) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x50);
    }
    local_50 = CONCAT44(uVar2,(undefined4)local_50);
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    local_30 = *(long *)(param_1 + 0x108);
  }
  FUN__text__00692820(&local_88,param_2,*(undefined8 *)(param_1 + 0xd8),
                      *(undefined2 *)(param_1 + 0x112));
  thunk_FUN__text__0068a8b4(&local_88);
  return;
}


