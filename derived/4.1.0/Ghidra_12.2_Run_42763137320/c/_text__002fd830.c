/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd830; name: FUN_.text__002fd830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002fd830(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar3 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_40,_DAT_008a2688);
  lVar1 = FUN__text__002f95a0(uVar3,auStack_40);
  auVar4 = FUN__text__002f1260(lVar1,0x733a98);
  if (((auVar4._0_8_ & 0xff) == 0) && (plVar2 = *(long **)(lVar1 + 0x58), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x50))(plVar2,0x733a98);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return auVar4._8_8_;
}


