/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd8c8; name: FUN_.text__002fd8c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002fd8c8(void)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long local_28;
  undefined8 local_8;
  
  uVar1 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_40,_DAT_008a2688);
  uVar1 = FUN__text__002f95a0(uVar1,auStack_40);
  if ((code *)*_DAT_008a2918 == (code *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = (*(code *)*_DAT_008a2918)(_DAT_008a2918 + 4);
  }
  FUN__text__002fda00(uVar1,0x733a98,&local_8);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


