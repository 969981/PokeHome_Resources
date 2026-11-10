/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec100; name: FUN_.text__006ec100
 */


ulong FUN__text__006ec100(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 != 2) {
    if (param_1 != 1) {
      uVar2 = nn::detail::UnexpectedDefaultImpl();
      return uVar2;
    }
    uVar3 = 4;
    if ((param_2 & 1) == 0) {
      uVar3 = 0;
    }
    return (ulong)uVar3;
  }
  bVar1 = (param_3 & 1) == 0;
  uVar3 = 6;
  if (bVar1) {
    uVar3 = 1;
  }
  uVar4 = 7;
  if (bVar1) {
    uVar4 = 5;
  }
  if ((param_2 & 1) != 0) {
    uVar3 = uVar4;
  }
  return (ulong)uVar3;
}


