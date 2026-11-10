/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a23c0; name: FUN_.text__004a23c0
 */


undefined8 FUN__text__004a23c0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__004ad7e8(param_1 + 0xa8);
  if ((uVar1 & 1) == 0) {
    return 0x34;
  }
  uVar2 = FUN__text__004ae480(param_1 + 8);
  return uVar2;
}


