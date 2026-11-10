/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066e2cc; name: FUN_.text__0066e2cc
 */


undefined8 FUN__text__0066e2cc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffffd;
  FUN__text__00661c90();
  if (((*(byte *)(param_1 + 0x3fe) & 1) == 0) ||
     (uVar1 = FUN__text__0066cc28(param_1), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


