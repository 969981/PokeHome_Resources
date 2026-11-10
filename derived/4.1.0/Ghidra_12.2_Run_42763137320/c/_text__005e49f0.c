/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e49f0; name: FUN_.text__005e49f0
 */


void FUN__text__005e49f0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_2 + 0x130) >> 1 & 1) != 0) {
    FUN__text__005e591c(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  uVar1 = FUN__text__005e591c(*(undefined8 *)(param_1 + (long)*(int *)(param_3 + 0xc) * 8 + 0x10));
  if (((uVar1 & 1) != 0) &&
     (uVar1 = (ulong)*(uint *)(param_1 + 0x150), *(uint *)(param_1 + 0x150) != 0)) {
    uVar2 = 0;
    do {
      if (uVar2 != *(uint *)(param_3 + 0xc)) {
        FUN__text__005e58a0(*(undefined8 *)(param_1 + 0x10 + uVar2 * 8));
        uVar1 = (ulong)*(uint *)(param_1 + 0x150);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


