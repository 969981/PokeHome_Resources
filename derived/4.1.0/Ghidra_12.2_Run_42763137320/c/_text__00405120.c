/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405120; name: FUN_.text__00405120
 */


undefined8 * FUN__text__00405120(int param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  puVar14 = (ulong *)param_3[1];
  if (puVar14 != (ulong *)0x0) {
    puVar12 = (undefined8 *)*puVar14;
    if (puVar12 == (undefined8 *)0x0) {
      uVar1 = (uint)puVar14[2];
      uVar4 = (ulong)uVar1;
      uVar6 = (ulong)*(uint *)((long)puVar14 + 0x24);
      uVar8 = (int)puVar14[1] - uVar1;
      puVar12 = (undefined8 *)((long)puVar14 + uVar6 * uVar4 + 0x80);
      puVar11 = param_3;
      if (1 < uVar8) {
        puVar9 = (ulong *)((long)puVar12 + uVar6 * uVar8);
        uVar10 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638);
        puVar11 = (undefined8 *)((long)puVar12 + uVar6);
        puVar13 = (ulong *)((-uVar10 & (ulong)puVar12) + uVar10);
        *param_3 = puVar11;
        if (puVar9 <= puVar13 || uVar10 >> 1 <= uVar6) {
          puVar13 = puVar9;
        }
        if ((ulong *)((long)puVar11 + uVar6) < puVar13) {
          puVar9 = puVar14 + 0x10;
          lVar7 = (uVar4 + 2) * uVar6;
          uVar8 = 2;
          do {
            uVar8 = uVar8 + 1;
            *(ulong **)((long)puVar9 + uVar6 + uVar6 * uVar1) = (ulong *)((long)puVar9 + lVar7);
            puVar9 = (ulong *)((long)puVar9 + uVar6);
          } while ((ulong *)((long)puVar9 + lVar7) < puVar13);
          puVar11 = (undefined8 *)((long)puVar9 + uVar6 + uVar6 * uVar4);
        }
        else {
          uVar8 = 2;
        }
      }
      *puVar11 = 0;
      iVar5 = (int)puVar14[2] + uVar8;
      *(int *)(puVar14 + 2) = iVar5;
      *(int *)((long)puVar14 + 0x14) = iVar5;
      uVar4 = puVar14[3];
    }
    else {
      *param_3 = *puVar12;
      *puVar14 = 0;
      *(int *)((long)puVar14 + 0x14) = (int)puVar14[2];
      uVar4 = puVar14[3];
    }
    if (uVar4 == 0) {
      uVar4 = *puVar14;
    }
    else {
      puVar13 = puVar14 + 3;
      do {
        uVar4 = *puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *puVar13 = 0xffffffffffffffff;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 == 0xffffffffffffffff) {
        iVar5 = 1000;
        do {
          Yield();
          iVar5 = iVar5 + -1;
          do {
            uVar4 = *puVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
            if (bVar3) {
              *puVar13 = 0xffffffffffffffff;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        } while ((uVar4 == 0xffffffffffffffff) && (iVar5 != 0));
        if (iVar5 == 0) {
          while (uVar4 == 0xffffffffffffffff) {
            FUN__text__00405bf0();
            do {
              uVar4 = *puVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
              if (bVar3) {
                *puVar13 = 0xffffffffffffffff;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      uVar6 = puVar14[4];
      *puVar14 = uVar4;
      *(undefined4 *)(puVar14 + 4) = 0;
      *(int *)((long)puVar14 + 0x14) = *(int *)((long)puVar14 + 0x14) - (int)uVar6;
      puVar14[3] = 0;
    }
    if ((uVar4 == 0) && ((uint)puVar14[1] <= (uint)puVar14[2])) {
      lVar7 = param_2 + (ulong)param_4 * 8;
      param_3[1] = *(undefined8 *)(param_3[1] + 0x48);
      puVar13 = (ulong *)(lVar7 + 0x2d20);
      lVar7 = *(long *)(lVar7 + 0x2d20);
      uVar4 = 0;
      if (lVar7 != 0) {
        *(ulong **)(lVar7 + 0x50) = puVar14;
        uVar4 = *puVar13;
      }
      puVar14[9] = uVar4;
      *puVar13 = (ulong)puVar14;
      *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
    }
    return puVar12;
  }
  lVar7 = FUN__text__004053a0(param_1,param_2,param_3,1);
  if (lVar7 == 0) {
    return (undefined8 *)0x0;
  }
  puVar12 = (undefined8 *)FUN__text__004054d0(param_1,param_2,param_3,lVar7,param_4);
  return puVar12;
}


