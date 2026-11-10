/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631a5c; name: FUN_.text__00631a5c
 */


bool FUN__text__00631a5c(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if (((uVar2 & 1) == 0) ||
     (uVar2 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar2 & 1) == 0)) {
    return false;
  }
  cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0));
  return (byte)(cVar1 - 1U) < 2;
}


