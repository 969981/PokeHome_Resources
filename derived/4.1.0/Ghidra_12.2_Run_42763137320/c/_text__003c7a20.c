/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7a20; name: FUN_.text__003c7a20
 */


undefined4 FUN__text__003c7a20(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar2 = *plVar1;
    while (lVar2 != *param_2) {
      plVar1 = plVar1 + 2;
      lVar2 = *plVar1;
    }
  }
  return *(undefined4 *)(plVar1[1] + 0x30);
}


