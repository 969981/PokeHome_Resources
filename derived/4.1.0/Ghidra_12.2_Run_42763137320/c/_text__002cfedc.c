/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cfedc; name: FUN_.text__002cfedc
 */


void FUN__text__002cfedc(long param_1)

{
  long lVar1;
  undefined8 local_30;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  FUN__text__002d0290(&local_30,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x80) = local_30;
  lVar1 = FUN__text__002d2528(&uStack_23,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x88) = lVar1;
  lVar1 = FUN__text__002d2624(&uStack_22,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xa0) = lVar1;
  lVar1 = FUN__text__002d2740(&uStack_21,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x90) = lVar1;
  return;
}


