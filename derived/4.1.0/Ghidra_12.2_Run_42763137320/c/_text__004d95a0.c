/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d95a0; name: FUN_.text__004d95a0
 */


void FUN__text__004d95a0(long param_1,int param_2,undefined8 *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int local_34;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  piVar2 = piVar3;
  if (uVar1 == 0) {
LAB__text__004d9600:
    if (piVar2 != piVar3 + (ulong)uVar1 * 8) {
      piVar2 = piVar2 + 2;
      goto LAB__text__004d9650;
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 5;
    do {
      if (*piVar2 == param_2) goto LAB__text__004d9600;
      piVar2 = piVar2 + 8;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  local_34 = -1;
  FUN__text__0045cf50(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 8),param_2,&local_34
                     );
  if ((local_34 == -1) ||
     (piVar2 = (int *)FUN__text__004d8cc0((undefined8 *)(param_1 + 0x10),param_2),
     piVar2 == (int *)0x0)) {
    *param_3 = 0;
    *param_4 = 0;
    return;
  }
LAB__text__004d9650:
  *param_4 = piVar2[4];
  *param_3 = *(undefined8 *)(piVar2 + 2);
  return;
}


