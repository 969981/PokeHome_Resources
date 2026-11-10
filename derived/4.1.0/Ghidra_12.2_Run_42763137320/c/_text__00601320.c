/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601320; name: FUN_.text__00601320
 */


undefined8 FUN__text__00601320(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((0x403 < (int)param_2) || (param_3 - 0xc < 0xfffffff5)) {
    return 0;
  }
  uVar1 = 0;
  if ((param_2 & 0xfffffffe) != 0x402 && (int)param_2 < 0x402) {
    uVar1 = param_2;
  }
  uVar2 = FUN__text__005f29c0((&DAT_00c15d20)[param_3],uVar1,param_1);
  return uVar2;
}


