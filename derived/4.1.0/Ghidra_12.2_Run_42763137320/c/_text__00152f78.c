/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00152f78; name: FUN_.text__00152f78
 */


void FUN__text__00152f78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    if (*(long *)(lVar1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
              (*(long **)(param_1 + 0x140),lVar1,*(undefined8 *)(param_1 + 0x148),
               *(undefined8 *)(param_1 + 0x150));
  }
  FUN__text__00147b00(param_1);
  return;
}


