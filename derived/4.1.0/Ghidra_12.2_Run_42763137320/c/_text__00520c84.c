/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520c84; name: FUN_.text__00520c84
 */


uint FUN__text__00520c84(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  do {
    uVar1 = FUN__text__00524250(*puVar2);
    if ((uVar1 & 1) != 0) break;
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)
                     (*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
  return uVar1 & 1;
}


