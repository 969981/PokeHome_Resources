/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012959c; name: FUN_.text__0012959c
 */


undefined8 FUN__text__0012959c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN__text__00129654(param_1,param_1[1]);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar3 = 0;
  if (((uVar1 & 1) != 0) && ((uVar2 & 1) != 0)) {
    if ((param_1[0xe] == 0) || (*(int *)(param_1[0xe] + 0x54) == 0)) {
      return 0;
    }
    uVar3 = 1;
    if ((char)param_1[199] == '\0') {
      FUN__text__0012bcd0(param_1 + 0x22);
      (**(code **)(*param_1 + 0x40))(param_1);
      *(undefined1 *)(param_1 + 199) = 1;
      return 1;
    }
  }
  return uVar3;
}


