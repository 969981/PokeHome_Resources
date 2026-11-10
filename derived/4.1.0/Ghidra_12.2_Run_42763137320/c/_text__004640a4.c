/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004640a4; name: FUN_.text__004640a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004640a4(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long local_8;
  
  local_8 = param_2;
  (**(code **)(*param_1 + 0x260))(param_1,&local_8);
  uVar2 = param_1[0x13];
  *(bool *)_DAT_008a4d28 = local_8 == 0;
  uVar1 = 0;
  if (local_8 != 0) {
    uVar1 = 0x1c000000;
  }
  param_1[0x13] = uVar2 & 0xffffffffe3ffffff | uVar1;
  if (param_1[0x10] != local_8) {
    param_1[0x10] = local_8;
    if (param_1[0xe] != 0) {
      FUN__text__0041595c(1);
      (**(code **)(*param_1 + 0x188))(param_1,1,0);
    }
  }
  return;
}


