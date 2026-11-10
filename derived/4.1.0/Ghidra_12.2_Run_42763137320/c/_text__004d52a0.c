/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d52a0; name: FUN_.text__004d52a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d52a0(undefined8 param_1,long param_2,uint param_3,long param_4,long param_5)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ushort uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  uVar16 = (ulong)param_3;
  if (*(int *)(param_2 + 0x170) == 0) {
    do {
      uVar14 = DAT_00aea6a0 + 1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(0xaea6a0,0x10);
      if (bVar7) {
        cVar6 = ExclusiveMonitorsStatus();
        DAT_00aea6a0 = uVar14;
      }
    } while (cVar6 != '\0');
    lVar8 = FUN__text__004d234c(param_2,uVar14 & 0xffffffffffffff,*(undefined4 *)(param_2 + 0x160));
    if (lVar8 == 0) {
      FUN__text__00413d04(param_1);
      return;
    }
  }
  lVar10 = *(long *)(param_2 + 0x168);
  uVar3 = *_DAT_008a4b70;
  *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x50) = 0x3f8000003f800000;
  *(short *)(lVar10 + 0x12) = (short)uVar3;
  uVar14 = uVar16 * 8 + 0xf & 0xffffffff0;
  lVar8 = (long)&local_b0 - uVar14;
  lVar9 = lVar8 - uVar14;
  lVar11 = lVar9 - uVar14;
  lVar12 = lVar11 - uVar14;
  local_b0 = param_1;
  local_a8 = uVar16;
  if (param_3 != 0) {
    uVar14 = 0;
    local_a0 = uVar16;
    lStack_98 = lVar12;
    local_90 = lVar11;
    lStack_88 = lVar9;
    local_80 = lVar8;
    lStack_78 = lVar10;
    local_70 = param_4;
    local_68 = param_5;
    do {
      lVar19 = *(long *)(param_4 + uVar14 * 8);
      plVar17 = *(long **)(lVar19 + 0x18);
      uVar5 = *(ushort *)((long)plVar17 + 0x12);
      uVar13 = *(ushort *)(plVar17 + 2);
      if ((uint)uVar5 < (uint)uVar13) {
        bVar4 = *(byte *)(plVar17 + 1);
        if (bVar4 != 0) {
          uVar16 = (ulong)(((uint)uVar13 - (uint)uVar5) * 4);
          if (bVar4 < 4) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            lVar8 = 0xc;
            do {
              lVar9 = (ulong)uVar5 * 4;
              memset((void *)(*plVar17 + (lVar8 + -0xc) * (ulong)*(ushort *)(plVar17 + 2) + lVar9),0
                     ,uVar16);
              memset((void *)(*plVar17 + (lVar8 + -8) * (ulong)*(ushort *)(plVar17 + 2) + lVar9),0,
                     uVar16);
              memset((void *)(*plVar17 + (lVar8 + -4) * (ulong)*(ushort *)(plVar17 + 2) + lVar9),0,
                     uVar16);
              memset((void *)(*plVar17 + lVar8 * (ulong)*(ushort *)(plVar17 + 2) + lVar9),0,uVar16);
              uVar20 = uVar20 + 4;
              lVar8 = lVar8 + 0x10;
            } while (((ulong)bVar4 & 0xfc) != uVar20);
          }
          param_4 = local_70;
          uVar18 = (ulong)bVar4 & 3;
          if ((bVar4 & 3) != 0) {
            lVar8 = uVar20 << 2;
            do {
              memset((void *)(*plVar17 + lVar8 * (ulong)*(ushort *)(plVar17 + 2) + (ulong)uVar5 * 4)
                     ,0,uVar16);
              lVar8 = lVar8 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          uVar13 = *(ushort *)(plVar17 + 2);
          lVar8 = local_80;
          lVar9 = lStack_88;
          lVar10 = lStack_78;
          lVar11 = local_90;
          lVar12 = lStack_98;
          uVar16 = local_a0;
          param_5 = local_68;
        }
        *(ushort *)((long)plVar17 + 0x12) = uVar13;
      }
      iVar2 = *(int *)(lVar10 + 0xc);
      if (*(int *)(lVar10 + 0xc) <= *(int *)((long)plVar17 + 0xc)) {
        iVar2 = *(int *)((long)plVar17 + 0xc);
      }
      *(int *)(lVar10 + 0xc) = iVar2;
      lVar15 = uVar14 * 8;
      uVar14 = uVar14 + 1;
      *(long *)(lVar8 + lVar15) = lVar19 + 0xc0;
      pfVar1 = (float *)(param_5 + lVar15);
      *(long **)(lVar9 + lVar15) = plVar17;
      *pfVar1 = *pfVar1 * *(float *)(lVar19 + 0x70);
      pfVar1[1] = pfVar1[1] * *(float *)(lVar19 + 0x74);
      *(undefined8 *)(lVar11 + lVar15) = *(undefined8 *)(lVar19 + 0x100);
      *(undefined8 *)(lVar12 + lVar15) = *(undefined8 *)(lVar19 + 0xf8);
    } while (uVar14 != uVar16);
  }
  FUN__text__00452fcc(local_b0,local_a8);
  return;
}


