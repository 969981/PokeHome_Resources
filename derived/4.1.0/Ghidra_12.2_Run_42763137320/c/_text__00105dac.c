/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00105dac; name: FUN_.text__00105dac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00105dac(void)

{
  int iVar1;
  long local_b0 [4];
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_34;
  
  FUN__text__00105e74(*(undefined8 *)(DAT_008e1518 + 0x2c8));
  FUN__text__005a84f4(local_b0);
  local_58 = 0x3000;
  local_60 = 0xa000;
  local_88 = 0xc00000;
  uStack_80 = 0x3000000;
  local_78 = *_DAT_0089f2b8 + 0x2000000;
  uStack_70 = 0x500000;
  local_b0[0] = _DAT_008aa018 + 0xbe00000;
  local_b0[1] = 0x2200000000;
  local_b0[2] = 0x13900000;
  local_b0[3] = 0xa100000001;
  iVar1 = nn::oe::GetPerformanceMode();
  local_40 = 0xb06;
  local_34 = 0xb06;
  local_90 = (uint)(iVar1 == 1);
  FUN__text__005a8cd8(DAT_008e1680,local_b0);
  return;
}


