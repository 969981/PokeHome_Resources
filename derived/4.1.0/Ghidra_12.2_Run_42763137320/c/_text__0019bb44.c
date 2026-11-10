/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019bb44; name: FUN_.text__0019bb44
 */


void FUN__text__0019bb44(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x60) + 0xf8);
  if (uVar1 == 0) {
    param_2 = 0;
  }
  else if (uVar1 <= param_2) {
    return;
  }
  *(uint *)(*(long *)(param_1 + 0x60) + 0x6c) = param_2;
  return;
}


