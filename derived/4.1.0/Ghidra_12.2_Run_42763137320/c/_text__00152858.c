/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00152858; name: FUN_.text__00152858
 */


void FUN__text__00152858(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                        long *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  *param_1 = param_2;
  param_1[2] = 0;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  lVar1 = FUN__text__0014d020(&uStack_52,param_3,0x70ad0f);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
  }
  *plVar3 = lVar1;
  lVar4 = *(long *)(DAT_008e1680 + 0x168);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
  }
  lVar2 = DAT_008e1680;
  *(long *)(lVar1 + 0xb0) = lVar4;
  lVar1 = *plVar3;
  lVar4 = *(long *)(*(long *)(lVar2 + 0x168) + 0xa8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x130) = lVar4;
  *(undefined1 *)(param_1[1] + 0xb8) = 1;
  *(undefined1 *)(param_1[1] + 0x1ac) = 1;
  FUN__text__005c5e00(*param_1,param_1[1]);
  lVar1 = FUN__text__0014d020(&uStack_51,param_3,0x7172b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
  }
  param_1[2] = lVar1;
  lVar4 = *param_4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xb0) = lVar4;
  lVar4 = param_1[2];
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar4 + 0x130) = lVar1;
  *(undefined1 *)(param_1[2] + 0xb8) = 1;
  *(undefined1 *)(param_1[2] + 0x1ac) = 1;
  FUN__text__005c5e00(*param_1,param_1[2]);
  *(undefined4 *)(param_1[1] + 0x1a8) = 0;
  *(undefined4 *)(param_1[2] + 0x1a8) = 1;
  return;
}


