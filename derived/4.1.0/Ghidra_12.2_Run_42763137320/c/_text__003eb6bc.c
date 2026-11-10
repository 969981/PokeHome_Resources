/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb6bc; name: FUN_.text__003eb6bc
 */


undefined8 FUN__text__003eb6bc(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(long *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 3) == '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      fVar3 = *(float *)(*(long *)(param_1 + 8) + 0x20);
      uVar1 = FUN__text__00697398();
      uVar2 = FUN__text__006973b0(*(undefined8 *)(param_1 + 8));
      if (((float)uVar1 <= fVar3) && ((uVar2 & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}


