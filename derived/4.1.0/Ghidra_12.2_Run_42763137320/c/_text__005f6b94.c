/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6b94; name: FUN_.text__005f6b94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f6b94(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar1 = _DAT_008a5ce0 + 0x10;
  lVar2 = _DAT_008a5ce0 + 0xe8;
  param_1[4] = param_4;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  FUN__text__005f67a4(param_1 + 5);
  param_1[0x13] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1);
  *(undefined1 *)((long)param_1 + 0xa2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  return;
}


