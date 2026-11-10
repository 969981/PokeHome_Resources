/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3eb8; name: FUN_.text__001a3eb8
 */


undefined4 FUN__text__001a3eb8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = FUN__text__003c7a60(lVar1,param_1 + 0x88);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return uVar2;
}


