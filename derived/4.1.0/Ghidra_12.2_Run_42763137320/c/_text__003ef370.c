/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ef370; name: FUN_.text__003ef370
 */


void FUN__text__003ef370(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  FUN__text__003f2d34(*(undefined8 *)(param_1 + 0x1f0),-(ulong)(*(long *)(param_1 + 0x68) == 0));
  FUN__text__003f2ca4(*(undefined8 *)(param_1 + 0x1f0),-(ulong)(*(long *)(param_1 + 0x60) == 0));
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    while (plVar6[4] != 0) {
      plVar5 = (long *)(plVar6[4] + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN__text__003f2d34(*(undefined8 *)(param_1 + 0x1f0),0);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB__text__003ef460;
    }
    FUN__text__003f2d34(*(undefined8 *)(param_1 + 0x1f0),0);
  }
LAB__text__003ef460:
  if (*(long *)(param_1 + 0x1b8) != 0) {
    plVar6 = (long *)*(long *)(param_1 + 0x198);
    while (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if (plVar6[4] != 0) {
        (**(code **)(*(long *)(plVar6[4] + 0x48) + 0x18))();
        plVar6[4] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x1a0) + 0x18))
                (*(long **)(param_1 + 0x1a0),plVar6,0x60,0x10);
      plVar6 = (long *)lVar3;
    }
    uVar4 = *(ulong *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x198) = 0;
    if (uVar4 != 0) {
      uVar1 = uVar4 & 3;
      if (uVar4 < 4) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          lVar3 = uVar2 * 8;
          uVar2 = uVar2 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x170) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x170) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x170) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x170) + lVar3 + 0x18) = 0;
        } while ((uVar4 & 0xfffffffffffffffc) != uVar2);
      }
      if (uVar1 != 0) {
        lVar3 = uVar2 << 3;
        do {
          uVar1 = uVar1 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x170) + lVar3) = 0;
          lVar3 = lVar3 + 8;
        } while (uVar1 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  return;
}


