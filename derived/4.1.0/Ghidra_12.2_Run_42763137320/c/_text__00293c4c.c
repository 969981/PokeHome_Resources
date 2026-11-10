/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293c4c; name: FUN_.text__00293c4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00293c4c(long *param_1)

{
  long lVar1;
  undefined4 local_8;
  undefined4 uStack_4;
  
  lVar1 = *param_1;
  local_8 = *_DAT_008a2148;
  uStack_4 = 8;
  (**(code **)(lVar1 + 0x15e0))(lVar1 + 0x1600,&uStack_4,&local_8);
  FUN__text__00290fa0(lVar1);
  return;
}


