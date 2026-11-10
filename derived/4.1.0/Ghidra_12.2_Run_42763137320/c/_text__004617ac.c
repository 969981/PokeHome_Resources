/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004617ac; name: FUN_.text__004617ac
 */


undefined8 FUN__text__004617ac(long param_1,int param_2,byte param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xf0);
  if (param_2 == 0) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
  }
  else if (piVar1 == (int *)0x0) {
    uVar3 = 2;
    piVar1 = (int *)FUN__text__00400f80(2,0xc);
    if (piVar1 == (int *)0x0) goto LAB__text__004618a0;
    *(undefined2 *)(piVar1 + 2) = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined1 *)((long)piVar1 + 9) = 1;
    *(int **)(param_1 + 0xf0) = piVar1;
  }
  if (*piVar1 <= param_4) {
    *piVar1 = param_4;
    lVar2 = *(long *)(param_1 + 0xf0);
    if (lVar2 == 0) {
      return 1;
    }
    if ((*(byte *)(lVar2 + 9) != (param_3 & 1)) || (*(int *)(lVar2 + 4) != param_2)) {
      *(byte *)(lVar2 + 9) = param_3 & 1;
      *(int *)(*(long *)(param_1 + 0xf0) + 4) = param_2;
      FUN__text__0046469c(param_1,0,0,0,4);
      lVar2 = *(long *)(param_1 + 0xf0);
    }
    uVar3 = 1;
    if ((param_2 == 0) && (lVar2 != 0)) {
      FUN__text__00400fc0(2);
LAB__text__004618a0:
      *(undefined8 *)(param_1 + 0xf0) = 0;
      return uVar3;
    }
  }
  return 1;
}


