/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f3ea4; name: FUN_.text__006f3ea4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f3ea4(undefined1 *param_1)

{
  long lVar1;
  
  (*(code *)*_DAT_008a7298)(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x100) != 0) {
      (*(code *)*_DAT_008a7030)(lVar1);
      free(*(void **)(lVar1 + 0x100));
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0;
    }
    if (*(void **)(lVar1 + 0x110) != (void *)0x0) {
      free(*(void **)(lVar1 + 0x110));
      *(undefined8 *)(lVar1 + 0x110) = 0;
    }
    *(undefined8 *)(lVar1 + 0x188) = 0;
    free(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *param_1 = 0;
  return;
}


