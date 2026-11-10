/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446af0; name: FUN_.text__00446af0
 */


void FUN__text__00446af0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_18;
  
  for (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x48); plVar2 != (long *)0x0;
      plVar2 = (long *)*plVar2) {
    lVar1 = plVar2[2];
    local_18 = 0x400000000;
    *(undefined4 *)(lVar1 + 0x380) = 0xffffffff;
    FUN__text__00474488(lVar1,&local_18,1);
  }
  return;
}


