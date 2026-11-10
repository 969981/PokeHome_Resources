/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680914; name: FUN_.text__00680914
 */


void FUN__text__00680914(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = param_2 >> 0x14 ^ param_2 >> 0xc ^ param_2;
  plVar2 = (long *)(*param_1 + (ulong)((int)param_1[3] - 1U & (uVar1 >> 7 ^ uVar1 >> 4 ^ uVar1)) * 8
                   );
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
  } while (*(uint *)(plVar2 + 1) != param_2);
  return;
}


