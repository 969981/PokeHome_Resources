/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057cb70; name: FUN_.text__0057cb70
 */


undefined8
FUN__text__0057cb70(float param_1,uint *param_2,long *param_3,undefined4 *param_4,
                   undefined4 *param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar5 = 2;
  if ((0xffffffbf < param_6 - 0x41) && (0xffffffbf < param_7 - 0x41)) {
    fVar12 = exp2f(param_1 * 0.01);
    fVar13 = (float)NEON_fminnm(*param_4,*param_5);
    fVar13 = fVar13 * fVar12;
    fVar14 = (float)param_4[(ulong)(param_6 - 1) * 2];
    if ((float)param_4[(ulong)(param_6 - 1) * 2] <= (float)param_5[(ulong)(param_7 - 1) * 2]) {
      fVar14 = (float)param_5[(ulong)(param_7 - 1) * 2];
    }
    fVar15 = (float)param_8 * 0.001;
    uVar8 = (uint)(fVar15 * (fVar14 * fVar12 - fVar13));
    if (uVar8 < 5) {
      uVar8 = 4;
    }
    if (uVar8 >> 0x10 == 0) {
      *param_2 = uVar8 & 0xfffc;
      lVar6 = (**(code **)(*param_3 + 0x10))(param_3,(uVar8 & 0xfffc) << 2,0x71aeca,0x35);
      *(long *)(param_2 + 2) = lVar6;
      if (lVar6 == 0) {
        uVar5 = 0x34;
      }
      else {
        uVar8 = *param_2;
        uVar9 = 0;
        uVar10 = 0;
        uVar7 = 0;
        *(undefined2 *)(param_2 + 0xc5) = 0;
        uVar11 = 0xffffffff;
        do {
          uVar2 = (int)(fVar15 * ((float)param_4[uVar9 * 2] * fVar12 - fVar13)) & 0xfffffffc;
          if (uVar8 <= uVar2) {
            uVar2 = uVar8 - 4;
          }
          if (uVar2 != uVar11) {
            sVar3 = 0;
            if (uVar2 != 0) {
              sVar3 = (short)uVar8 - (short)uVar2;
            }
            *(short *)((long)param_2 + (ulong)uVar7 * 2 + 0x214) = sVar3;
            param_2[(ulong)uVar7 + 5] = param_4[uVar9 * 2 + 1];
            uVar4 = *(ushort *)((long)param_2 + (ulong)uVar7 * 2 + 0x214);
            if (uVar10 < uVar4) {
              *(ushort *)(param_2 + 0xc5) = uVar7;
              uVar10 = uVar4;
            }
            uVar7 = uVar7 + 1;
          }
          uVar9 = uVar9 + 1;
          uVar11 = uVar2;
        } while (uVar9 < ((ulong)param_6 & 0xffff));
        *(ushort *)(param_2 + 0xc6) = uVar7;
        *(undefined2 *)((long)param_2 + 0x316) = 0;
        if (param_7 == 0) {
          uVar7 = 0;
        }
        else {
          uVar8 = *param_2;
          uVar9 = 0;
          uVar10 = 0;
          uVar7 = 0;
          uVar11 = 0xffffffff;
          do {
            uVar9 = uVar9 & 0xffff;
            uVar2 = (int)(fVar15 * ((float)param_5[uVar9 * 2] * fVar12 - fVar13)) & 0xfffffffc;
            if (uVar8 <= uVar2) {
              uVar2 = uVar8 - 4;
            }
            if (uVar2 != uVar11) {
              sVar3 = 0;
              if (uVar2 != 0) {
                sVar3 = (short)uVar8 - (short)uVar2;
              }
              *(short *)((long)param_2 + (ulong)uVar7 * 2 + 0x294) = sVar3;
              param_2[(ulong)uVar7 + 0x45] = param_5[uVar9 * 2 + 1];
              uVar4 = *(ushort *)((long)param_2 + (ulong)uVar7 * 2 + 0x294);
              if (uVar10 < uVar4) {
                *(ushort *)((long)param_2 + 0x316) = uVar7;
                uVar10 = uVar4;
              }
              uVar7 = uVar7 + 1;
            }
            uVar1 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar1;
            uVar11 = uVar2;
          } while ((uVar1 & 0xffff) < param_7);
        }
        uVar5 = 1;
        *(ushort *)((long)param_2 + 0x31a) = uVar7;
        param_2[4] = 0;
      }
    }
    else {
      uVar5 = 2;
    }
  }
  return uVar5;
}


