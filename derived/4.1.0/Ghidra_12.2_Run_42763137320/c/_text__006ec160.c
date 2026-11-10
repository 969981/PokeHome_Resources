/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec160; name: FUN_.text__006ec160
 */


undefined4 FUN__text__006ec160(long param_1,ulong param_2,uint param_3,char *param_4)

{
  bool bVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  lVar8 = *(long *)(param_1 + *(long *)((param_2 & 0xffffffff) * 8 + 0x77ea08));
  if (lVar8 != 0) {
    if ((int)param_3 < 6) {
      lVar9 = *(long *)(lVar8 + *(long *)((ulong)param_3 * 8 + 0x77ea38));
    }
    else {
      if (*(long *)(lVar8 + 0x58) == 0) {
        return 0xffffffff;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0x58) + *(long *)((ulong)(param_3 - 6) * 8 + 0x7248e0));
    }
    if (lVar9 == 0) {
      return 0xffffffff;
    }
    if (param_4 == (char *)0x0) {
      sVar4 = 0;
    }
    else {
      sVar4 = strlen(param_4);
    }
    uVar6 = (ulong)*(ushort *)(lVar9 + 0xc);
    puVar10 = (uint *)((int *)(lVar9 + 8) + uVar6 * 4);
    uVar2 = *puVar10;
    if (*(int *)(lVar9 + 8) < (int)*puVar10) {
      do {
        uVar7 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar7 < sVar4) {
          uVar7 = (ulong)((byte)param_4[sVar4 + ~uVar7] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar7 = 0;
        }
        uVar6 = (ulong)*(ushort *)(lVar9 + 8 + uVar6 * 0x10 + uVar7 * 2 + 4);
        puVar10 = (uint *)(lVar9 + 8 + uVar6 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar10;
        uVar2 = *puVar10;
      } while (bVar1);
    }
    uVar6 = (ulong)**(ushort **)(puVar10 + 2);
    __n = sVar4;
    if (uVar6 <= sVar4) {
      __n = uVar6;
    }
    iVar3 = memcmp(*(ushort **)(puVar10 + 2) + 1,param_4,__n);
    iVar5 = (int)((ulong)((long)puVar10 + (-0x18 - lVar9)) >> 4);
    if (sVar4 != uVar6 || iVar3 != 0) {
      iVar5 = -1;
    }
    if (iVar5 < 0) {
      return 0xffffffff;
    }
    if ((int)param_3 < 6) {
      if (param_3 == 0) {
        iVar3 = 0;
        goto LAB__text__006ec318;
      }
      iVar3 = *(int *)(lVar8 + *(long *)((ulong)param_3 * 8 + 0x77ea68));
    }
    else {
      if (*(long *)(lVar8 + 0x58) == 0) {
        return 0xffffffff;
      }
      iVar3 = *(int *)(*(long *)(lVar8 + 0x58) + *(long *)((ulong)(param_3 - 6) * 8 + 0x724c60));
    }
    if (-1 < iVar3) {
LAB__text__006ec318:
      return *(undefined4 *)(*(long *)(lVar8 + 0x38) + (ulong)(uint)(iVar3 + iVar5) * 4);
    }
  }
  return 0xffffffff;
}


