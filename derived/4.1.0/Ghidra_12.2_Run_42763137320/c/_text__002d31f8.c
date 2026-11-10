/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d31f8; name: FUN_.text__002d31f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d31f8(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_0089f718;
  *(long *)(param_1 + 0x130) = _DAT_0089f718 + 0x10;
  if (*(long *)(param_1 + 0x138) == 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    pcVar3 = *(code **)(param_1 + 0x1c8);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x138),param_1 + 0x130);
    lVar1 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0x1c8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    (*pcVar3)(param_1 + 0x1e0);
  }
  pcVar3 = *(code **)(param_1 + 0x148);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*pcVar3)(param_1 + 0x160);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(long *)(param_1 + 0x20) = lVar2 + 0x10;
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    pcVar3 = *(code **)(param_1 + 0xb8);
  }
  else {
    FUN__text__005d9290();
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0xb8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (*pcVar3)(param_1 + 0xd0);
  }
  pcVar3 = *(code **)(param_1 + 0x38);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar3)(param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


