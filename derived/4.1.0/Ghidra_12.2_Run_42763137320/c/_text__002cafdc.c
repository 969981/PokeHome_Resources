/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cafdc; name: FUN_.text__002cafdc
 */


void FUN__text__002cafdc(undefined8 param_1)

{
  long lVar1;
  undefined8 local_28;
  
  lVar1 = FUN__text__002cb0e8();
  if (lVar1 != 0) {
    FUN__text__002cb21c(&local_28,param_1);
    if (*(long *)(lVar1 + 0x50) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar1 + 0x50) = local_28;
    FUN__text__002cb21c(&local_28,param_1);
    if (*(long *)(lVar1 + 0x58) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x58) + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar1 + 0x58) = local_28;
    FUN__text__002cb21c(&local_28,param_1);
    if (*(long *)(lVar1 + 0x60) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x60) + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar1 + 0x60) = local_28;
    FUN__text__002cb21c(&local_28,param_1);
    if (*(long *)(lVar1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x68) + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar1 + 0x68) = local_28;
    FUN__text__002cb21c(&local_28,param_1);
    if (*(long *)(lVar1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x70) + 0x48) + 0x18))();
    }
    *(undefined1 *)(lVar1 + 0x230) = 0;
    *(undefined8 *)(lVar1 + 0x70) = local_28;
    FUN__text__002cb320(lVar1);
    FUN__text__002cb550(lVar1);
  }
  return;
}


