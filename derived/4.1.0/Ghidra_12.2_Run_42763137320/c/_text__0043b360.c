/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043b360; name: FUN_.text__0043b360
 */


bool FUN__text__0043b360(long param_1,long *param_2,ulong *param_3,long *param_4,ulong *param_5)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  
  if (*(char *)(param_1 + 4) != '\0' && *param_4 != 0) {
    uVar4 = *(ushort *)(param_1 + 2);
    lVar10 = *param_2;
    plVar13 = (long *)(lVar10 + (ulong)uVar4 * 0x28);
    lVar11 = *plVar13;
    if (lVar11 != 0) {
      FUN__text__004360b8(lVar11);
      FUN__text__00400fc0(0x10,lVar11);
      *plVar13 = 0;
    }
    lVar10 = lVar10 + (ulong)uVar4 * 0x28;
    *(undefined4 *)(lVar10 + 0x10) = 0;
    *(byte *)(lVar10 + 0x18) = *(byte *)(lVar10 + 0x18) & 0xfe | 3 < *(byte *)(lVar10 + 0x18);
    *(short *)(lVar10 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar4;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  uVar6 = *param_3;
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar12 = (ulong)uVar5;
  if (uVar6 == 0) {
    if (0 < (int)uVar5) {
      iVar7 = -uVar5;
      do {
        lVar10 = *(long *)(param_1 + 8);
        uVar6 = uVar12 - 1 & 0xffffffff;
        *param_5 = *(ulong *)(lVar10 + uVar6 * 0x10);
        if (*param_4 != 0) {
          lVar11 = *param_2;
          uVar4 = *(ushort *)(lVar10 + uVar6 * 0x10 + 8);
          plVar13 = (long *)(lVar11 + (ulong)uVar4 * 0x28);
          lVar10 = *plVar13;
          if (lVar10 != 0) {
            FUN__text__004360b8(lVar10);
            FUN__text__00400fc0(0x10,lVar10);
            *plVar13 = 0;
          }
          lVar11 = lVar11 + (ulong)uVar4 * 0x28;
          *(undefined4 *)(lVar11 + 0x10) = 0;
          *(byte *)(lVar11 + 0x18) = *(byte *)(lVar11 + 0x18) & 0xfe | 3 < *(byte *)(lVar11 + 0x18);
          *(short *)(lVar11 + 0x20) = (short)param_2[2];
          *(ushort *)(param_2 + 2) = uVar4;
          uVar5 = *(uint *)(param_1 + 0x10);
          if (uVar12 < uVar5) {
            pvVar3 = (void *)(*(long *)(param_1 + 8) + uVar6 * 0x10);
            memmove(pvVar3,(void *)((long)pvVar3 + 0x10),(ulong)((iVar7 + uVar5) * 0x10));
            uVar5 = *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x10) = uVar5 - 1;
        }
        iVar7 = iVar7 + 1;
        bVar1 = 1 < uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar5 == 0) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN__text__00400fc0(0);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  else if (uVar5 != 0) {
    lVar10 = *(long *)(param_1 + 8);
    iVar7 = 0;
    do {
      uVar5 = iVar7 + ((uint)uVar12 >> 1);
      uVar9 = *(ulong *)(lVar10 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4)
                        );
      if (uVar9 == uVar6) {
        *param_5 = uVar6;
        if (*param_4 != 0) {
          lVar11 = *param_2;
          uVar4 = *(ushort *)(lVar10 + (long)(int)uVar5 * 0x10 + 8);
          plVar13 = (long *)(lVar11 + (ulong)uVar4 * 0x28);
          lVar10 = *plVar13;
          if (lVar10 != 0) {
            FUN__text__004360b8(lVar10);
            FUN__text__00400fc0(0x10,lVar10);
            *plVar13 = 0;
          }
          lVar11 = lVar11 + (ulong)uVar4 * 0x28;
          *(undefined4 *)(lVar11 + 0x10) = 0;
          *(byte *)(lVar11 + 0x18) = *(byte *)(lVar11 + 0x18) & 0xfe | 3 < *(byte *)(lVar11 + 0x18);
          *(short *)(lVar11 + 0x20) = (short)param_2[2];
          *(ushort *)(param_2 + 2) = uVar4;
          uVar5 = *(uint *)(param_1 + 0x10);
          if (uVar5 != 0) {
            uVar12 = *param_3;
            iVar7 = 0;
            lVar10 = *(long *)(param_1 + 8);
            uVar8 = uVar5;
            goto LAB__text__0043b620;
          }
        }
        break;
      }
      if (uVar9 < uVar6) {
        iVar7 = uVar5 + 1;
      }
      uVar5 = (uint)uVar12 - (uint)(uVar9 < uVar6);
      uVar12 = (ulong)(uVar5 >> 1);
    } while (1 < uVar5);
  }
  goto LAB__text__0043b684;
  while( true ) {
    if (uVar6 < uVar12) {
      iVar7 = uVar2 + 1;
    }
    uVar2 = uVar8 - (uVar6 < uVar12);
    uVar8 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__0043b620:
    uVar2 = iVar7 + (uVar8 >> 1);
    uVar6 = *(ulong *)(lVar10 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
    if (uVar6 == uVar12) {
      uVar5 = uVar5 - 1;
      if ((long)(int)uVar2 < (long)(ulong)uVar5) {
        pvVar3 = (void *)(lVar10 + (long)(int)uVar2 * 0x10);
        memmove(pvVar3,(void *)((long)pvVar3 + 0x10),
                (ulong)(((int)lVar10 + uVar5 * 0x10) - (int)pvVar3) & 0xfffffff0);
        uVar5 = *(int *)(param_1 + 0x10) - 1;
      }
      *(uint *)(param_1 + 0x10) = uVar5;
      break;
    }
  }
LAB__text__0043b684:
  *param_5 = 0;
  return *(char *)(param_1 + 4) == '\0' && *(int *)(param_1 + 0x10) == 0;
}


