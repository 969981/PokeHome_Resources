/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425c90; name: FUN_.text__00425c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00425c90(undefined8 param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar2 = _DAT_008a47c0;
  *param_3 = 0;
  piVar3 = (int *)*puVar2;
  uVar1 = *(uint *)(puVar2 + 1);
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB__text__00425cf0:
    if (piVar4 == piVar3 + (ulong)uVar1 * 8) {
      return 0x58;
    }
    uVar6 = 1;
    if (*(code **)(piVar4 + 4) != (code *)0x0) {
      lVar5 = (**(code **)(piVar4 + 4))();
      *param_3 = lVar5;
      uVar6 = 1;
      if (lVar5 == 0) {
        uVar6 = 2;
      }
      return uVar6;
    }
  }
  else {
    lVar5 = (ulong)uVar1 << 5;
    uVar6 = 0x58;
    do {
      if (*piVar4 == param_2) goto LAB__text__00425cf0;
      piVar4 = piVar4 + 8;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  return uVar6;
}


