/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006536b8; name: FUN_.text__006536b8
 */


undefined8 FUN__text__006536b8(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = (param_2 & 0xf00000) - 0x100000 >> 0x14;
    if (uVar1 < 6) {
                    /* WARNING: Jumptable with 0 entries at 0x00653740 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK__text__00653744 + (ulong)*(byte *)((ulong)uVar1 + 0x760034) * 4))();
      return uVar2;
    }
  }
  return 0x30;
}


