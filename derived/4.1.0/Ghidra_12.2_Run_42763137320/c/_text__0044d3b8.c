/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d3b8; name: FUN_.text__0044d3b8
 */


void FUN__text__0044d3b8(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0xe0);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  uVar2 = FUN__text__0044c410(param_1 + 0x20);
  if ((cVar1 == '\0') || ((uVar2 & 1) != 0)) {
    FUN__text__0044caf0(param_1);
    return;
  }
  return;
}


