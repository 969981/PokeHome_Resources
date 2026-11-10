/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056d0b0; name: FUN_.text__0056d0b0
 */


undefined8
FUN__text__0056d0b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  lVar2 = FUN__text__0056e62c(param_2);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    return 2;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar2 + 0x2c);
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  if ((*(int *)(lVar2 + 0x24) == 1) &&
     (lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(), lVar2 != 0)) {
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x68))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20);
  *(bool *)(param_1 + 0x81) = (param_5[1] & 0xf00) == 0x300;
  FUN__text__0056e0c0(*(undefined8 *)(param_1 + 0x28),param_1);
  return 1;
}


