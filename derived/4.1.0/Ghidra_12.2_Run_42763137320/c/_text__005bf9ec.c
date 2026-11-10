/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bf9ec; name: FUN_.text__005bf9ec
 */


void FUN__text__005bf9ec(long param_1,uint *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar4;
  long *plVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_b0 + 0x80;
  puVar8 = auStack_b0 + 0x80;
  lVar6 = *(long *)(param_1 + 0x7b8);
  uVar4 = (ulong)*param_2;
  if (uVar4 < (ulong)((*(long *)(param_1 + 0x7c0) - lVar6 >> 3) * -0x5555555555555555)) {
    puVar3 = (undefined4 *)(lVar6 + uVar4 * 0x18);
    *(undefined4 *)(param_1 + 0x640) = *puVar3;
    lVar7 = *(long *)(puVar3 + 2);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x648);
    *(long *)(param_1 + 0x648) = lVar7;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar6 = *(long *)(lVar6 + uVar4 * 0x18 + 0x10);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(param_1 + 0x650);
    *(long *)(param_1 + 0x650) = lVar6;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0x3f80000000000000;
    *(undefined8 *)(param_1 + 0x6c0) = 0x3f80000000000000;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    *(undefined8 *)(param_1 + 0x6b8) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x6b0) = 0x3f800000;
    puVar1 = (undefined1 *)register0x00000008;
    lVar7 = param_1;
    param_1 = unaff_x19;
    uVar4 = unaff_x20;
    lVar6 = unaff_x21;
    puVar8 = unaff_x29;
  }
  else {
    unaff_x30 = 0x5bfae4;
    lVar7 = FUN__text__005c1b24(param_1 + 0x7b8);
  }
  *(undefined1 **)(puVar1 + -0x30) = puVar8;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x30;
  *(long *)(puVar1 + -0x20) = lVar6;
  *(ulong *)(puVar1 + -0x10) = uVar4;
  *(long *)(puVar1 + -8) = param_1;
  if (((*(long **)(lVar7 + 8) != (long *)0x0) &&
      (uVar4 = (**(code **)(**(long **)(lVar7 + 8) + 0x58))(), (uVar4 & 1) == 0)) &&
     (*(int *)(lVar7 + 0x18) == 0)) {
    return;
  }
  lVar2 = *(long *)(lVar7 + 0x708);
  lVar6 = lVar7 + 0x20;
  if (lVar2 == *(long *)(lVar7 + 0x710)) {
    FUN__text__005c32b0(lVar7 + 0x700,lVar6);
    lVar2 = *(long *)(lVar7 + 0x790);
    if (lVar2 == *(long *)(lVar7 + 0x788)) goto LAB__text__005bfbe0;
  }
  else {
    FUN__text__005c3440(lVar7 + 0x718,lVar2,lVar6);
    *(long *)(lVar7 + 0x708) = lVar2 + 0x6e0;
    lVar2 = *(long *)(lVar7 + 0x790);
    if (lVar2 == *(long *)(lVar7 + 0x788)) {
LAB__text__005bfbe0:
      FUN__text__005bdde0(lVar6,*(undefined8 *)(lVar7 + 0x10));
      return;
    }
  }
  lVar6 = *(long *)(lVar2 + -8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar7 + 0x638);
  *(long *)(lVar7 + 0x638) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  plVar5 = (long *)(*(long *)(lVar7 + 0x790) + -8);
  if (*plVar5 != 0) {
    (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
    *plVar5 = 0;
  }
  *(long **)(lVar7 + 0x790) = plVar5;
  return;
}


