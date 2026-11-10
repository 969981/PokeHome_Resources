/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006836c4; name: FUN_.text__006836c4
 */


void FUN__text__006836c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[6];
  puVar1 = param_1;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) goto LAB__text__00683750;
    lVar3 = puVar1[1];
    lVar2 = lVar2 + -1;
    puVar1[3] = lVar3;
    puVar1[4] = lVar3;
    puVar1[5] = lVar3;
    puVar1[3] = lVar3 + param_1[7];
    puVar1[4] = lVar3 + param_1[7];
  } while (lVar2 != 0);
  puVar4 = (undefined8 *)*puVar1;
  *puVar1 = 0;
  while (puVar4 != (undefined8 *)0x0) {
    uVar5 = param_1[2];
    puVar1 = (undefined8 *)*puVar4;
    FUN__text__006809e4(uVar5,puVar4[1]);
    puVar4[1] = 0;
    FUN__text__006809e4(uVar5,puVar4);
    puVar4 = puVar1;
  }
  param_1[5] = param_1[6];
LAB__text__00683750:
  param_1[1] = *param_1;
  return;
}


