/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d1ef4; name: FUN_.text__005d1ef4
 */


void FUN__text__005d1ef4(long param_1)

{
  if (*(long *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x2d0));
  FUN__text__005d2080(param_1 + 0x210);
  FUN__text__0014eae0(param_1);
  return;
}


