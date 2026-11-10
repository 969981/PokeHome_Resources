/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4bfc; name: FUN_.text__003c4bfc
 */


undefined8 FUN__text__003c4bfc(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__003e9e24(*(undefined8 *)(param_1 + 0xc0));
  if ((uVar1 & 1) == 0) {
    return 1;
  }
  uVar2 = FUN__text__003e9fb0(*(undefined8 *)(param_1 + 0xc0),param_2);
  return uVar2;
}


