/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011a180; name: FUN_.text__0011a180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011a180(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)std::__libcpp_verbose_abort((char *)0x717233,param_1);
  plVar1[0x10] = 0;
  plVar1[0x11] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0xc] = 0;
  plVar1[0xd] = 0;
  plVar1[10] = 0;
  plVar1[0xb] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  *plVar1 = 0;
  plVar1[1] = 0;
  *plVar1 = _DAT_0089fef8 + 0x10;
  *(undefined1 *)(plVar1 + 0x17) = 0;
  *(undefined1 *)(plVar1 + 0x1d) = 0;
  nn::hid::SetSupportedNpadStyleSet(7);
  nn::hid::SetSupportedNpadIdType((uint *)0x72178c,2);
  nn::hid::SetNpadJoyHoldType(0);
  nn::hid::SetNpadHandheldActivationMode(0);
  nn::hid::BindNpadStyleSetUpdateEvent(0x72178c,plVar1 + 0x12,0);
  nn::hid::BindNpadStyleSetUpdateEvent(0x721790,plVar1 + 0x18,0);
  return;
}


