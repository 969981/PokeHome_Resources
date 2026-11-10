/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f507c; name: FUN_.text__003f507c
 */


undefined8 FUN__text__003f507c(long param_1,long param_2)

{
  short sVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  *(undefined2 *)(param_1 + 8) = 0;
  uVar2 = 1;
  if ((param_2 != 0) && (puVar3 = *(uint **)(param_1 + 0x10), puVar3 != (uint *)0x0)) {
    sVar1 = FUN__text__003f50e0(puVar3);
    if ((sVar1 != 0) || (*puVar3 < 2)) {
      *(short *)(param_1 + 8) = sVar1;
      return 1;
    }
    uVar2 = 0x16;
  }
  return uVar2;
}


