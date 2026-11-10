/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a52d4; name: FUN_.text__002a52d4
 */


undefined8 FUN__text__002a52d4(int param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined6 uStack_c0;
  undefined2 local_ba;
  undefined6 uStack_b8;
  ulong local_b0;
  undefined4 uStack_a8;
  undefined2 local_a4;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined8 local_3c;
  undefined8 local_18;
  
  local_18 = 0x100000011d90000;
  if (param_1 != 5) {
    local_18 = 0x10018e011d92000;
  }
  uVar1 = FUN__text__0029e0f0(DAT_008e1600,param_3,&local_18);
  if ((uVar1 & 0xfffffffe) == 2) {
    uStack_b8 = 0;
    local_9a = 0x101;
    local_80 = *param_3;
    uStack_78 = param_3[1];
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_ba = 0;
    local_8c = 0;
    local_88 = 0;
    local_3c = 0;
    local_98 = 0;
    local_90 = 0;
    local_40 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    local_b0 = (ulong)param_2;
    local_a4 = (undefined2)param_1;
    uStack_a2 = (undefined2)((uint)param_1 >> 0x10);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    if (uVar1 == 3) {
      local_98 = 1;
    }
    else if (uVar1 == 2) {
      FUN__text__002a53e0(&local_d0);
    }
    FUN__text__00327140(param_2,&local_d0,param_3);
  }
  return 0;
}


