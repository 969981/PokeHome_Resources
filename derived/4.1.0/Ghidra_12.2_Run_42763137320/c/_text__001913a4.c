/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001913a4; name: FUN_.text__001913a4
 */


undefined8 FUN__text__001913a4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((((*param_1 == 0) || (uVar2 = FUN__text__00306588(), (uVar2 & 1) != 0)) ||
      (iVar1 = FUN__text__003065f8(*param_1), iVar1 == 0)) ||
     ((0x401 < iVar1 || (uVar2 = FUN__text__00306a08(*param_1,2), (uVar2 & 1) != 0)))) {
    return 1;
  }
  return 0;
}


