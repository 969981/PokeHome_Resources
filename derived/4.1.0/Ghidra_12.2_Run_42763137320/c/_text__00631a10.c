/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631a10; name: FUN_.text__00631a10
 */


void FUN__text__00631a10(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN__text__00622070(*(undefined8 *)(param_1 + 0x2f0),param_2);
  FUN__text__006316f4(param_1,1);
  return;
}


