/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006319d4; name: FUN_.text__006319d4
 */


undefined8 FUN__text__006319d4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0));
  return uVar2;
}


