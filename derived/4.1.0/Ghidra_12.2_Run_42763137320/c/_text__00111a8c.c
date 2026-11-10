/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00111a8c; name: FUN_.text__00111a8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00111a8c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x728) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x728) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x728) = 0;
  }
  *(undefined8 *)(param_1 + 0x610) = 0x867958;
  if (*(long *)(param_1 + 0x618) == 0) {
    *(undefined8 *)(param_1 + 0x618) = 0;
    pcVar2 = *(code **)(param_1 + 0x6a8);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x618),param_1 + 0x610);
    lVar1 = *(long *)(param_1 + 0x618);
    *(undefined8 *)(param_1 + 0x618) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0x6a8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x6b8) = 0;
    *(undefined8 *)(param_1 + 0x6b0) = 0;
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    (*pcVar2)(param_1 + 0x6c0);
  }
  pcVar2 = *(code **)(param_1 + 0x628);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x638) = 0;
    *(undefined8 *)(param_1 + 0x630) = 0;
    *(undefined8 *)(param_1 + 0x628) = 0;
    *(undefined8 *)(param_1 + 0x620) = 0;
    (*pcVar2)(param_1 + 0x640);
  }
  if (*(long *)(param_1 + 0x618) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x618) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x618) = 0;
  }
  *(undefined8 *)(param_1 + 0x500) = 0x867958;
  if (*(long *)(param_1 + 0x508) == 0) {
    *(undefined8 *)(param_1 + 0x508) = 0;
    pcVar2 = *(code **)(param_1 + 0x598);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x508),param_1 + 0x500);
    lVar1 = *(long *)(param_1 + 0x508);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0x598);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x598) = 0;
    *(undefined8 *)(param_1 + 0x590) = 0;
    (*pcVar2)(param_1 + 0x5b0);
  }
  pcVar2 = *(code **)(param_1 + 0x518);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    (*pcVar2)(param_1 + 0x530);
  }
  if (*(long *)(param_1 + 0x508) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x508) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x508) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(**(long **)(param_1 + 0x4e0) + 0x18))
              (*(long **)(param_1 + 0x4e0),puVar3,*(undefined8 *)(param_1 + 0x4e8),
               *(undefined8 *)(param_1 + 0x4f0));
  }
  if (*(long *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  if (*(long *)(param_1 + 0x2e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0x867958;
  if (*(long *)(param_1 + 0x1c8) == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    pcVar2 = *(code **)(param_1 + 600);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x1c8),param_1 + 0x1c0);
    lVar1 = *(long *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 600);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    (*pcVar2)(param_1 + 0x270);
  }
  pcVar2 = *(code **)(param_1 + 0x1d8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    (*pcVar2)(param_1 + 0x1f0);
  }
  if (*(long *)(param_1 + 0x1c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  *(long *)(param_1 + 0x90) = _DAT_0089f820 + 0x10;
  if (*(long *)(param_1 + 0x98) == 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    pcVar2 = *(code **)(param_1 + 0x128);
  }
  else {
    FUN__text__005d9290();
    lVar1 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0x128);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    (*pcVar2)(param_1 + 0x140);
  }
  pcVar2 = *(code **)(param_1 + 0xa8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*pcVar2)(param_1 + 0xc0);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


