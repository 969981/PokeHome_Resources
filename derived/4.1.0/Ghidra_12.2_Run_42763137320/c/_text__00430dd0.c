/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430dd0; name: FUN_.text__00430dd0
 */


undefined8 FUN__text__00430dd0(undefined8 *param_1,int param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 4;
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 4;
      lVar4 = lVar4 + -0x10;
      if (lVar4 == 0) {
        return 0x14;
      }
    }
  }
  if (piVar3 == piVar2 + (ulong)uVar1 * 4) {
    return 0x14;
  }
  lVar4 = *(long *)(piVar3 + 2);
  if (*(long *)(lVar4 + 8) == 0) {
    *(long *)(lVar4 + 8) = param_3;
    *(undefined8 *)(param_3 + 8) = 0;
    return 1;
  }
  *(long *)(param_3 + 8) = *(long *)(lVar4 + 8);
  *(long *)(lVar4 + 8) = param_3;
  return 1;
}


