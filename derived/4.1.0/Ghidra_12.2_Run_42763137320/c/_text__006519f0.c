/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006519f0; name: FUN_.text__006519f0
 */


void FUN__text__006519f0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf58);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN__text__00667a44(param_1,2,2);
  do {
    lVar1 = FUN__text__00651a90(param_1,*puVar2,*(undefined8 *)(param_1 + 0xf70),
                                *(ulong *)(param_1 + 0xf40) >> 5 & 1);
    if (lVar1 == 0) {
      FUN__text__00666f74(param_1,0x71d2c3,*puVar2);
    }
    else {
      *(long *)(param_1 + 0xf70) = lVar1;
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
  FUN__text__0066bd88(*(undefined8 *)(param_1 + 0xf58));
  *(undefined8 *)(param_1 + 0xf58) = 0;
  FUN__text__00667a8c(param_1,2);
  return;
}


