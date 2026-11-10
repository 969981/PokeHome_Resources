/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144138; name: FUN_.text__00144138
 */


void FUN__text__00144138(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = std::chrono::steady_clock::now();
  FUN__text__0064c190();
  lVar4 = std::chrono::steady_clock::now();
  uVar2 = (lVar4 - lVar3) / 1000000;
  uVar1 = uVar2 & 0xf;
  if (lVar4 - lVar3 < 17000000) {
    uVar1 = 0x10 - uVar2;
  }
  nn::os::SleepThread(uVar1 * 1000000);
  return;
}


