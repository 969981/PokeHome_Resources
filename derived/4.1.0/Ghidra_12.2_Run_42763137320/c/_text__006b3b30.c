/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b3b30; name: FUN_.text__006b3b30
 */


void FUN__text__006b3b30(long param_1,int param_2,void *param_3,int param_4,uint param_5)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0xa8);
  if (lVar10 == 0) {
    puVar4 = (undefined4 *)FUN__text__006a0f04(param_4 + 0x20);
    *puVar4 = 0x31647375;
    puVar4[1] = param_4 + 0x20;
    *(undefined2 *)(puVar4 + 2) = 1;
    *(undefined8 *)(puVar4 + 3) = 0xc00000000;
    puVar4[5] = 0x30001;
    *(undefined8 *)(puVar4 + 6) = 0x800010000;
    *(undefined4 **)(param_1 + 0xa8) = puVar4;
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
    memcpy(puVar4 + 8,param_3,(long)param_4);
    goto LAB__text__006b3c40;
  }
  if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
    iVar5 = *(int *)(param_1 + 0x60);
    lVar10 = 0;
LAB__text__006b3c18:
    if (iVar5 != 0) goto LAB__text__006b3c1c;
    FUN__text__006b3d10(param_1,param_3,param_4);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x60);
    if (((*(byte *)(param_1 + 0x5c) >> 6 & 1) == 0) || (iVar5 == 0)) goto LAB__text__006b3c18;
    piVar2 = (int *)(lVar10 + 0xc +
                    (ulong)(*(int *)((ulong)*(uint *)(lVar10 + 0x10) + lVar10 + 0xc + 4) +
                           *(uint *)(lVar10 + 0x10)));
    if (*piVar2 == 0x15) {
      iVar5 = param_2 + -9;
      if (param_2 < 0x10) {
        iVar5 = param_2;
      }
      if (-1 < *(char *)((long)piVar2 + (long)iVar5 + 4)) {
        return;
      }
    }
LAB__text__006b3c1c:
    FUN__text__006b3e70(param_1,param_3,param_4,param_5 & 1);
  }
  if (lVar10 != 0) {
    FUN__text__006a0f24(lVar10);
  }
LAB__text__006b3c40:
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
  lVar10 = *(long *)(param_1 + 0xa8);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x16) == '\x03')) {
    lVar1 = lVar10 + 0xc;
    puVar6 = (uint *)(lVar10 + 0x10);
    lVar10 = lVar1 + (ulong)*puVar6;
    uVar7 = (ulong)*(ushort *)(lVar10 + 2);
    if (uVar7 != 0) {
      uVar8 = 0;
      piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar10 + 4) + *puVar6));
      do {
        uVar9 = (ulong)(*(int *)((long)puVar6 + uVar8 * 4 + (ulong)*puVar6) + *puVar6);
        *(uint *)(param_1 + 0x60) =
             *(uint *)(param_1 + 0x60) | 1 << (ulong)(*(uint *)(lVar1 + uVar9) & 0x1f);
        if (*piVar2 == 0x15) {
          iVar3 = *(int *)(lVar1 + uVar9);
          iVar5 = iVar3 + -9;
          if (iVar3 < 0x10) {
            iVar5 = iVar3;
          }
          *(char *)((long)piVar2 + (long)iVar5 + 4) = (char)uVar8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
  }
  return;
}


