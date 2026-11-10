/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6a60; name: FUN_.text__004f6a60
 */


undefined8 FUN__text__004f6a60(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  piVar3 = (int *)*param_1;
  uVar7 = *(uint *)(param_1 + 1);
  piVar4 = piVar3;
  if (uVar7 == 0) {
LAB__text__004f6ac0:
    if (piVar4 == piVar3 + (ulong)uVar7 * 0xe) goto LAB__text__004f6ad8;
  }
  else {
    lVar5 = (ulong)uVar7 * 0x38;
    do {
      if (*piVar4 == param_2) goto LAB__text__004f6ac0;
      piVar4 = piVar4 + 0xe;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
LAB__text__004f6ad8:
    if (*(uint *)((long)param_1 + 0xc) <= uVar7) {
      uVar1 = FUN__text__004f6e10(param_1);
      uVar6 = 2;
      if (((uVar1 & 1) == 0) || (*(uint *)((long)param_1 + 0xc) <= uVar7)) goto LAB__text__004f6b40;
      uVar7 = *(uint *)(param_1 + 1);
      piVar3 = (int *)*param_1;
    }
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (piVar3 == (int *)0x0) {
      uVar6 = 2;
      goto LAB__text__004f6b40;
    }
    piVar4 = piVar3 + (ulong)uVar7 * 0xe;
    *piVar4 = param_2;
  }
  piVar4[10] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  uVar2 = nn::os::GetSystemTick();
  uVar6 = 1;
  *(undefined8 *)(piVar4 + 0xc) = uVar2;
LAB__text__004f6b40:
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar6;
}


