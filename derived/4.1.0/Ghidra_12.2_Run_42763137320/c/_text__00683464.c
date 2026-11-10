/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683464; name: FUN_.text__00683464
 */


void FUN__text__00683464(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      uVar3 = param_1[2];
      puVar1 = (undefined8 *)*puVar2;
      FUN__text__006809e4(uVar3,puVar2[1]);
      puVar2[1] = 0;
      FUN__text__006809e4(uVar3,puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}


