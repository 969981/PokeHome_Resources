/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006311bc; name: FUN_.text__006311bc
 */


void FUN__text__006311bc(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  thunk_FUN__text__0060f320(*(undefined8 *)(param_1 + 0x2f0));
  if ((param_3 & 1) != 0) {
    FUN__text__00606e04(param_1 + 0x55);
    uVar1 = FUN__text__00614740(*(undefined8 *)(param_1 + 0x2f0));
    if (((uVar1 & 1) != 0) ||
       (uVar1 = FUN__text__0061b5a0(*(undefined8 *)(param_1 + 0x2f0)), (uVar1 & 1) != 0)) {
      FUN__text__00622760(*(undefined8 *)(param_1 + 0x2f0),0x6b);
      return;
    }
  }
  return;
}


