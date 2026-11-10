/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632724; name: FUN_.text__00632724
 */


ulong FUN__text__00632724(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN__text__0060fea0();
    return uVar3;
  }
  uVar3 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if (((uVar3 & 1) != 0) &&
     (uVar3 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar3 & 1) != 0)) {
    cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0));
    if ((byte)(cVar1 - 1U) < 2) {
      uVar2 = FUN__text__00631f1c(param_1);
      return (ulong)(uVar2 & 0xffff);
    }
  }
  uVar2 = FUN__text__00631b50(param_1);
  return (ulong)(uVar2 & 0xffff);
}


