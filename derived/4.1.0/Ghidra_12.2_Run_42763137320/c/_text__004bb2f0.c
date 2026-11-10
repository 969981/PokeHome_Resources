/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bb2f0; name: FUN_.text__004bb2f0
 */


void FUN__text__004bb2f0(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  
  piVar2 = *(int **)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x40);
  piVar1 = piVar2;
  if (uVar3 == 0) {
LAB__text__004bb350:
    if (piVar1 != piVar2 + (ulong)uVar3 * 2) {
      uVar3 = uVar3 - 1;
      if (piVar1 < piVar2 + (ulong)uVar3 * 2) {
        memmove(piVar1,piVar1 + 2,
                (ulong)(uint)((int)(piVar2 + (ulong)uVar3 * 2) - (int)piVar1) & 0xfffffff8);
        uVar3 = *(int *)(param_1 + 0x40) - 1;
      }
      *(uint *)(param_1 + 0x40) = uVar3;
      return;
    }
  }
  else {
    lVar4 = (ulong)uVar3 << 3;
    do {
      if (*piVar1 == (int)param_2 &&
          (uint)*(byte *)(piVar1 + 1) == ((uint)((ulong)param_2 >> 0x20) & 0xff))
      goto LAB__text__004bb350;
      piVar1 = piVar1 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}


