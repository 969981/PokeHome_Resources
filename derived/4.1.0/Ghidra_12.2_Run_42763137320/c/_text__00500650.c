/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00500650; name: FUN_.text__00500650
 */


undefined8
FUN__text__00500650(undefined8 param_1,long *param_2,int param_3,long *param_4,char *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_4 + 1);
  uVar3 = *(uint *)((long)param_4 + 0xc);
  lVar7 = *param_4;
  if (uVar2 < uVar3) {
    *(uint *)(param_4 + 1) = uVar2 + 1;
    if (lVar7 == 0) {
      return 2;
    }
    *(long **)(lVar7 + (ulong)uVar2 * 8) = param_2;
    iVar1 = (int)param_2[2];
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (lVar7 == 0) {
      lVar7 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
      if (lVar7 == 0) {
        return 2;
      }
      lVar6 = *param_4;
      if ((lVar6 != 0) && (lVar6 != lVar7)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              lVar6 = uVar4 * 8;
              uVar4 = uVar4 + 2;
              *(undefined8 *)(lVar7 + lVar6) = *(undefined8 *)(*param_4 + lVar6);
              ((undefined8 *)(lVar7 + lVar6))[1] = *(undefined8 *)(*param_4 + lVar6 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar4);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar7 + uVar4 * 8) = *(undefined8 *)(*param_4 + uVar4 * 8);
          }
          lVar6 = *param_4;
        }
        FUN__text__00400fc0(0,lVar6);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0(0,lVar7);
      if (lVar7 == 0) {
        return 2;
      }
    }
    *param_4 = lVar7;
    *(uint *)((long)param_4 + 0xc) = uVar3;
    if (uVar3 <= uVar2) {
      return 2;
    }
    uVar3 = *(uint *)(param_4 + 1);
    *(uint *)(param_4 + 1) = uVar3 + 1;
    *(long **)(lVar7 + (ulong)uVar3 * 8) = param_2;
    iVar1 = (int)param_2[2];
  }
  if (iVar1 == param_3) {
    *param_5 = '\x01';
    return 1;
  }
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((uVar4 & 1) == 0) {
    if (*param_5 != '\0') {
      return 1;
    }
    puVar8 = (undefined8 *)param_2[4];
    while (puVar8 != (undefined8 *)(param_2[4] + (ulong)*(uint *)(param_2 + 5) * 8)) {
      uVar5 = FUN__text__00500650(param_1,*puVar8,param_3,param_4,param_5);
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      puVar8 = puVar8 + 1;
      if (*param_5 != '\0') {
        return uVar5;
      }
    }
  }
  else if (*param_5 != '\0') {
    return 1;
  }
  *(int *)(param_4 + 1) = (int)param_4[1] + -1;
  return 1;
}


