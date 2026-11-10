/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8cc0; name: FUN_.text__004d8cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN__text__004d8cc0(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_58;
  long local_50;
  int local_48;
  
  puVar1 = _DAT_008a4630;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN__text__004aa040(*_DAT_008a4630,param_3,&local_58);
  if (local_50 == 0) {
    return (int *)0x0;
  }
  piVar4 = (int *)*param_1;
  uVar6 = *(uint *)(param_1 + 1);
  piVar3 = piVar4;
  if (uVar6 == 0) {
LAB__text__004d8d40:
    if (piVar3 != piVar4 + (ulong)uVar6 * 8) {
      piVar3 = piVar3 + 2;
      goto LAB__text__004d8dac;
    }
  }
  else {
    lVar5 = (ulong)uVar6 << 5;
    do {
      if (*piVar3 == param_2) goto LAB__text__004d8d40;
      piVar3 = piVar3 + 8;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
    uVar2 = FUN__text__004d97d0(param_1);
    if (((uVar2 & 1) == 0) || (*(uint *)((long)param_1 + 0xc) <= uVar6)) goto LAB__text__004d8dd8;
    uVar6 = *(uint *)(param_1 + 1);
    piVar4 = (int *)*param_1;
  }
  *(uint *)(param_1 + 1) = uVar6 + 1;
  if (piVar4 != (int *)0x0) {
    piVar4 = piVar4 + (ulong)uVar6 * 8;
    piVar4[6] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    *piVar4 = param_2;
    piVar3 = piVar4 + 2;
    piVar3[0] = 0;
    piVar3[1] = 0;
LAB__text__004d8dac:
    *(long *)(piVar3 + 2) = local_50;
    *(undefined8 *)piVar3 = local_58;
    piVar3[4] = local_48;
    piVar3[5] = param_3;
    return piVar3;
  }
LAB__text__004d8dd8:
  FUN__text__004aa280(*puVar1,param_3,&local_58);
  return (int *)0x0;
}


