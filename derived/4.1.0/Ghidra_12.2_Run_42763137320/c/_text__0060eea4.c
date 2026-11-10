/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060eea4; name: FUN_.text__0060eea4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0060eea4(long *param_1)

{
  long lVar1;
  
  FUN__text__0060e758();
  lVar1 = _DAT_008a6250;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = lVar1 + 0x10;
  nn::os::InitializeLightEvent((long)param_1 + 0x14,0,1);
  *(undefined1 *)((long)param_1 + 0x16) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}


