/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bfbf8; name: FUN_.text__005bfbf8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bfbf8(long param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fStack_44;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x664));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x666));
  lVar4 = *(long *)(param_1 + 0x7b8);
  uVar5 = (ulong)*(uint *)(param_1 + 0x8c8);
  fVar8 = *param_4 / fVar7;
  fVar13 = fVar8 + (*param_2 + *param_2) / fVar7 + -1.0;
  fVar7 = *param_5 / fVar9;
  fVar14 = (1.0 - (*param_3 + *param_3) / fVar9) - fVar7;
  fVar15 = (float)_DAT_00724920;
  fVar16 = (float)((ulong)_DAT_00724920 >> 0x20);
  fVar17 = (float)uRam0000000000724928;
  fVar18 = (float)((ulong)uRam0000000000724928 >> 0x20);
  fVar19 = (float)_DAT_00724ba0;
  fVar20 = (float)((ulong)_DAT_00724ba0 >> 0x20);
  fVar21 = (float)uRam0000000000724ba8;
  fVar22 = (float)((ulong)uRam0000000000724ba8 >> 0x20);
  fVar9 = (float)_DAT_00724a00;
  fVar10 = (float)((ulong)_DAT_00724a00 >> 0x20);
  fVar11 = (float)uRam0000000000724a08;
  fVar12 = (float)((ulong)uRam0000000000724a08 >> 0x20);
  *(undefined8 *)(param_1 + 0x6e8) = 0x3f80000000000000;
  *(ulong *)(param_1 + 0x6e0) = CONCAT44(fVar14,fVar13);
  *(ulong *)(param_1 + 0x6d8) =
       CONCAT44(fVar18 * 0.0 + fVar22 * 0.0 + fVar12 * 0.0 + 0.0,
                fVar17 * 0.0 + fVar21 * 0.0 + fVar11 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x6d0) =
       CONCAT44(fVar16 * 0.0 + fVar20 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0,
                fVar15 * 0.0 + fVar19 * 0.0 + fVar9 * 0.0 + fVar13 * 0.0);
  *(ulong *)(param_1 + 0x6c8) =
       CONCAT44(fVar18 * 0.0 + fVar22 * fVar7 + fVar12 * 0.0 + 0.0,
                fVar17 * 0.0 + fVar21 * fVar7 + fVar11 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x6c0) =
       CONCAT44(fVar16 * 0.0 + fVar20 * fVar7 + fVar10 * 0.0 + fVar14 * 0.0,
                fVar15 * 0.0 + fVar19 * fVar7 + fVar9 * 0.0 + fVar13 * 0.0);
  *(ulong *)(param_1 + 0x6b8) =
       CONCAT44(fVar18 * fVar8 + fVar22 * 0.0 + fVar12 * 0.0 + 0.0,
                fVar17 * fVar8 + fVar21 * 0.0 + fVar11 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x6b0) =
       CONCAT44(fVar16 * fVar8 + fVar20 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0,
                fVar15 * fVar8 + fVar19 * 0.0 + fVar9 * 0.0 + fVar13 * 0.0);
  if ((ulong)((*(long *)(param_1 + 0x7c0) - lVar4 >> 3) * -0x5555555555555555) <= uVar5) {
    auVar23 = FUN__text__005c1b24(param_1 + 0x7b8);
    uStack_38 = FUN__text__005bfdc4;
    fStack_44 = *param_3 + *param_5;
    puStack_40 = (undefined1 *)((long)register0x00000008 + -0x30);
    FUN__text__005bfbf8(auVar23._0_8_,auVar23._8_8_,&fStack_44);
    return;
  }
  puVar2 = (undefined4 *)(lVar4 + uVar5 * 0x18);
  *(undefined4 *)(param_1 + 0x640) = *puVar2;
  lVar6 = *(long *)(puVar2 + 2);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x648);
  *(long *)(param_1 + 0x648) = lVar6;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(lVar4 + uVar5 * 0x18 + 0x10);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x650);
  *(long *)(param_1 + 0x650) = lVar4;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (((*(long **)(param_1 + 8) != (long *)0x0) &&
      (uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x58))(), (uVar5 & 1) == 0)) &&
     (*(int *)(param_1 + 0x18) == 0)) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x708);
  lVar4 = param_1 + 0x20;
  if (lVar6 == *(long *)(param_1 + 0x710)) {
    FUN__text__005c32b0(param_1 + 0x700,lVar4);
    lVar6 = *(long *)(param_1 + 0x790);
    if (lVar6 == *(long *)(param_1 + 0x788)) goto LAB__text__005bfbe0;
  }
  else {
    FUN__text__005c3440(param_1 + 0x718,lVar6,lVar4);
    *(long *)(param_1 + 0x708) = lVar6 + 0x6e0;
    lVar6 = *(long *)(param_1 + 0x790);
    if (lVar6 == *(long *)(param_1 + 0x788)) {
LAB__text__005bfbe0:
      FUN__text__005bdde0(lVar4,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  lVar4 = *(long *)(lVar6 + -8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x638);
  *(long *)(param_1 + 0x638) = lVar4;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  plVar3 = (long *)(*(long *)(param_1 + 0x790) + -8);
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *(long **)(param_1 + 0x790) = plVar3;
  return;
}


