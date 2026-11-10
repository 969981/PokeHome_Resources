/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446bd0; name: FUN_.text__00446bd0
 */


void FUN__text__00446bd0(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = *(long **)(lVar1 + 0x48);
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = plVar2[2];
      local_38 = 0x400000000;
      *(undefined4 *)(lVar1 + 0x330) = param_2;
      FUN__text__0047469c(lVar1,&local_38,0);
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  for (plVar2 = *(long **)(lVar1 + 0x70); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN__text__004b6e90(DAT_00ae9a40,plVar2[2]);
  }
  return;
}


