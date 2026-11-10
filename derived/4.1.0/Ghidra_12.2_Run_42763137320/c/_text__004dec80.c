/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dec80; name: FUN_.text__004dec80
 */


void FUN__text__004dec80(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong __n;
  long lVar13;
  undefined1 local_70 [16];
  
  piVar5 = (int *)*param_2;
  if (*piVar5 < 1) {
    bVar9 = 0;
  }
  else {
    lVar13 = 0;
    bVar9 = 0;
    do {
      plVar11 = *(long **)(*(long *)(piVar5 + 2) + lVar13 * 8);
      uVar12 = *(undefined8 *)(*(long *)(piVar5 + 4) + lVar13 * 8);
      local_70 = FUN__text__004df940(*param_1,plVar11,uVar12,param_1 + 4);
      lVar4 = FUN__text__004dfb90(*param_1,local_70,plVar11,uVar12,param_1 + 4);
      local_70._0_8_ = lVar4;
      if (lVar4 != 0) {
        bVar1 = *(byte *)(plVar11 + 1);
        if (*(int *)(lVar4 + 0xb0) == 3) {
          uVar2 = *(ushort *)((long)plVar11 + 0x12);
          uVar3 = *(ushort *)(plVar11 + 2);
          if ((uint)uVar2 < (uint)uVar3) {
            if (bVar1 != 0) {
              __n = (ulong)(((uint)uVar3 - (uint)uVar2) * 4);
              if (bVar1 < 4) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                lVar4 = 0xc;
                do {
                  lVar7 = (ulong)uVar2 * 4;
                  memset((void *)(*plVar11 + (lVar4 + -0xc) * (ulong)*(ushort *)(plVar11 + 2) +
                                 lVar7),0,__n);
                  memset((void *)(*plVar11 + (lVar4 + -8) * (ulong)*(ushort *)(plVar11 + 2) + lVar7)
                         ,0,__n);
                  memset((void *)(*plVar11 + (lVar4 + -4) * (ulong)*(ushort *)(plVar11 + 2) + lVar7)
                         ,0,__n);
                  memset((void *)(*plVar11 + lVar4 * (ulong)*(ushort *)(plVar11 + 2) + lVar7),0,__n)
                  ;
                  uVar8 = uVar8 + 4;
                  lVar4 = lVar4 + 0x10;
                } while (((ulong)bVar1 & 0xfc) != uVar8);
              }
              uVar10 = (ulong)bVar1 & 3;
              if ((bVar1 & 3) != 0) {
                lVar4 = uVar8 << 2;
                do {
                  memset((void *)(*plVar11 + lVar4 * (ulong)*(ushort *)(plVar11 + 2) +
                                 (ulong)uVar2 * 4),0,__n);
                  lVar4 = lVar4 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              uVar3 = *(ushort *)(plVar11 + 2);
            }
            *(ushort *)((long)plVar11 + 0x12) = uVar3;
          }
        }
        else if (bVar9 <= bVar1) {
          bVar9 = bVar1;
        }
      }
      piVar5 = (int *)*param_2;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *piVar5);
  }
  if (((undefined4 *)param_1[3] != (undefined4 *)0x0) &&
     (*(undefined4 *)param_1[3] = *(undefined4 *)(*param_1 + 0x20), *(int *)param_1[3] != 0)) {
    FUN__text__004df670(*param_1);
  }
  lVar13 = param_1[1];
  if (bVar9 == 0) {
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 0x12) = 0;
    }
    if ((*(char *)((long)param_1 + 0x2c) != '\0') && (param_1[2] != 0)) {
      *(undefined2 *)(param_1[2] + 0x12) = 0;
    }
  }
  else {
    *(undefined2 *)(lVar13 + 0x12) = *(undefined2 *)(lVar13 + 0x10);
    puVar6 = (undefined8 *)param_1[1];
    memset((void *)*puVar6,0,
           (ulong)*(ushort *)((long)puVar6 + 0x12) * (ulong)*(byte *)(puVar6 + 1) * 4);
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      *(undefined2 *)(param_1[2] + 0x12) = *(undefined2 *)(param_1[2] + 0x10);
      puVar6 = (undefined8 *)param_1[2];
      memset((void *)*puVar6,0,
             (ulong)*(ushort *)((long)puVar6 + 0x12) * (ulong)*(byte *)(puVar6 + 1) * 4);
    }
    FUN__text__004df120(*param_1,bVar9,param_1[1],param_1[2],param_3);
    FUN__text__004df120(*param_1 + 0x10,bVar9,param_1[1],param_1[2],param_3);
  }
  return;
}


