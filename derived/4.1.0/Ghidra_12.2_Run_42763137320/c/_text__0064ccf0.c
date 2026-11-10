/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ccf0; name: FUN_.text__0064ccf0
 */


undefined8 FUN__text__0064ccf0(void)

{
  ulong uVar1;
  
  do {
    nn::nifm::SubmitNetworkRequestAndWait();
    uVar1 = nn::nifm::IsNetworkAvailable();
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    uVar1 = nn::nifm::HandleNetworkRequestErrorResult();
  } while ((uVar1 & 1) != 0);
  return 1;
}


