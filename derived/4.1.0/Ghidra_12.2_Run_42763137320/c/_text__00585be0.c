/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585be0; name: FUN_.text__00585be0
 */


undefined8 FUN__text__00585be0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN__text__00585d90(param_1 + 0x18,*(undefined4 *)(param_1 + 0x28));
  uVar1 = 1;
  if (iVar2 == -1) {
    uVar1 = 2;
  }
  return uVar1;
}


