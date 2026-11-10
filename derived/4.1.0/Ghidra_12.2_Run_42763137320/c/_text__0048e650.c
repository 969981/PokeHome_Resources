/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e650; name: FUN_.text__0048e650
 */


undefined4 FUN__text__0048e650(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (7 < *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  uVar1 = FUN__text__0048ed60(param_1,8 - *(uint *)(param_1 + 0xc));
  uVar2 = 0x34;
  if ((uVar1 & 1) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


