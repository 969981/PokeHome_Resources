/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065ab68; name: FUN_.text__0065ab68
 */


undefined8 FUN__text__0065ab68(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 - 3U < 0xe) {
    **(long **)(param_1 + 0x10) = param_1;
    iVar2 = *(int *)(param_1 + 0x60);
  }
  if (iVar2 - 3U < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x0065aba8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0065abb4 + (ulong)*(byte *)((ulong)(iVar2 - 3U) + 0x760240) * 4))
                      (0);
    return uVar1;
  }
  return 0;
}


