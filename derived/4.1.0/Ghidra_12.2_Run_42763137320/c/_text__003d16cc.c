/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d16cc; name: FUN_.text__003d16cc
 */


void FUN__text__003d16cc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x280) != -1) {
    lVar1 = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0xffffffffffffffff;
    if (lVar1 != 0) {
      FUN__text__0014821c(lVar1);
      (**(code **)(**(long **)(param_1 + 0x260) + 0x18))
                (*(long **)(param_1 + 0x260),lVar1,*(undefined8 *)(param_1 + 0x268),
                 *(undefined8 *)(param_1 + 0x270));
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN__text__005d9290(*(long *)(param_1 + 0x18),param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined1 *)(param_1 + 0x120) = 0;
  if (*(long *)(param_1 + 0x138) != 0) {
    FUN__text__005d9290(*(long *)(param_1 + 0x138),param_1 + 0x130);
    lVar1 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x248);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


