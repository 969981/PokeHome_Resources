/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bd88; name: FUN_.text__0066bd88
 */


void FUN__text__0066bd88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      puVar1 = (undefined8 *)param_1[1];
      FUN__text__006783e4(*param_1);
      *param_1 = 0;
      FUN__text__006783e4(param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


