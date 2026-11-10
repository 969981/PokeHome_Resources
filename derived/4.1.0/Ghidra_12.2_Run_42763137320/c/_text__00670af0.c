/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670af0; name: FUN_.text__00670af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00670af0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = _DAT_008a65a0;
  puVar3 = (undefined8 *)&DAT_0089a270;
  do {
    iVar1 = FUN__text__0066c234(*puVar2,param_1);
    if (iVar1 != 0) {
      return puVar2;
    }
    puVar2 = (undefined8 *)*puVar3;
    puVar3 = puVar3 + 1;
  } while (puVar2 != (undefined8 *)0x0);
  return (undefined8 *)0x0;
}


