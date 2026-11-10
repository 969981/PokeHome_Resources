/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00292514; name: FUN_.text__00292514
 */


void FUN__text__00292514(long param_1)

{
  long *plVar1;
  undefined8 local_8;
  
  FUN__text__00291050();
  local_8 = 0xc35056d0249a792;
  plVar1 = (long *)FUN__text__0012cdb0(param_1 + 0x110,&local_8);
  (**(code **)(*plVar1 + 0x50))();
  if (*(long *)(param_1 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


