/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cfa50; name: FUN_.text__005cfa50
 */


void FUN__text__005cfa50(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_11;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x178) != 0) {
    lVar1 = *(long *)(param_2 + 0x178);
  }
  lVar1 = FUN__text__005d04c4(&uStack_11,lVar1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_2 + 0x198) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x198) + 0x48) + 0x18))();
  }
  *(long *)(param_2 + 0x198) = lVar1;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))((long *)(lVar1 + 0x48));
  }
  return;
}


