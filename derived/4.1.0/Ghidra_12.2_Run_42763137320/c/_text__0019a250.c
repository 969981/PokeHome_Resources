/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a250; name: FUN_.text__0019a250
 */


undefined8 FUN__text__0019a250(long *param_1,char *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  *param_3 = 0;
  lVar3 = *(long *)(*(long *)(*param_1 + 0x60) + 0xf8);
  if (lVar3 != 0) {
    iVar1 = 0;
    lVar3 = lVar3 * 0x1c;
    piVar2 = (int *)(*(long *)(*(long *)(*param_1 + 0x60) + 0xf0) + 8);
    do {
      if (((((char)piVar2[-2] == *param_2) && (piVar2[-1] == *(int *)(param_2 + 4))) &&
          (*piVar2 == *(int *)(param_2 + 8))) &&
         ((piVar2[1] == *(int *)(param_2 + 0xc) && (piVar2[2] == *(int *)(param_2 + 0x10))))) {
        *param_3 = iVar1;
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 7;
      lVar3 = lVar3 + -0x1c;
    } while (lVar3 != 0);
  }
  return 0;
}


