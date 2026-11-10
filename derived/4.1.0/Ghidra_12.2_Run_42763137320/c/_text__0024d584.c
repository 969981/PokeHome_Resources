/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024d584; name: FUN_.text__0024d584
 */


undefined8 FUN__text__0024d584(long param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0xa60) != 0) {
    local_40 = 0x753f74378b49da9c;
    uStack_38 = 0x7167d4;
    local_30 = 8;
    local_28 = 0;
    lVar1 = FUN__text__0024e9c0(*(undefined8 *)(param_1 + 0x5c8),&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN__text__0019bb44(*(undefined8 *)(param_1 + 0xa60),*(undefined4 *)(lVar1 + 0x6ec));
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  FUN__text__002055c0();
  return 1;
}


