/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020d9a0; name: FUN_.text__0020d9a0
 */


int FUN__text__0020d9a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN__text__003a85a0(*(undefined8 *)(param_1 + 0x6d8));
  return (int)uVar1 + (int)((ulong)uVar1 >> 0x20) * 6;
}


