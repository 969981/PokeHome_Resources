/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00492bb0; name: FUN_.text__00492bb0
 */


long FUN__text__00492bb0(long *param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_51;
  
  lVar8 = *param_1;
  uVar7 = *(uint *)(param_1 + 8);
  if (uVar7 < *(uint *)(lVar8 + 0x28)) {
    do {
      lVar10 = *(long *)(lVar8 + 0x20) + (ulong)uVar7 * 0x88;
      bVar4 = *(byte *)(*(long *)(lVar8 + 0x30) + (ulong)uVar7);
      FUN__text__004934f0(param_1 + 2,*(undefined8 *)(lVar10 + 0x70),&uStack_51);
      if (*(char *)((long)param_1 + 0x4c) != '\0') {
        if (*(float *)(lVar10 + 0x30) < *(float *)((long)param_1 + 0xc)) {
          *(int *)(param_1 + 1) = (int)param_1[8];
          *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar10 + 0x30);
        }
        if (((bVar4 & 5) != 0) && (*(float *)(lVar10 + 0x50) < *(float *)((long)param_1 + 0x44))) {
          *(float *)((long)param_1 + 0x44) = *(float *)(lVar10 + 0x50);
        }
        if ((bVar4 >> 1 & 1) != 0) {
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar10 + 0x54);
        }
      }
      uVar7 = (int)param_1[8] + 1;
      lVar8 = *param_1;
      *(uint *)(param_1 + 8) = uVar7;
    } while (uVar7 < *(uint *)(lVar8 + 0x28));
  }
  *(byte *)((long)param_1 + 0x4c) = param_3 & 1;
  uVar7 = *(uint *)(lVar8 + 0x28);
  uVar3 = *(uint *)(lVar8 + 0x2c);
  if (uVar3 <= uVar7) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN__text__00451a80(lVar8 + 0x20,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(lVar8 + 0x2c) <= uVar7) {
      return 0;
    }
    uVar7 = *(uint *)(lVar8 + 0x28);
  }
  *(uint *)(lVar8 + 0x28) = uVar7 + 1;
  if (*(long *)(lVar8 + 0x20) == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x20) + (ulong)uVar7 * 0x88;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined4 *)(lVar8 + 0x58) = 0;
  *(undefined4 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x5c) = 0x3f80000042c80000;
  *(undefined8 *)(lVar8 + 100) = 0xffffffff;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined8 *)(lVar8 + 0x78) = 0x3f800000;
  lVar9 = *param_1;
  uVar3 = *(uint *)(lVar9 + 0x38);
  uVar7 = *(uint *)(lVar9 + 0x3c);
  lVar10 = *(long *)(lVar9 + 0x30);
  if (uVar3 < uVar7) {
    *(uint *)(lVar9 + 0x38) = uVar3 + 1;
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + (ulong)uVar3) = param_2;
      return lVar8;
    }
  }
  else {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    if (lVar10 == 0) {
      lVar10 = FUN__text__00400f80(0,uVar7);
      if (lVar10 == 0) goto LAB__text__00492e2c;
      lVar6 = *(long *)(lVar9 + 0x30);
      if ((lVar6 != 0) && (lVar6 != lVar10)) {
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              puVar2 = (undefined1 *)(lVar10 + uVar5);
              *puVar2 = *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar5);
              lVar6 = *(long *)(lVar9 + 0x30) + uVar5;
              uVar5 = uVar5 + 2;
              puVar2[1] = *(undefined1 *)(lVar6 + 1);
            } while (((ulong)uVar3 & 0xfffffffe) != uVar5);
          }
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(lVar10 + uVar5) = *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar5);
          }
          lVar6 = *(long *)(lVar9 + 0x30);
        }
        FUN__text__00400fc0(0,lVar6);
      }
    }
    else {
      lVar10 = FUN__text__00400fa0(0,lVar10,uVar7);
      if (lVar10 == 0) goto LAB__text__00492e2c;
    }
    *(long *)(lVar9 + 0x30) = lVar10;
    *(uint *)(lVar9 + 0x3c) = uVar7;
    if (uVar3 < uVar7) {
      uVar7 = *(uint *)(lVar9 + 0x38);
      *(uint *)(lVar9 + 0x38) = uVar7 + 1;
      *(undefined1 *)(lVar10 + (ulong)uVar7) = param_2;
      return lVar8;
    }
  }
LAB__text__00492e2c:
  *(int *)(*param_1 + 0x28) = *(int *)(*param_1 + 0x28) + -1;
  return 0;
}


