/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea3f4; name: FUN_.text__006ea3f4
 */


void FUN__text__006ea3f4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((char)param_1[0xc] != '\0') {
    if (*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + (long)*param_1 * 2 + 4)) {
      *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + (long)*param_1 * 2 + 4);
    }
    piVar4 = param_1 + (long)*param_1 * 0x6c + 0xe;
    FUN__text__006ec60c(piVar4,0,*(undefined8 *)(piVar4 + 0x12));
    FUN__text__006ec608(piVar4);
    iVar3 = 2;
    if (param_1[1] == 3) {
      iVar3 = 3;
    }
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = (*param_1 + 1) / iVar3;
    }
    iVar3 = (*param_1 + 1) - iVar1 * iVar3;
    piVar4 = param_1 + (long)iVar3 * 0x6c + 0xe;
    *param_1 = iVar3;
    piVar4[0x68] = 0;
    piVar4[0x69] = 0;
    uVar2 = FUN__text__006ec5f4(piVar4);
    iVar3 = *param_1;
    *(undefined8 *)(piVar4 + 0x6a) = uVar2;
    (param_1 + (long)iVar3 * 2 + 4)[0] = 0;
    (param_1 + (long)iVar3 * 2 + 4)[1] = 0;
  }
  return;
}


