/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c8c0; name: FUN_.text__0064c8c0
 */


bool FUN__text__0064c8c0(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(bool **)(param_1 + 0xca0) != (bool *)0x0) {
    iVar2 = nn::account::AsyncContext::HasDone(*(bool **)(param_1 + 0xca0));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


