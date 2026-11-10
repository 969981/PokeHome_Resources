/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f9cf0; name: FUN_.text__005f9cf0
 */


void FUN__text__005f9cf0(long param_1)

{
  long lVar1;
  
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x184));
  lVar1 = *(long *)(param_1 + 0x150);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x158) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x168) + 0x18))
              (*(long **)(param_1 + 0x168),lVar1,*(long *)(param_1 + 0x160) - lVar1,4);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN__text__00147b00(param_1);
  return;
}


