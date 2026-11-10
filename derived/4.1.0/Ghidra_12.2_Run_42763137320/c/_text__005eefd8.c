/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eefd8; name: FUN_.text__005eefd8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005eefd8(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  FUN__text__005e927c(auStack_50,0x897f90);
  FUN__text__005a2540(param_1,auStack_50,2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  param_1[0x4b] = 0;
  uVar1 = tpidr_el0;
  param_1[0x4c] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *param_1 = 0x897e98;
  param_1[9] = 0x897f38;
  param_1[10] = 0x897f78;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar4 == 0)) {
    uVar3 = FUN__text__005f52b0();
    param_1[0x52] = 0;
    param_1[0x51] = uVar3;
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x54] = 0;
    if (uVar1 != 0) goto LAB__text__005ef0ac;
  }
  else {
    param_1[0x51] = lVar4;
    param_1[0x52] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x54] = 0;
LAB__text__005ef0ac:
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar4 != 0))
    goto LAB__text__005ef0c4;
  }
  lVar4 = FUN__text__005f52b0();
LAB__text__005ef0c4:
  param_1[0x55] = lVar4;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f800000;
  plVar2 = _DAT_0089f5b8;
  *(undefined4 *)(param_1 + 0x35) = 0x7fffffff;
  lVar4 = *(long *)(*plVar2 + 0x168);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
  }
  lVar5 = *plVar2;
  param_1[0x16] = lVar4;
  lVar4 = *(long *)(*(long *)(lVar5 + 0x168) + 0xa8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
  }
  param_1[0x26] = lVar4;
  return;
}


