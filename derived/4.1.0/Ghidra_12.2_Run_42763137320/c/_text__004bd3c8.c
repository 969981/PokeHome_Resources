/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd3c8; name: FUN_.text__004bd3c8
 */


void FUN__text__004bd3c8(long *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_30;
  long *plStack_28;
  
  uStack_3b = param_3 == 0;
  local_3c = 0;
  uStack_3a = 0;
  local_38 = 0;
  local_40 = *(byte *)((long)param_1 + 0x36) & 0x1f;
  plStack_28 = param_1 + 7;
  local_30 = 0;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  uStack_44 = FUN__text__004ba030();
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1,&local_58);
  local_78 = CONCAT44(uStack_44,local_48);
  uStack_70 = CONCAT26(uStack_3a,CONCAT15(uStack_3b,CONCAT14(local_3c,local_40)));
  local_68 = CONCAT71(uStack_37,local_38);
  local_88 = CONCAT44(uStack_54,local_58);
  uStack_60 = local_30;
  lStack_80 = local_50;
  FUN__text__004bd1a0(uVar1,&local_88);
  FUN__text__0045da60(&local_58);
  return;
}


