/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6dec; name: FUN_.text__006c6dec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c6dec(long *param_1,long param_2)

{
  undefined1 uVar1;
  
  FUN__text__006b19e8();
  *param_1 = _DAT_008a6ac8 + 0x10;
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0xdd) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = uVar1;
  *(byte *)((long)param_1 + 0xdd) = (*(byte *)(param_2 + 0x5d) & 1) << 1 | 1;
  return;
}


