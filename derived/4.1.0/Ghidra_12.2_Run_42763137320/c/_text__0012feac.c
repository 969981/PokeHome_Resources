/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012feac; name: FUN_.text__0012feac
 */


void FUN__text__0012feac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int local_38;
  undefined1 local_34;
  undefined4 local_32;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_32 = *(undefined4 *)((long)param_3 + 0x3a);
  local_40 = 0x8abaf272a347e952;
  local_34 = *(undefined1 *)(param_3 + 7);
  local_20 = 0;
  uStack_18 = 0;
  local_60 = param_3[4];
  uStack_58 = param_3[5];
  local_50 = param_3[6];
  uVar1 = *(int *)(param_1 + 0x7c4) - 3;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  local_48 = 4;
  if (2 < uVar1) {
    local_48 = 2;
  }
  local_38 = (uint)(2 < uVar1) << 1;
  FUN__text__00131e04(param_1,param_2,&local_80);
  return;
}


