/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004743b0; name: FUN_.text__004743b0
 */


void FUN__text__004743b0(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN__text__004c6f00(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined2 *)(param_1 + 0x310) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x313);
  if ((uVar1 >> 0xf & 1) == 0) {
    *(uint *)(param_1 + 0x313) = uVar1 | 0x8000;
    FUN__text__004786dc(param_1 + 0x18);
    return;
  }
  return;
}


