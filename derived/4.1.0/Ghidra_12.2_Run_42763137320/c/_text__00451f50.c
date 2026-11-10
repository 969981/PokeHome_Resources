/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451f50; name: FUN_.text__00451f50
 */


void FUN__text__00451f50(long param_1,ushort param_2,long *param_3,long *param_4,long *param_5,
                        long *param_6,long *param_7,long *param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  
  if (param_2 != 0) {
    uVar14 = 0;
    do {
      pbVar11 = *(byte **)(param_1 + uVar14 * 8);
      lVar13 = *(long *)(pbVar11 + 0x20);
      bVar2 = *pbVar11;
      FUN__text__00452180(pbVar11 + 4,lVar13,*(undefined8 *)(lVar13 + 0x28),bVar2);
      FUN__text__004523b0(pbVar11 + 0x10,lVar13 + 0x14,*(undefined8 *)(lVar13 + 0x30),(uint)bVar2);
      bVar3 = pbVar11[0xd];
      bVar8 = (bVar3 & 8) != 0;
      bVar4 = pbVar11[0x19];
      bVar9 = (bVar4 & 8) != 0;
      uVar12 = (uint)bVar2;
      uVar6 = (undefined2)uVar14;
      if (*(float *)(pbVar11 + 8) == *(float *)(pbVar11 + 4)) {
        bVar7 = *(float *)(pbVar11 + 0x14) != *(float *)(pbVar11 + 0x10);
        if (!bVar9 || !bVar8) goto LAB__text__00451fa0;
LAB__text__00452040:
        if ((bVar3 & 4 & bVar4) == 0) {
          if (((bVar4 | bVar3) >> 2 & 1) == 0) {
            if (bVar7) {
              plVar10 = param_5;
            }
            else {
              plVar10 = param_6;
            }
            uVar1 = *(uint *)(plVar10 + 1);
            *(uint *)(plVar10 + 1) = uVar1 + 1;
            *(undefined2 *)(*plVar10 + (ulong)uVar1 * 2) = uVar6;
            *(uint *)((long)plVar10 + 0xc) = *(int *)((long)plVar10 + 0xc) + uVar12;
          }
          else {
            if ((bVar3 & 4) == 0) {
              if (!bVar7) {
                uVar1 = *(uint *)((long)param_8 + 0xc);
                uVar5 = *(undefined2 *)(*param_8 + (ulong)*(uint *)(param_8 + 1) * 2);
                *(uint *)((long)param_8 + 0xc) = uVar1 + 1;
                *(undefined2 *)(*param_8 + (ulong)uVar1 * 2) = uVar5;
                uVar1 = *(uint *)(param_8 + 1);
                lVar13 = *param_8;
                *(uint *)(param_8 + 1) = uVar1 + 1;
LAB__text__00452144:
                *(undefined2 *)(lVar13 + (ulong)uVar1 * 2) = uVar6;
                *(uint *)(param_8 + 2) = (int)param_8[2] + uVar12;
                goto LAB__text__00451fc0;
              }
              uVar1 = *(uint *)((long)param_7 + 0xc);
              uVar5 = *(undefined2 *)(*param_7 + (ulong)*(uint *)(param_7 + 1) * 2);
              *(uint *)((long)param_7 + 0xc) = uVar1 + 1;
              *(undefined2 *)(*param_7 + (ulong)uVar1 * 2) = uVar5;
              uVar1 = *(uint *)(param_7 + 1);
              lVar13 = *param_7;
              *(uint *)(param_7 + 1) = uVar1 + 1;
            }
            else {
              if (!bVar7) {
                uVar1 = *(uint *)((long)param_8 + 0xc);
                lVar13 = *param_8;
                *(uint *)((long)param_8 + 0xc) = uVar1 + 1;
                goto LAB__text__00452144;
              }
              uVar1 = *(uint *)((long)param_7 + 0xc);
              lVar13 = *param_7;
              *(uint *)((long)param_7 + 0xc) = uVar1 + 1;
            }
            *(undefined2 *)(lVar13 + (ulong)uVar1 * 2) = uVar6;
            *(uint *)(param_7 + 2) = (int)param_7[2] + uVar12;
          }
        }
        else {
          uVar12 = *(uint *)(param_3 + 1);
          *(uint *)(param_3 + 1) = uVar12 + 1;
          *(undefined2 *)(*param_3 + (ulong)uVar12 * 2) = uVar6;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) + (uint)bVar2;
        }
      }
      else {
        bVar7 = true;
        if (bVar9 && bVar8) goto LAB__text__00452040;
LAB__text__00451fa0:
        uVar1 = *(uint *)(param_4 + 1);
        *(uint *)(param_4 + 1) = uVar1 + 1;
        *(undefined2 *)(*param_4 + (ulong)uVar1 * 2) = uVar6;
        *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + uVar12;
      }
LAB__text__00451fc0:
      uVar14 = uVar14 + 1;
    } while (param_2 != uVar14);
  }
  return;
}


