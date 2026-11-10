/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d5a80; name: FUN_.text__003d5a80
 */


undefined8
FUN__text__003d5a80(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined6 uStack_54;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  
  local_150 = -1;
  uStack_4c = 0;
  uStack_144 = 0;
  local_14c = 0;
  uStack_134 = 0;
  local_13c = 0;
  uStack_124 = 0;
  local_12c = 0;
  uStack_114 = 0;
  local_11c = 0;
  uStack_104 = 0;
  local_10c = 0;
  uStack_f4 = 0;
  local_fc = 0;
  uStack_e4 = 0;
  local_ec = 0;
  uStack_d4 = 0;
  local_dc = 0;
  uStack_c4 = 0;
  local_cc = 0;
  uStack_b4 = 0;
  local_bc = 0;
  uStack_a4 = 0;
  local_ac = 0;
  uStack_94 = 0;
  local_9c = 0;
  uStack_84 = 0;
  local_8c = 0;
  uStack_74 = 0;
  local_7c = 0;
  uStack_64 = 0;
  local_6c = 0;
  uStack_54 = 0;
  uStack_4e = 0;
  local_5c = 0;
  FUN__text__003d5c30(&local_150,param_6);
  auVar5 = FUN__text__003d5d60(&local_150,param_2,param_3,param_4,param_5);
  lVar3 = auVar5._8_8_;
  if (auVar5._0_4_ != 0) {
    return auVar5._0_8_;
  }
  if (local_150 < 0) {
    if (local_150 != -1) {
      return 0x16;
    }
  }
  else if (local_150 != 0) {
    pbVar1 = (byte *)(param_2 + lVar3);
    if (local_150 == 3) {
      if ((ulong)(param_3 - lVar3) < 2) {
        return 0x22;
      }
      uVar2 = (int)local_14c._1_1_ << 0xc | (int)(char)(byte)local_14c << 0x12 |
              (int)local_14c._2_1_ << 6;
      *pbVar1 = (byte)(uVar2 >> 0x10);
      pbVar1[1] = (byte)(uVar2 >> 8);
      lVar4 = 2;
    }
    else {
      if (lVar3 == param_3) {
        return 0x22;
      }
      *pbVar1 = (byte)((uint)((int)local_14c._1_1_ << 0xc) >> 0x10) |
                (byte)(((uint)(byte)local_14c << 0x12) >> 0x10);
      lVar4 = 1;
    }
    goto LAB__text__003d5bf0;
  }
  lVar4 = 0;
LAB__text__003d5bf0:
  *param_1 = lVar4 + lVar3;
  return 0;
}


