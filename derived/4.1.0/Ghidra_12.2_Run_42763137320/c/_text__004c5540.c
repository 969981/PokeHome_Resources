/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5540; name: FUN_.text__004c5540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c5540(int param_1,long param_2,int param_3,undefined8 *param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  piVar2 = (int *)*_DAT_008a4780;
  uVar1 = *(uint *)(_DAT_008a4780 + 1);
  uVar4 = (ulong)uVar1;
  piVar3 = piVar2 + uVar4 * 10;
  piVar5 = piVar2;
  if (uVar1 == 0) {
LAB__text__004c55a0:
    if (piVar5 != piVar3) {
      *param_4 = *(undefined8 *)(piVar5 + 6);
      *param_5 = piVar5[8];
      return;
    }
  }
  else {
    lVar6 = uVar4 * 0x28;
    do {
      if (((*piVar5 == param_1) && (piVar5[4] == param_3)) && (*(long *)(piVar5 + 2) == param_2))
      goto LAB__text__004c55a0;
      piVar5 = piVar5 + 10;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
  }
  if (param_2 != -1) {
    if (uVar1 == 0) {
LAB__text__004c5604:
      if (piVar2 != piVar3) {
        *param_4 = *(undefined8 *)(piVar2 + 6);
        *param_5 = piVar2[8];
        return;
      }
    }
    else {
      lVar6 = uVar4 * 0x28;
      do {
        if (((*piVar2 == param_1) && (piVar2[4] == param_3)) && (*(long *)(piVar2 + 2) == -1))
        goto LAB__text__004c5604;
        piVar2 = piVar2 + 10;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return;
}


