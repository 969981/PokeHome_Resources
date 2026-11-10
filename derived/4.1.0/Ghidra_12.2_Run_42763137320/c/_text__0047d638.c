/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d638; name: FUN_.text__0047d638
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047d638(undefined4 param_1,long param_2)

{
  undefined1 uStack_11;
  
  *(undefined4 *)(param_2 + 0x90) = param_1;
  FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_2 + 8) + 0x58),&uStack_11);
  return 1;
}


