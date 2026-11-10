/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00494af0; name: FUN_.text__00494af0
 */


long * FUN__text__00494af0(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN__text__004b8b20(0x503,param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(plVar1 + 0x1d) = *(undefined4 *)(param_1 + 0x20);
    FUN__text__004b91b0(plVar1,param_2 + 0x38);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
    FUN__text__004b9200(plVar1,*(undefined8 *)(param_2 + 8));
    FUN__text__004ba7b0(plVar1,*(byte *)(param_2 + 0x310) >> 2 & 1);
    FUN__text__004b936c(plVar1,*(undefined4 *)(param_2 + 0x90));
    FUN__text__004b9354(plVar1,*(byte *)(param_2 + 0x310) >> 1 & 1);
    FUN__text__004b91ec(plVar1,*(undefined4 *)(param_2 + 0x80));
    if (*(long **)(param_2 + 0x18) != (long *)0x0) {
      plVar1[0x1f] = **(long **)(param_2 + 0x18);
    }
  }
  return plVar1;
}


