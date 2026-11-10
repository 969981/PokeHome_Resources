/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048ebe0; name: FUN_.text__0048ebe0
 */


void FUN__text__0048ebe0(long param_1,int param_2,long param_3,int *param_4)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar5;
  piVar3 = piVar1;
  if (uVar5 == 0) {
LAB__text__0048ec5c:
    if (piVar3 == piVar1 + uVar6 * 6) goto LAB__text__0048ecac;
    plVar2 = (long *)(piVar3 + 2);
    if (*plVar2 == param_3) {
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)param_4;
    }
    else if (param_4[1] != 2) {
      if (*param_4 < piVar3[4]) {
        piVar3[4] = *param_4;
      }
      if (piVar3[5] != 1) {
        piVar3[5] = param_4[1];
      }
    }
  }
  else {
    lVar4 = uVar6 * 0x18;
    do {
      if (*piVar3 == param_2) goto LAB__text__0048ec5c;
      piVar3 = piVar3 + 6;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
LAB__text__0048ecac:
    piVar3 = piVar1;
    if (uVar5 == 0) {
LAB__text__0048ecdc:
      if (piVar3 == piVar1 + uVar6 * 6) goto LAB__text__0048ecec;
    }
    else {
      lVar4 = uVar6 * 0x18;
      do {
        if (*piVar3 == param_2) goto LAB__text__0048ecdc;
        piVar3 = piVar3 + 6;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
LAB__text__0048ecec:
      if (*(uint *)(param_1 + 0x1c) <= uVar5) {
        uVar6 = FUN__text__0048ee50();
        if (((uVar6 & 1) == 0) || (*(uint *)(param_1 + 0x1c) <= uVar5)) goto LAB__text__0048ed44;
        uVar5 = *(uint *)(param_1 + 0x18);
        piVar1 = *(int **)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x18) = uVar5 + 1;
      if (piVar1 == (int *)0x0) goto LAB__text__0048ed44;
      piVar3 = piVar1 + (ulong)uVar5 * 6;
      *piVar3 = param_2;
    }
    plVar2 = (long *)(piVar3 + 2);
    *(undefined8 *)(piVar3 + 4) = *(undefined8 *)param_4;
  }
  *plVar2 = param_3;
LAB__text__0048ed44:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}


