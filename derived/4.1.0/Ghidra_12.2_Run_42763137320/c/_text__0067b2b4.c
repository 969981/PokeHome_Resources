/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067b2b4; name: FUN_.text__0067b2b4
 */


long FUN__text__0067b2b4(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN__text__0067b14c();
  if (iVar1 < -900) {
    return (long)iVar1;
  }
  do {
  } while (3 < *(uint *)(param_1 + 0x198));
                    /* WARNING: Could not emulate address calculation at 0x0067b324 */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*(code *)(&UNK__text__0067b330 +
                    (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x198) + 0x7618b2) * 4))();
  return lVar2;
}


