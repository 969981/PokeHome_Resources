/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf9b4; name: FUN_.text__005cf9b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf9b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  FUN__text__005d8a8c();
  param_1[0x34] = uVar1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = 0x896a30;
  param_1[9] = 0x896a90;
  param_1[10] = 0x896ad0;
  return;
}


