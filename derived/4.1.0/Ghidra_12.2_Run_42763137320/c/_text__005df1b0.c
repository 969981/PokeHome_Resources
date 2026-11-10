/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005df1b0; name: FUN_.text__005df1b0
 */


void FUN__text__005df1b0(void)

{
  ulong uVar1;
  uint local_24;
  
  uVar1 = nn::oe::TryPopNotificationMessage(&local_24);
  if (((uVar1 & 1) == 0) || (0x1b < local_24 - 4)) {
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x005df1ec */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__005df1f8 + (ulong)*(byte *)((ulong)(local_24 - 4) + 0x757d50) * 4))();
  return;
}


