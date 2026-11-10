/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de970; name: FUN_.text__004de970
 */


void FUN__text__004de970(long *param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  ulong __n;
  long lVar10;
  ulong uVar11;
  undefined1 local_70 [16];
  
  plVar4 = (long *)*param_2;
  if ((int)plVar4[1] < 1) {
    bVar8 = 0;
  }
  else {
    lVar10 = 0;
    bVar8 = 0;
    do {
      plVar4 = (long *)(*plVar4 + lVar10 * 0x30);
      lVar9 = plVar4[3];
      local_70 = FUN__text__004df940(*param_1,plVar4,lVar9,param_1 + 4);
      lVar9 = FUN__text__004dfb90(*param_1,local_70,plVar4,lVar9,param_1 + 4);
      local_70._0_8_ = lVar9;
      if (lVar9 != 0) {
        bVar1 = *(byte *)(plVar4 + 1);
        if (*(int *)(lVar9 + 0xb0) == 3) {
          uVar2 = *(ushort *)((long)plVar4 + 0x12);
          uVar3 = *(ushort *)(plVar4 + 2);
          if ((uint)uVar2 < (uint)uVar3) {
            if (bVar1 != 0) {
              __n = (ulong)(((uint)uVar3 - (uint)uVar2) * 4);
              if (bVar1 < 4) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                lVar9 = 0xc;
                do {
                  lVar6 = (ulong)uVar2 * 4;
                  memset((void *)(*plVar4 + (lVar9 + -0xc) * (ulong)*(ushort *)(plVar4 + 2) + lVar6)
                         ,0,__n);
                  memset((void *)(*plVar4 + (lVar9 + -8) * (ulong)*(ushort *)(plVar4 + 2) + lVar6),0
                         ,__n);
                  memset((void *)(*plVar4 + (lVar9 + -4) * (ulong)*(ushort *)(plVar4 + 2) + lVar6),0
                         ,__n);
                  memset((void *)(*plVar4 + lVar9 * (ulong)*(ushort *)(plVar4 + 2) + lVar6),0,__n);
                  uVar11 = uVar11 + 4;
                  lVar9 = lVar9 + 0x10;
                } while (((ulong)bVar1 & 0xfc) != uVar11);
              }
              uVar7 = (ulong)bVar1 & 3;
              if ((bVar1 & 3) != 0) {
                lVar9 = uVar11 << 2;
                do {
                  memset((void *)(*plVar4 + lVar9 * (ulong)*(ushort *)(plVar4 + 2) +
                                 (ulong)uVar2 * 4),0,__n);
                  lVar9 = lVar9 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              uVar3 = *(ushort *)(plVar4 + 2);
            }
            *(ushort *)((long)plVar4 + 0x12) = uVar3;
          }
        }
        else if (bVar8 <= bVar1) {
          bVar8 = bVar1;
        }
      }
      plVar4 = (long *)*param_2;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)plVar4[1]);
  }
  if (((undefined4 *)param_1[3] != (undefined4 *)0x0) &&
     (*(undefined4 *)param_1[3] = *(undefined4 *)(*param_1 + 0x20), *(int *)param_1[3] != 0)) {
    FUN__text__004df670(*param_1);
  }
  lVar10 = param_1[1];
  if (bVar8 == 0) {
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 0x12) = 0;
    }
    if ((*(char *)((long)param_1 + 0x2c) != '\0') && (param_1[2] != 0)) {
      *(undefined2 *)(param_1[2] + 0x12) = 0;
    }
  }
  else {
    *(undefined2 *)(lVar10 + 0x12) = *(undefined2 *)(lVar10 + 0x10);
    puVar5 = (undefined8 *)param_1[1];
    memset((void *)*puVar5,0,
           (ulong)*(ushort *)((long)puVar5 + 0x12) * (ulong)*(byte *)(puVar5 + 1) * 4);
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      *(undefined2 *)(param_1[2] + 0x12) = *(undefined2 *)(param_1[2] + 0x10);
      puVar5 = (undefined8 *)param_1[2];
      memset((void *)*puVar5,0,
             (ulong)*(ushort *)((long)puVar5 + 0x12) * (ulong)*(byte *)(puVar5 + 1) * 4);
    }
    FUN__text__004def70(*param_1,bVar8,param_1[1],param_1[2],param_3);
    FUN__text__004def70(*param_1 + 0x10,bVar8,param_1[1],param_1[2],param_3);
  }
  return;
}


