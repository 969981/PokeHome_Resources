/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5690; name: FUN_.text__006f5690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__006f5690(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (*(code *)*_DAT_008a7bb0)(*(undefined8 *)(param_1 + 8));
  if (uVar1 < 3) {
    return (ulong)*(uint *)((long)(int)uVar1 * 4 + 0x77f9b0);
  }
  uVar2 = nn::detail::UnexpectedDefaultImpl();
  return uVar2;
}


