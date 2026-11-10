/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028f1c0; name: FUN_.text__0028f1c0
 */


undefined4 FUN__text__0028f1c0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN__text__0027abf0(*(undefined8 *)(param_1 + 0x640));
  uVar2 = 2;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


