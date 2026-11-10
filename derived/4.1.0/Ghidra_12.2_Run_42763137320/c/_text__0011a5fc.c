/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011a5fc; name: FUN_.text__0011a5fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011a5fc(long *param_1)

{
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = _DAT_0089ff28 + 0x10;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  nn::hid::SetSupportedNpadStyleSet(7);
  nn::hid::SetSupportedNpadIdType((uint *)0x721794,2);
  nn::hid::SetNpadJoyHoldType(0);
  nn::hid::SetNpadHandheldActivationMode(0);
  nn::hid::BindNpadStyleSetUpdateEvent(0x721794,param_1 + 0x12,0);
  nn::hid::BindNpadStyleSetUpdateEvent(0x721798,param_1 + 0x18,0);
  return;
}


