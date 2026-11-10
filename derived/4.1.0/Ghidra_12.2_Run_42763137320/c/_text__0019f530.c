/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019f530; name: FUN_.text__0019f530
 */


bool FUN__text__0019f530(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  return (((*(char *)(lVar1 + 0x286) != '\0' || *(char *)(lVar1 + 0x284) != '\0') ||
          *(char *)(lVar1 + 0x285) != '\0') || *(int *)(param_1 + 0x1e8) == 4) ||
         *(int *)(param_1 + 0x1e8) - 1U < 2;
}


