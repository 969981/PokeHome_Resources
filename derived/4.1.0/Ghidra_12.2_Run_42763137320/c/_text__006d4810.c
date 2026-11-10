/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d4810; name: FUN_.text__006d4810
 */


void FUN__text__006d4810(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long local_90;
  ulong local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  ushort local_24;
  undefined2 local_22;
  
  local_50 = 0;
  lStack_48 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  plVar1 = *(long **)(param_1 + 8);
  if (*(long **)(param_1 + 0x1c0) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x1c0);
  }
  (**(code **)(*plVar1 + 0x20))(&local_90,plVar1);
  FUN__text__006ebde4(&local_70);
  uVar5 = (uint)local_90;
  local_78 = 0;
  local_70 = 0;
  uVar4 = (uint)local_90 >> 0x10;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  uVar2 = NEON_ucvtf(uVar5 & 0xffff);
  uVar3 = NEON_ucvtf(uVar4);
  local_68 = CONCAT44(uVar3,uVar2);
  (**(code **)(*plVar1 + 0x20))(&local_24,plVar1);
  FUN__text__006ebdf4(&local_90);
  local_90 = 0;
  local_88 = (ulong)CONCAT24(local_22,(uint)local_24);
  FUN__text__006eda60((short)*(undefined4 *)(param_1 + 0x140),
                      (short)*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
                      *(undefined4 *)(param_1 + 0x14c),param_3,plVar1 + 8,0);
  param_2[0x23] = lStack_58;
  param_2[0x24] = local_50;
  param_2[0x21] = local_68;
  param_2[0x22] = local_60;
  param_2[0x1f] = (long)(plVar1 + 8);
  param_2[0x20] = local_70;
  param_2[0x29] = local_78;
  param_2[0x2a] = param_1 + 0x178;
  param_2[0x27] = local_88;
  param_2[0x28] = local_80;
  param_2[0x25] = lStack_48;
  param_2[0x26] = local_90;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    param_2[0x2c] = *(long *)(param_1 + 0x1c8);
  }
  FUN__text__0069deb0(param_2,param_3);
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  return;
}


