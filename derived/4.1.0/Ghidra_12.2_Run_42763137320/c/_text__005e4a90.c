/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4a90; name: FUN_.text__005e4a90
 */


long FUN__text__005e4a90(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x150);
  if (*(uint *)(param_1 + 0x150) == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    if (uVar3 != *(uint *)(param_2 + 0xc)) {
      lVar1 = FUN__text__005e5a80(*(undefined8 *)(param_1 + 0x10 + uVar3 * 8),param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0x150);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar2);
  return 0;
}


