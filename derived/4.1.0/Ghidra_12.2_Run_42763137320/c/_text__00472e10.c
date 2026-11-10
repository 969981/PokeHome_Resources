/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472e10; name: FUN_.text__00472e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00472e10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  *_DAT_008a48e0 = 0;
  DAT_00aea828 = (undefined8 *)FUN__text__00400f80(5,0x3000);
  if (DAT_00aea828 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar3 = 0;
  DAT_00aea830 = 0x200;
  puVar2 = DAT_00aea828;
  DAT_00aea820 = DAT_00aea828;
  do {
    puVar1 = puVar2;
    *puVar1 = puVar1 + 3;
    uVar3 = uVar3 + 1;
    puVar2 = puVar1 + 3;
  } while (uVar3 < DAT_00aea830);
  *puVar1 = 0;
  return 1;
}


