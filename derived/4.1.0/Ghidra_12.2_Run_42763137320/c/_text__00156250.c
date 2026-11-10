/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156250; name: FUN_.text__00156250
 */


uint FUN__text__00156250(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar2 = 0;
  puVar3 = param_2;
  do {
    puVar3 = puVar3 + 1;
    uVar1 = FUN__text__00156580((long)puVar3 + (ulong)*puVar3,param_1);
    if ((uVar1 & 1) == 0) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < *param_2);
  return uVar1 & 1;
}


