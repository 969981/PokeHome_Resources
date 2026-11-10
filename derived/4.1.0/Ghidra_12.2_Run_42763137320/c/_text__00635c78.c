/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00635c78; name: FUN_.text__00635c78
 */


undefined8 FUN__text__00635c78(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__0060f6e0(*(undefined8 *)(param_1 + 0x2f0),6);
  if ((((uVar2 & 1) == 0) ||
      (cVar1 = FUN__text__0061b1f0(*(undefined8 *)(param_1 + 0x2f0)), cVar1 == '\0')) ||
     (uVar2 = FUN__text__00635cd4(param_1), (uVar2 & 1) == 0)) {
    return 0;
  }
  return 1;
}


