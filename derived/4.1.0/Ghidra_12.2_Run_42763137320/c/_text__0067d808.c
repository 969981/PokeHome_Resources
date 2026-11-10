/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d808; name: FUN_.text__0067d808
 */


/* WARNING: Removing unreachable block (ram,0x0067edb8) */

long FUN__text__0067d808(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN__text__0067b14c();
  if (iVar1 < -900) {
    param_3 = (long)iVar1;
  }
  else {
    iVar1 = FUN__text__0067f104(param_1);
    if (iVar1 != 0) {
      do {
        if (*(uint *)(param_1 + 0x280) < 0x13) {
                    /* WARNING: Could not emulate address calculation at 0x0067d8b0 */
                    /* WARNING: Treating indirect jump as call */
          lVar2 = (*(code *)(&UNK__text__0067d8bc +
                            (ulong)*(ushort *)((ulong)*(uint *)(param_1 + 0x280) * 2 + 0x7618dc) * 4
                            ))();
          return lVar2;
        }
      } while (param_2 != param_2 + param_3);
    }
  }
  return param_3;
}


