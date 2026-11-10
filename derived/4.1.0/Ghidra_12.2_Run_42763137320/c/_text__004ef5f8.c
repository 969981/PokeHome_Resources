/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ef5f8; name: FUN_.text__004ef5f8
 */


undefined8 FUN__text__004ef5f8(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN__text__0042e870(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x80) == 0) ||
     (uVar1 = FUN__text__00460fc0(*(long *)(param_1 + 0x80),param_2,param_3), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


