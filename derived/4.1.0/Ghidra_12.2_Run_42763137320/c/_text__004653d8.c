/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004653d8; name: FUN_.text__004653d8
 */


undefined8 FUN__text__004653d8(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x60);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN__text__00400f80(2,0x18);
    if (piVar3 == (int *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return 0x34;
    }
    FUN__text__00463bb0();
    *(int **)(param_1 + 0x60) = piVar3;
    iVar1 = *piVar3;
  }
  else {
    iVar1 = *piVar3;
  }
  if (iVar1 <= param_3) {
    *piVar3 = param_3;
    uVar2 = FUN__text__00400f80(2,param_2 << 3);
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = uVar2;
    if (*(long *)(*(long *)(param_1 + 0x60) + 8) == 0) {
      return 0x34;
    }
    *(int *)(*(long *)(param_1 + 0x60) + 0x10) = param_2;
  }
  return 1;
}


