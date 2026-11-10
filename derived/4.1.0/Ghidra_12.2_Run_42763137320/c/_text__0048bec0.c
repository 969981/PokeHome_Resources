/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048bec0; name: FUN_.text__0048bec0
 */


undefined8 FUN__text__0048bec0(uint *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = param_3 + 1U;
  uVar7 = (param_3 + 1U) * 2;
  if (param_1[5] < uVar7) {
    if (*(long *)(param_1 + 2) == 0) {
      uVar6 = param_1[4];
      lVar8 = FUN__text__00400f80(5,(ulong)uVar7 << 6);
      if (lVar8 != 0) {
        lVar9 = *(long *)(param_1 + 2);
        if ((lVar9 != 0) && (lVar9 != lVar8)) {
          if (uVar6 != 0) {
            lVar9 = 0;
            do {
              puVar1 = (undefined8 *)(lVar8 + lVar9);
              *(undefined8 *)((long)puVar1 + 0xc) = 0;
              *(undefined4 *)((long)puVar1 + 0x14) = 0;
              puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + lVar9);
              lVar9 = lVar9 + 0x40;
              uVar3 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[3];
              puVar1[2] = puVar2[2];
              puVar1[3] = uVar5;
              *puVar1 = uVar3;
              puVar1[1] = uVar4;
              uVar3 = puVar2[4];
              uVar4 = puVar2[5];
              uVar5 = puVar2[7];
              puVar1[6] = puVar2[6];
              puVar1[7] = uVar5;
              puVar1[4] = uVar3;
              puVar1[5] = uVar4;
            } while ((ulong)uVar6 * 0x40 != lVar9);
            lVar9 = *(long *)(param_1 + 2);
          }
          FUN__text__00400fc0(5,lVar9);
        }
        goto LAB__text__0048bf9c;
      }
    }
    else {
      lVar8 = FUN__text__00400fa0(5);
      if (lVar8 != 0) {
LAB__text__0048bf9c:
        *(long *)(param_1 + 2) = lVar8;
        param_1[5] = uVar7;
      }
    }
  }
  uVar7 = *param_1 << 1;
  if (param_1[9] < uVar7) {
    if (*(long *)(param_1 + 6) == 0) {
      uVar6 = param_1[8];
      lVar8 = FUN__text__00400f80(5,(ulong)uVar7 << 6);
      if (lVar8 == 0) goto LAB__text__0048c064;
      lVar9 = *(long *)(param_1 + 6);
      if ((lVar9 != 0) && (lVar9 != lVar8)) {
        if (uVar6 != 0) {
          lVar9 = 0;
          do {
            puVar1 = (undefined8 *)(lVar8 + lVar9);
            *(undefined8 *)((long)puVar1 + 0xc) = 0;
            *(undefined4 *)((long)puVar1 + 0x14) = 0;
            puVar2 = (undefined8 *)(*(long *)(param_1 + 6) + lVar9);
            lVar9 = lVar9 + 0x40;
            uVar3 = *puVar2;
            uVar4 = puVar2[1];
            uVar5 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar5;
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            uVar3 = puVar2[4];
            uVar4 = puVar2[5];
            uVar5 = puVar2[7];
            puVar1[6] = puVar2[6];
            puVar1[7] = uVar5;
            puVar1[4] = uVar3;
            puVar1[5] = uVar4;
          } while ((ulong)uVar6 * 0x40 != lVar9);
          lVar9 = *(long *)(param_1 + 6);
        }
        FUN__text__00400fc0(5,lVar9);
      }
    }
    else {
      lVar8 = FUN__text__00400fa0(5);
      if (lVar8 == 0) goto LAB__text__0048c064;
    }
    *(long *)(param_1 + 6) = lVar8;
    param_1[9] = uVar7;
  }
LAB__text__0048c064:
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*param_1 * 0xc,0x70c7b9,0x12f);
  *(long *)(param_1 + 10) = lVar8;
  if (lVar8 != 0) {
    return 1;
  }
  if (*(long *)(param_1 + 2) != 0) {
    param_1[4] = 0;
    FUN__text__00400fc0(5);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    param_1[8] = 0;
    FUN__text__00400fc0(5);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
  }
  if (*(long *)(param_1 + 10) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  return 0x34;
}


