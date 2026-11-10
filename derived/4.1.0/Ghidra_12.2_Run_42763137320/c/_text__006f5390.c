/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5390; name: FUN_.text__006f5390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5390(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  (*(code *)*_DAT_008a7240)(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  if ('\0' < *(char *)(param_1 + 0x192)) {
    lVar3 = 0;
    lVar1 = param_1 + 0x4f8;
    lVar2 = param_1 + 0x198;
    do {
      FUN__text__006f5a34(lVar2,param_2);
      FUN__text__006f5cc0(lVar1,param_2);
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + 0x48;
      lVar2 = lVar2 + 0xd8;
    } while (lVar3 < *(char *)(param_1 + 0x192));
  }
  *(undefined1 *)(param_1 + 400) = 0;
  return;
}


