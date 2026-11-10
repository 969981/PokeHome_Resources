/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00321c50; name: FUN_.text__00321c50
 */


undefined * FUN__text__00321c50(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN__text__00304b90();
  if (param_1 == 0) {
    return (undefined *)(lVar2 + 0x941d62);
  }
  uVar1 = 0;
  if (param_1 - 1U < 300) {
    uVar1 = param_1 - 1U;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (&DAT_00941d60)[(ulong)uVar1 * 0x8c + lVar2 + 1];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_00941d60 + (ulong)uVar1 * 0x8c + lVar2 + 0x84);
  }
  return &DAT_00941d60 + (ulong)uVar1 * 0x8c + lVar2 + 2;
}


