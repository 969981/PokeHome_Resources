/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446b50; name: FUN_.text__00446b50
 */


void FUN__text__00446b50(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_18;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = *(long **)(lVar1 + 0x48);
  if (plVar2 != (long *)0x0) {
    do {
      local_18 = 0x400000000;
      FUN__text__004745b0(plVar2[2],&local_18);
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  for (plVar2 = *(long **)(lVar1 + 0x70); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN__text__004b5f60(DAT_00ae9a40,plVar2[2]);
  }
  return;
}


