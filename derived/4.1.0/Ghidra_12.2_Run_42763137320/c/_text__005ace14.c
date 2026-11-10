/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ace14; name: FUN_.text__005ace14
 */


void FUN__text__005ace14(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  iVar1 = nn::oe::GetPerformanceMode();
  *(uint *)(lVar2 + 0x8588) = (uint)(iVar1 == 1);
  *(uint *)(lVar2 + 0x8598) = (uint)(iVar1 == 1);
  return;
}


