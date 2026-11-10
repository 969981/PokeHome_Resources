/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043a150; name: FUN_.text__0043a150
 */


bool FUN__text__0043a150(long param_1,long *param_2,ulong *param_3,long *param_4,ulong *param_5)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  void *pvVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  uVar7 = *param_3;
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulong)uVar6;
  if (uVar7 == 0) {
    if (0 < (int)uVar6) {
      iVar8 = -uVar6;
      do {
        uVar10 = uVar14 - 1 & 0xffffffff;
        puVar3 = (ulong *)(*(long *)(param_1 + 8) + uVar10 * 0x20);
        *param_5 = *puVar3;
        uVar7 = FUN__text__0043a440(puVar3,param_2,param_3 + 1,param_4,param_5 + 1);
        if ((uVar7 & 1) != 0) {
          FUN__text__00438520(puVar3);
          uVar6 = *(uint *)(param_1 + 0x10);
          if (uVar14 < uVar6) {
            pvVar4 = (void *)(*(long *)(param_1 + 8) + uVar10 * 0x20);
            memmove(pvVar4,(void *)((long)pvVar4 + 0x20),(ulong)((iVar8 + uVar6) * 0x20));
            uVar6 = *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x10) = uVar6 - 1;
        }
        iVar8 = iVar8 + 1;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar1);
    }
  }
  else if (uVar6 != 0) {
    iVar8 = 0;
    do {
      uVar6 = iVar8 + ((uint)uVar14 >> 1);
      uVar10 = *(ulong *)(*(long *)(param_1 + 8) +
                         (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5));
      if (uVar10 == uVar7) {
        lVar11 = *(long *)(param_1 + 8) + (long)(int)uVar6 * 0x20;
        *param_5 = uVar7;
        uVar14 = FUN__text__0043a440(lVar11,param_2,param_3 + 1,param_4,param_5 + 1);
        if ((uVar14 & 1) != 0) {
          FUN__text__00438520(lVar11);
          uVar6 = *(uint *)(param_1 + 0x10);
          if (uVar6 != 0) {
            iVar8 = 0;
            uVar14 = *param_3;
            lVar11 = *(long *)(param_1 + 8);
            uVar9 = uVar6;
            goto LAB__text__0043a2c0;
          }
        }
        break;
      }
      if (uVar10 < uVar7) {
        iVar8 = uVar6 + 1;
      }
      uVar6 = (uint)uVar14 - (uint)(uVar10 < uVar7);
      uVar14 = (ulong)(uVar6 >> 1);
    } while (1 < uVar6);
  }
  goto LAB__text__0043a324;
  while( true ) {
    if (uVar7 < uVar14) {
      iVar8 = uVar2 + 1;
    }
    uVar2 = uVar9 - (uVar7 < uVar14);
    uVar9 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__0043a2c0:
    uVar2 = iVar8 + (uVar9 >> 1);
    uVar7 = *(ulong *)(lVar11 + (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5));
    if (uVar7 == uVar14) {
      uVar6 = uVar6 - 1;
      if ((long)(int)uVar2 < (long)(ulong)uVar6) {
        pvVar4 = (void *)(lVar11 + (long)(int)uVar2 * 0x20);
        memmove(pvVar4,(void *)((long)pvVar4 + 0x20),
                (ulong)(((int)lVar11 + uVar6 * 0x20) - (int)pvVar4) & 0xffffffe0);
        uVar6 = *(int *)(param_1 + 0x10) - 1;
      }
      *(uint *)(param_1 + 0x10) = uVar6;
      break;
    }
  }
LAB__text__0043a324:
  *param_5 = 0;
  if (((((*param_3 == 0) && ((int)param_3[1] == 0)) && ((int)param_3[2] == 0)) &&
      (((char)param_3[3] == -1 && ((char)param_3[4] == -1)))) &&
     ((param_3[5] == 0 && ((*(char *)(param_1 + 4) != '\0' && (*param_4 != 0)))))) {
    uVar5 = *(ushort *)(param_1 + 2);
    lVar11 = *param_2;
    plVar13 = (long *)(lVar11 + (ulong)uVar5 * 0x28);
    lVar12 = *plVar13;
    if (lVar12 != 0) {
      FUN__text__004360b8(lVar12);
      FUN__text__00400fc0(0x10,lVar12);
      *plVar13 = 0;
    }
    lVar11 = lVar11 + (ulong)uVar5 * 0x28;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(byte *)(lVar11 + 0x18) = *(byte *)(lVar11 + 0x18) & 0xfe | 3 < *(byte *)(lVar11 + 0x18);
    *(short *)(lVar11 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar5;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar8 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN__text__00400fc0(0);
      iVar8 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return *(char *)(param_1 + 4) == '\0' && iVar8 == 0;
}


