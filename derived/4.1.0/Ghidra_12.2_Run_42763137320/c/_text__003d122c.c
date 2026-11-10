/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d122c; name: FUN_.text__003d122c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d122c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  FUN__text__003d16cc();
  lVar2 = *(long *)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (lVar2 != 0) {
    FUN__text__0014821c(lVar2);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x18))
              (*(long **)(param_1 + 0x260),lVar2,*(undefined8 *)(param_1 + 0x268),
               *(undefined8 *)(param_1 + 0x270));
  }
  *(undefined8 *)(param_1 + 0x240) = 0x86a4f0;
  if (*(long *)(param_1 + 0x248) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  *(undefined8 *)(param_1 + 0x130) = 0x867958;
  if (*(long *)(param_1 + 0x138) == 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    pcVar1 = *(code **)(param_1 + 0x1c8);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x138),param_1 + 0x130);
    lVar2 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar1 = *(code **)(param_1 + 0x1c8);
  }
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    (*pcVar1)(param_1 + 0x1e0);
  }
  pcVar1 = *(code **)(param_1 + 0x148);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*pcVar1)(param_1 + 0x160);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(long *)(param_1 + 0x10) = _DAT_0089f4b0 + 0x10;
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    pcVar1 = *(code **)(param_1 + 0xa8);
  }
  else {
    FUN__text__005d9290();
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar1 = *(code **)(param_1 + 0xa8);
  }
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*pcVar1)(param_1 + 0xc0);
  }
  pcVar1 = *(code **)(param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    (*pcVar1)(param_1 + 0x40);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


