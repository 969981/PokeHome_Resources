/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320ba0; name: FUN_.text__00320ba0
 */


undefined * FUN__text__00320ba0(undefined1 *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__00304b90();
  *param_1 = (&DAT_0093f331)[lVar1 + (ulong)param_2 * 0x24];
  lVar1 = FUN__text__00304b90();
  return &DAT_0093f332 + lVar1 + (ulong)param_2 * 0x24;
}


