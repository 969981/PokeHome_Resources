/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e11c; name: FUN_.text__0063e11c
 */


undefined8 FUN__text__0063e11c(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = **(ushort **)(param_1 + 0x18);
  if (0x162 < uVar1) {
    uVar1 = 0;
  }
  uVar2 = FUN__text__0063e384(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x18) + 2);
    if (0x162 < uVar1) {
      uVar1 = 0;
    }
    uVar2 = FUN__text__0063e384(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x18) + 4);
      if (0x162 < uVar1) {
        uVar1 = 0;
      }
      uVar2 = FUN__text__0063e384(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = *(ushort *)(*(long *)(param_1 + 0x18) + 6);
        if (0x162 < uVar1) {
          uVar1 = 0;
        }
        uVar3 = FUN__text__0063e384(uVar1);
        return uVar3;
      }
    }
  }
  return 1;
}


