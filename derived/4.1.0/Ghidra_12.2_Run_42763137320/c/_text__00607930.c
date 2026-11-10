/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00607930; name: FUN_.text__00607930
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00607930(ushort *param_1,undefined8 param_2,undefined1 param_3)

{
  ushort uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_28;
  
  if (param_1 == (ushort *)0x0) {
    return;
  }
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN__text__00601290(&local_40,param_2,param_3);
  if ((ushort)((ushort)local_40 - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if ((((ushort)local_40 & 0xfffc) != 0xe8) && (uVar1 = 0x45, ((ushort)local_40 & 0xfffc) != 200))
    {
      uVar1 = (ushort)local_40;
    }
    *param_1 = uVar1;
  }
  else {
    *param_1 = (ushort)local_40 - 0x20;
  }
  if ((ushort)(local_40._2_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_40._2_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_40._2_2_ & 0xfffc) != 200)) {
      uVar1 = local_40._2_2_;
    }
    param_1[1] = uVar1;
  }
  else {
    param_1[1] = local_40._2_2_ - 0x20;
  }
  if ((ushort)(local_40._4_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_40._4_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_40._4_2_ & 0xfffc) != 200)) {
      uVar1 = local_40._4_2_;
    }
    param_1[2] = uVar1;
  }
  else {
    param_1[2] = local_40._4_2_ - 0x20;
  }
  if ((ushort)(local_40._6_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_40._6_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_40._6_2_ & 0xfffc) != 200)) {
      uVar1 = local_40._6_2_;
    }
    param_1[3] = uVar1;
  }
  else {
    param_1[3] = local_40._6_2_ - 0x20;
  }
  if ((ushort)((ushort)local_38 - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if ((((ushort)local_38 & 0xfffc) != 0xe8) && (uVar1 = 0x45, ((ushort)local_38 & 0xfffc) != 200))
    {
      uVar1 = (ushort)local_38;
    }
    param_1[4] = uVar1;
  }
  else {
    param_1[4] = (ushort)local_38 - 0x20;
  }
  if ((ushort)(local_38._2_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_38._2_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_38._2_2_ & 0xfffc) != 200)) {
      uVar1 = local_38._2_2_;
    }
    param_1[5] = uVar1;
  }
  else {
    param_1[5] = local_38._2_2_ - 0x20;
  }
  if ((ushort)(local_38._4_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_38._4_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_38._4_2_ & 0xfffc) != 200)) {
      uVar1 = local_38._4_2_;
    }
    param_1[6] = uVar1;
  }
  else {
    param_1[6] = local_38._4_2_ - 0x20;
  }
  if ((ushort)(local_38._6_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_38._6_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_38._6_2_ & 0xfffc) != 200)) {
      uVar1 = local_38._6_2_;
    }
    param_1[7] = uVar1;
  }
  else {
    param_1[7] = local_38._6_2_ - 0x20;
  }
  if ((ushort)((ushort)local_30 - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if ((((ushort)local_30 & 0xfffc) != 0xe8) && (uVar1 = 0x45, ((ushort)local_30 & 0xfffc) != 200))
    {
      uVar1 = (ushort)local_30;
    }
    param_1[8] = uVar1;
  }
  else {
    param_1[8] = (ushort)local_30 - 0x20;
  }
  if ((ushort)(local_30._2_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_30._2_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_30._2_2_ & 0xfffc) != 200)) {
      uVar1 = local_30._2_2_;
    }
    param_1[9] = uVar1;
  }
  else {
    param_1[9] = local_30._2_2_ - 0x20;
  }
  if ((ushort)(local_30._4_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_30._4_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_30._4_2_ & 0xfffc) != 200)) {
      uVar1 = local_30._4_2_;
    }
    param_1[10] = uVar1;
  }
  else {
    param_1[10] = local_30._4_2_ - 0x20;
  }
  if ((ushort)(local_30._6_2_ - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_30._6_2_ & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_30._6_2_ & 0xfffc) != 200)) {
      uVar1 = local_30._6_2_;
    }
    param_1[0xb] = uVar1;
  }
  else {
    param_1[0xb] = local_30._6_2_ - 0x20;
  }
  if ((ushort)(local_28 - 0x7b) < 0xffe6) {
    uVar1 = 0x45;
    if (((local_28 & 0xfffc) != 0xe8) && (uVar1 = 0x45, (local_28 & 0xfffc) != 200)) {
      uVar1 = local_28;
    }
  }
  else {
    uVar1 = local_28 - 0x20;
  }
  param_1[0xc] = uVar1;
  return;
}


