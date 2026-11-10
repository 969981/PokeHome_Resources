/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293b10; name: FUN_.text__00293b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00293b10(long *param_1,uint *param_2)

{
  long lVar1;
  undefined4 local_4;
  
  lVar1 = *param_1;
  local_4 = *(undefined4 *)(_DAT_008a2148 + (ulong)*param_2 * 4);
  (**(code **)(lVar1 + 0x1660))(lVar1 + 0x1680,&local_4);
  FUN__text__00290fa0(lVar1);
  return;
}


