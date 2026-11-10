/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519830; name: FUN_.text__00519830
 */


bool FUN__text__00519830(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                        long *param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 uStack_61;
  
  puVar5 = (uint *)(**(code **)*param_5)(param_5);
  bVar3 = false;
  if (puVar5 != (uint *)0x0) {
    uVar8 = *param_3;
    uVar9 = param_3[2];
    *(undefined8 *)(puVar5 + 4) = param_3[1];
    *(undefined8 *)(puVar5 + 6) = uVar9;
    *(undefined8 *)(puVar5 + 2) = uVar8;
    uVar8 = *param_4;
    uVar9 = param_4[2];
    iVar4 = -1;
    *(undefined8 *)(puVar5 + 0x3a) = param_4[1];
    *(undefined8 *)(puVar5 + 0x3c) = uVar9;
    *(undefined8 *)(puVar5 + 0x38) = uVar8;
    puVar5[0x3e] = (int)*(char *)(param_2 + 0x6e);
    lVar10 = param_2;
    do {
      uVar1 = iVar4 + puVar5[0x3e];
      if (uVar1 < 8) {
        fVar12 = *(float *)(lVar10 + 0x1c);
        fVar13 = *(float *)(lVar10 + 0x20);
        fVar11 = (float)FUN__text__0051727c(*(undefined4 *)(lVar10 + 0x18),
                                            *(undefined8 *)(lVar10 + 0x30));
        lVar6 = *(long *)(lVar10 + 0x38);
        fVar21 = *(float *)(lVar6 + 0x10);
        fVar19 = *(float *)(lVar6 + 0x14);
        uVar2 = 0x50c5d1f;
        if (*puVar5 != 0) {
          uVar2 = *puVar5 * 0x1000193;
        }
        fVar12 = *(float *)(lVar6 + 0x3c) * fVar12;
        fVar11 = *(float *)(lVar6 + 0x38) * fVar11;
        fVar13 = *(float *)(lVar6 + 0x40) * fVar13;
        fVar14 = *(float *)(lVar6 + 0x18);
        fVar17 = *(float *)(lVar6 + 0x1c);
        fVar22 = fVar19 * fVar11 + fVar12 * fVar14 + fVar13 * fVar17;
        fVar23 = fVar21 * fVar21 - (fVar19 * fVar19 + fVar14 * fVar14 + fVar17 * fVar17);
        fVar20 = (fVar14 * fVar13 - fVar17 * fVar12) * fVar21 + fVar19 * fVar22;
        fVar15 = (fVar17 * fVar11 - fVar13 * fVar19) * fVar21 + fVar14 * fVar22;
        fVar19 = (fVar19 * fVar12 - fVar14 * fVar11) * fVar21 + fVar17 * fVar22;
        dVar16 = *(double *)(lVar6 + 0x20);
        dVar18 = *(double *)(lVar6 + 0x28);
        *(double *)(puVar5 + (ulong)uVar1 * 6 + 0xc) =
             *(double *)(lVar6 + 0x30) + (double)(fVar19 + fVar19 + fVar13 * fVar23);
        *(double *)(puVar5 + (ulong)uVar1 * 6 + 8) =
             dVar16 + (double)(fVar20 + fVar20 + fVar11 * fVar23);
        *(double *)(puVar5 + (ulong)uVar1 * 6 + 10) =
             dVar18 + (double)(fVar15 + fVar15 + fVar12 * fVar23);
        uVar1 = **(uint **)(lVar10 + 0x30);
        uVar8 = **(undefined8 **)(lVar10 + 0x38);
        uVar2 = (((uVar2 ^ uVar1 & 0xff) * 0x1000193 ^ uVar1 >> 8 & 0xff) * 0x1000193 ^
                uVar1 >> 0x10 & 0xff) * 0x1000193 ^ uVar1 >> 0x18;
        uVar1 = 0x50c5d1f;
        if (uVar2 != 0) {
          uVar1 = uVar2 * 0x1000193;
        }
        uVar7 = (uint)uVar8;
        uVar2 = (uint)((ulong)uVar8 >> 0x20);
        *puVar5 = (((((((uVar1 ^ uVar7 & 0xff) * 0x1000193 ^ uVar7 >> 8 & 0xff) * 0x1000193 ^
                      uVar7 >> 0x10 & 0xff) * 0x1000193 ^ uVar7 >> 0x18) * 0x1000193 ^ uVar2 & 0xff)
                    * 0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^
                  (ushort)((ulong)uVar8 >> 0x30) & 0xff) * 0x1000193 ^
                  (uint)(byte)((ulong)uVar8 >> 0x38);
        fVar11 = *(float *)(lVar10 + 0x68);
      }
      else {
        fVar11 = *(float *)(lVar10 + 0x68);
      }
      if (fVar11 < 0.15) {
        FUN__text__0051c6f4(param_6,lVar10 + 0x30);
      }
      lVar10 = *(long *)(lVar10 + 0x40);
      iVar4 = iVar4 + -1;
    } while (lVar10 != 0);
    FUN__text__0051bc80(param_7,*(undefined1 *)(param_2 + 0x6d),&uStack_61);
    iVar4 = (**(code **)(*param_5 + 8))(param_5);
    bVar3 = iVar4 != param_8;
  }
  return bVar3;
}


