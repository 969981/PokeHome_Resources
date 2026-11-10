/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00593ea8; name: FUN_.text__00593ea8
 */


undefined8 FUN__text__00593ea8(long param_1,long param_2,long *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  float fVar2;
  undefined2 uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  
  *(long *)(param_1 + 0x30) = param_4;
  *(long *)(param_1 + 0x38) = param_2;
  *(long **)(param_1 + 0x40) = param_3;
  if (((param_2 == 0) || (param_3 == (long *)0x0)) || (param_4 == 0)) {
    return 2;
  }
  FUN__text__005952ac(param_4);
  *(long *)(param_1 + 0x38) = param_2;
  *(uint *)(param_1 + 8) = (uint)*(byte *)(param_5 + 4);
  plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
  uVar4 = (**(code **)(*plVar5 + 0x28))();
  *(float *)(param_1 + 0x24) = (float)uVar4;
  plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
  uVar3 = (**(code **)(*plVar5 + 0x18))();
  *(undefined2 *)(param_1 + 0x28) = uVar3;
  if (*(long *)(param_1 + 0x10) == 0) {
    pvVar7 = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                               (*(long **)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 8) * 0x290,
                                0x72051d,0x274);
    if (pvVar7 == (void *)0x0) {
      return 0x34;
    }
    *(void **)(param_1 + 0x10) = pvVar7;
    memset(pvVar7,0,(ulong)(uint)(*(int *)(param_1 + 8) * 0x290));
    uVar8 = (ulong)*(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) == 0) goto LAB__text__00594140;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar11 = 0;
      uVar10 = 1;
      while( true ) {
        if (lVar9 != 0) {
          pvVar7 = (void *)(lVar9 + lVar11);
          memset(pvVar7,0,0x290);
          *(undefined8 *)((long)pvVar7 + 4) = 0x3f8000003f000000;
          *(undefined8 *)((long)pvVar7 + 0x30) = 0;
          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
          *(undefined8 *)((long)pvVar7 + 0x18) = 0;
          *(undefined8 *)((long)pvVar7 + 0x20) = 0;
          *(undefined8 *)((long)pvVar7 + 0x28) = 0;
          FUN__text__00592d4c((long)pvVar7 + 0x38);
          *(undefined8 *)((long)pvVar7 + 0x268) = 0;
          *(undefined8 *)((long)pvVar7 + 0x270) = 0x2800000000;
          *(undefined8 *)((long)pvVar7 + 0x278) = 0;
          *(undefined8 *)((long)pvVar7 + 0x280) = 0;
          *(undefined8 *)((long)pvVar7 + 0x288) = 0;
          uVar8 = (ulong)*(uint *)(param_1 + 8);
        }
        if (uVar8 <= uVar10) break;
        lVar9 = *(long *)(param_1 + 0x10);
        lVar11 = lVar11 + 0x290;
        uVar10 = uVar10 + 1;
      }
      goto LAB__text__00593f8c;
    }
  }
  else {
    uVar8 = (ulong)*(uint *)(param_1 + 8);
LAB__text__00593f8c:
    if (uVar8 == 0) {
LAB__text__00594140:
      lVar9 = *(long *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar9 + 0x28);
      goto LAB__text__0059414c;
    }
  }
  lVar9 = 0;
  uVar10 = 0;
  uVar6 = 1;
  do {
    if ((int)uVar6 == 1) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar9);
      *puVar1 = 0x3f00000000000000;
      puVar1[0x4f] = 0;
      puVar1[0x50] = 0;
      puVar1[0x51] = 0;
      *(undefined4 *)(puVar1 + 1) = 0x3f800000;
      FUN__text__00592e20(puVar1 + 7);
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[0x4e] = 0x2800000000;
      lVar11 = *(long *)(param_1 + 0x30);
      uVar6 = FUN__text__00593a60((double)*(float *)(param_1 + 0x24),0,
                                  (double)*(float *)(lVar11 + 0x30),(double)*(float *)(lVar11 + 0xc)
                                  ,(double)*(float *)(lVar11 + 0x10),
                                  (double)*(float *)(lVar11 + 0x14),
                                  (double)*(float *)(lVar11 + 0x18),
                                  (double)*(float *)(lVar11 + 0x1c),puVar1,
                                  *(undefined2 *)(param_1 + 0x28),puVar1 + 0x50,puVar1 + 0x51,
                                  *(undefined8 *)(param_1 + 0x38));
      uVar8 = (ulong)*(uint *)(param_1 + 8);
    }
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x290;
  } while (uVar10 < uVar8);
  lVar9 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar9 + 0x28);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
LAB__text__0059414c:
  fVar2 = *(float *)(lVar9 + 0x20);
  if (*(float *)(lVar9 + 0x20) <= *(float *)(lVar9 + 0x24)) {
    fVar2 = *(float *)(lVar9 + 0x24);
  }
  fVar12 = fVar2 * 0.016666668 + 1.0;
  if (fVar2 <= 0.0) {
    fVar12 = 1.0;
  }
  fVar12 = *(float *)(lVar9 + 0xc) * 0.01 * fVar12;
  uVar4 = (uint)(*(float *)(lVar9 + 0x14) * *(float *)(param_1 + 0x24) * 0.001);
  if (fVar12 != 0.0) {
    uVar4 = (uint)((float)uVar4 + (float)(int)(*(float *)(lVar9 + 0x30) * 3180.0) * fVar12);
  }
  *(uint *)(param_1 + 0x20) = uVar4;
  *(undefined1 *)(lVar9 + 0x34) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x2c) = 0;
  return 1;
}


