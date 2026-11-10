/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f2200; name: FUN_.text__006f2200
 */


int FUN__text__006f2200(int param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0x62;
  piVar2 = (int *)&DAT_0077ebd8;
  do {
    uVar4 = uVar3 >> 1;
    uVar3 = uVar3 + ~uVar4;
    piVar1 = piVar2 + uVar4 * 2 + 2;
    if (param_1 <= piVar2[uVar4 * 2]) {
      uVar3 = uVar4;
      piVar1 = piVar2;
    }
    piVar2 = piVar1;
  } while (uVar3 != 0);
  if ((piVar2 == (int *)&DAT_0077eee8) || (param_1 < *piVar2)) {
    return 0;
  }
  return piVar2[1];
}


