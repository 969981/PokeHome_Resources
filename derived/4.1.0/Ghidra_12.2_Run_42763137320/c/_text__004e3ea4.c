/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e3ea4; name: FUN_.text__004e3ea4
 */


undefined4 FUN__text__004e3ea4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = nn::audio::StartAudioOut((AudioOut *)(param_1 + 0x40));
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}


