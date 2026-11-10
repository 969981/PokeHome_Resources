/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf5e8; name: FUN_.text__003cf5e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cf5e8(long *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = _DAT_008a3720 + 0x10;
  memset(param_1 + 2,0,0x110);
  lVar1 = _DAT_0089f6e0 + 0x10;
  param_1[2] = lVar1;
  memset(param_1 + 0x24,0,0x110);
  param_1[0x24] = lVar1;
  memset(param_1 + 0x46,0,0x110);
  param_1[0x46] = lVar1;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  return;
}


