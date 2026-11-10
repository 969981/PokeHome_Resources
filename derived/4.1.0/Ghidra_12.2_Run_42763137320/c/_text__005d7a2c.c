/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d7a2c; name: FUN_.text__005d7a2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d7a2c(long param_1)

{
  long lVar1;
  
  FUN__text__006f4e04(param_1 + 0x58,_DAT_008a0448);
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar1,*(undefined8 *)(param_1 + 0x88),
               *(undefined8 *)(param_1 + 0x90));
  }
  FUN__text__006f4a80(param_1 + 0x58);
  FUN__text__005b5108(param_1);
  return;
}


