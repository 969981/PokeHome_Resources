/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00109a80; name: FUN_.text__00109a80
 */


void FUN__text__00109a80(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x80);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(*(long **)(param_1 + 0x88),plVar1,0x20,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar2,*(long *)(param_1 + 0x60) << 3,8);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x50));
  return;
}


