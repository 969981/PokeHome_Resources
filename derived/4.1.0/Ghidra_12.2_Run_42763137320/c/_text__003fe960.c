/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe960; name: FUN_.text__003fe960
 */


void FUN__text__003fe960(long param_1,int param_2,uint param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  ulong *puVar14;
  
  uVar6 = 0;
  if (param_3 != 0) {
    uVar6 = (param_2 - 1U) / param_3;
  }
  lVar1 = param_1 + 0x38;
  iVar4 = param_3 + param_3 * uVar6;
  do {
    if ((iVar4 - 1U < *(uint *)(param_1 + 0x344)) &&
       (uVar7 = FUN__text__003ff320(lVar1,iVar4), uVar7 != 0)) {
      puVar8 = (ulong *)FUN__text__00400f80(7,0x28);
      if (puVar8 != (ulong *)0x0) {
        *puVar8 = 0;
        puVar8[1] = uVar7;
        puVar8[2] = 0;
        *(int *)((long)puVar8 + 0x1c) = iVar4;
        *(undefined4 *)(puVar8 + 4) = 0xffffffff;
        *(undefined2 *)((long)puVar8 + 0x24) = 0;
        *(int *)(puVar8 + 3) = param_2;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar4;
        *param_4 = (long)puVar8;
LAB__text__003feba0:
        *(short *)((long)puVar8 + 0x24) = *(short *)((long)puVar8 + 0x24) + 1;
        return;
      }
      FUN__text__003ff460(lVar1,(int)uVar7 - *(int *)(param_1 + 0x338),iVar4);
    }
    *param_4 = 0;
    lVar10 = *(long *)(param_1 + 0x18);
    *param_4 = lVar10;
    if (lVar10 == 0) {
      FUN__text__003fe0e8(*(undefined8 *)(param_1 + 0x360));
      return;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar10 + 0x18);
    lVar10 = *(long *)(param_1 + 0x18);
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar10 + 0x10);
      if (lVar12 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      *(long *)(param_1 + 0x18) = lVar12;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
    *(undefined8 *)(*param_4 + 0x10) = 0;
    puVar8 = (ulong *)*param_4;
    iVar9 = *(int *)((long)puVar8 + 0x1c);
    if (iVar9 == iVar4) goto LAB__text__003feba0;
    uVar6 = (uint)puVar8[4];
    if (uVar6 != 0xffffffff) {
      uVar3 = *(uint *)(param_1 + 0x30);
      iVar9 = 0;
      iVar11 = uVar3 - 1;
      iVar13 = iVar11;
      do {
        while( true ) {
          iVar5 = iVar13 - iVar9;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          uVar2 = iVar9 + (iVar5 >> 1);
          puVar14 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8);
          if (uVar6 < (uint)puVar14[4]) break;
          if (uVar6 <= (uint)puVar14[4]) {
            if (*puVar14 < *puVar8) break;
            if (*puVar14 <= *puVar8) {
              if (puVar8[1] < puVar14[1]) break;
              if (puVar8[1] <= puVar14[1]) {
                if (uVar2 + 1 < uVar3) {
                  __dest = (void *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8);
                  memmove(__dest,(void *)((long)__dest + 8),(ulong)((uVar3 + ~uVar2) * 8));
                  iVar11 = *(int *)(param_1 + 0x30) + -1;
                }
                *(int *)(param_1 + 0x30) = iVar11;
                goto LAB__text__003fe9b0;
              }
            }
          }
          iVar9 = uVar2 + 1;
          if (iVar13 < iVar9) goto LAB__text__003fe9b0;
        }
        iVar13 = uVar2 - 1;
      } while (iVar9 <= iVar13);
LAB__text__003fe9b0:
      *(undefined4 *)(puVar8 + 4) = 0xffffffff;
      puVar8 = (ulong *)*param_4;
      iVar9 = *(int *)((long)puVar8 + 0x1c);
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar9;
    FUN__text__003ff460(lVar1,(int)puVar8[1] - *(int *)(param_1 + 0x338),
                        *(undefined4 *)((long)puVar8 + 0x1c));
    FUN__text__00400fc0(7,puVar8);
    FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x360));
    *param_4 = 0;
  } while( true );
}


