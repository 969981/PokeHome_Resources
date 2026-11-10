/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196220; name: FUN_.text__00196220
 */


undefined8 FUN__text__00196220(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x40) + 0x10);
    do {
      if (*(int *)(*plVar3 + 0xc) == 1) {
        return *(undefined8 *)(*plVar3 + 0x30);
      }
      plVar3 = plVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}


