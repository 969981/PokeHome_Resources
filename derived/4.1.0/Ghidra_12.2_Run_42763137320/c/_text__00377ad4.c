/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00377ad4; name: FUN_.text__00377ad4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00377ad4(long param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  void *pvStack_30;
  undefined4 local_28;
  undefined4 local_24;
  
  memset((void *)(param_1 + 0x60),0,0x400);
  local_24 = 0;
  uVar1 = FUN__text__00371260(*_DAT_0089f448,&local_24);
  local_28 = 0x9751babe;
  local_38 = 0x400;
  pvStack_30 = (void *)(param_1 + 0x60);
  FUN__text__00377b50(uVar1,&local_28,&pvStack_30,&local_38);
  return;
}


