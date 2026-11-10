/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055aa20; name: FUN_.text__0055aa20
 */


undefined8 FUN__text__0055aa20(long *param_1,long *param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 << 3,0x71971e,0x68);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  param_1[2] = (long)param_2;
  param_1[5] = (long)param_2;
  uVar2 = *(uint *)(param_1 + 1) >> 1;
  lVar3 = (ulong)uVar2 + 1;
  if (*(uint *)((long)param_1 + 0x24) <= uVar2) {
    if (param_1[3] == 0) {
      uVar1 = *(uint *)(param_1 + 4);
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2,lVar3 * 8,0x71ae6e,0xcc);
      if (lVar4 == 0) {
        return 0x34;
      }
      lVar5 = param_1[3];
      if ((lVar5 != 0) && (lVar5 != lVar4)) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar5 = uVar6 * 8;
              uVar6 = uVar6 + 2;
              *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(param_1[3] + lVar5);
              ((undefined8 *)(lVar4 + lVar5))[1] = *(undefined8 *)(param_1[3] + lVar5 + 8);
            } while (((ulong)uVar1 & 0xfffffffe) != uVar6);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined8 *)(lVar4 + uVar6 * 8) = *(undefined8 *)(param_1[3] + uVar6 * 8);
          }
          lVar5 = param_1[3];
        }
        (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar5);
      }
    }
    else {
      lVar4 = (**(code **)(*param_2 + 0x28))(param_2,param_1[3],lVar3 * 8,0x71ae6e,0xcd);
      if (lVar4 == 0) {
        return 0x34;
      }
    }
    param_1[3] = lVar4;
    *(int *)((long)param_1 + 0x24) = (int)lVar3;
  }
  if (*(uint *)((long)param_1 + 0x3c) <= uVar2) {
    if (*(uint *)((long)param_1 + 0x3c) != 0) {
      return 0x1f;
    }
    lVar4 = *(long *)param_1[5];
    if (param_1[6] == 0) {
      uVar2 = *(uint *)(param_1 + 7);
      lVar4 = (**(code **)(lVar4 + 0x10))((long *)param_1[5],lVar3 * 2,0x71ae6e,0xcc);
      if (lVar4 == 0) {
        return 0x34;
      }
      lVar5 = param_1[6];
      if ((lVar5 != 0) && (lVar5 != lVar4)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar5 = uVar6 * 2;
              uVar6 = uVar6 + 2;
              *(undefined2 *)(lVar4 + lVar5) = *(undefined2 *)(param_1[6] + lVar5);
              ((undefined2 *)(lVar4 + lVar5))[1] = *(undefined2 *)(param_1[6] + lVar5 + 2);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined2 *)(lVar4 + uVar6 * 2) = *(undefined2 *)(param_1[6] + uVar6 * 2);
          }
          lVar5 = param_1[6];
        }
        (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar5);
      }
    }
    else {
      lVar4 = (**(code **)(lVar4 + 0x28))();
      if (lVar4 == 0) {
        return 0x34;
      }
    }
    param_1[6] = lVar4;
    *(int *)((long)param_1 + 0x3c) = (int)lVar3;
  }
  param_1[8] = param_4;
  return 1;
}


