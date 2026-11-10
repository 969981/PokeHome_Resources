/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060eef8; name: FUN_.text__0060eef8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0060eef8(long *param_1)

{
  *param_1 = _DAT_008a6250 + 0x10;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x14));
  FUN__text__0060e79c(param_1);
  return;
}


