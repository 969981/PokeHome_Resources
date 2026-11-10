/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ddbe4; name: FUN_.text__004ddbe4
 */


void FUN__text__004ddbe4(long *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                        undefined4 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    *(undefined2 *)((long)param_6 + 0x12) = 0;
    *(undefined4 *)((long)param_6 + 0x2c) = 0x2e;
    return;
  }
  *param_6 = param_2;
  *(ushort *)(param_6 + 2) = param_3;
  *(ushort *)((long)param_6 + 0x12) = param_3;
  *(undefined4 *)(param_6 + 1) = param_5;
  lVar3 = param_1[3];
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x2a8) != 0)) {
    FUN__text__004af390(param_1 + 8,*(long *)(lVar3 + 0x2a8) + 0x100,lVar3,param_6,(int)param_1[5],
                        (uint)param_3);
  }
  *(undefined4 *)(param_6 + 5) = param_4;
  *(int *)((long)param_6 + 0x1c) = (int)param_1[5];
  *(undefined4 *)((long)param_6 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
  uVar1 = (int)param_1[5] + (uint)param_3;
  *(uint *)(param_1 + 5) = uVar1;
  if (*(short *)((long)param_1 + 0x54) == 1) {
    if (*(uint *)((long)param_1 + 0x24) <= uVar1) {
LAB__text__004ddcb0:
      uVar2 = (**(code **)(*param_1 + 0x120))(param_1,*(short *)((long)param_1 + 0x54) == 1);
      *(undefined4 *)((long)param_6 + 0x2c) = uVar2;
      return;
    }
  }
  else if (*(uint *)(param_1 + 7) < uVar1) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x34);
    goto LAB__text__004ddcb0;
  }
  *(undefined4 *)((long)param_6 + 0x2c) = 0x2d;
  return;
}


