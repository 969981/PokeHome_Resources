/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ecd4c; name: FUN_.text__006ecd4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ecd4c(long param_1,long param_2)

{
  byte bVar1;
  
  (*(code *)*_DAT_008a6e68)(*(undefined8 *)(param_1 + 0xb0));
  (*(code *)*_DAT_008a6e70)
            (*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x20),
             *(undefined4 *)(param_2 + 0x24),*(undefined8 *)(param_1 + 0xb0));
  (*(code *)*_DAT_008a6e78)(*(undefined8 *)(param_1 + 0xb0),param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x2d);
  if ((bVar1 & 1) != 0) {
    (*(code *)*_DAT_008a6e80)(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 0x1c));
    bVar1 = *(byte *)(param_2 + 0x2d);
  }
  (*DAT_00c60cb0)(*(undefined8 *)(param_1 + 0xb0),(bVar1 >> 1 ^ 0xff) & 1);
  (*(code *)*_DAT_008a6e90)
            (*(undefined8 *)(param_1 + 0xb0),(*(byte *)(param_2 + 0x2d) >> 2 ^ 0xff) & 1);
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ece44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6e98)(*(undefined8 *)(param_1 + 0xb0),*(byte *)(param_2 + 0x2d) >> 3 & 1);
  return;
}


