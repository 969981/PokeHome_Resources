/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ac10; name: FUN_.text__0043ac10
 */


bool FUN__text__0043ac10(long param_1,long *param_2,byte *param_3,long *param_4,byte *param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  void *__dest;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  
  bVar3 = *param_3;
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar20 = (ulong)uVar9;
  if (bVar3 == 0xff) {
    if (0 < (int)uVar9) {
      do {
        lVar13 = *(long *)(param_1 + 8);
        uVar15 = uVar20 - 1 & 0xffffffff;
        pbVar7 = (byte *)(lVar13 + uVar15 * 0x18);
        *param_5 = *pbVar7;
        uVar8 = FUN__text__0043b020(pbVar7,param_2,param_3 + 8,param_4,param_5 + 8);
        if ((uVar8 & 1) != 0) {
          lVar16 = lVar13 + uVar15 * 0x18;
          puVar17 = (uint *)(lVar16 + 0x10);
          uVar9 = *puVar17;
          plVar14 = (long *)(lVar16 + 8);
          if (0 < (int)uVar9) {
            uVar8 = (ulong)uVar9 + 1;
            do {
              lVar16 = *plVar14;
              uVar10 = (ulong)((int)uVar8 - 2);
              lVar18 = lVar16 + uVar10 * 0x18;
              plVar19 = (long *)(lVar18 + 8);
              *(undefined1 *)(lVar18 + 4) = 0;
              if (*plVar19 != 0) {
                lVar16 = lVar16 + uVar10 * 0x18;
                *(undefined4 *)(lVar16 + 0x10) = 0;
                FUN__text__00400fc0(0);
                *plVar19 = 0;
                *(undefined4 *)(lVar16 + 0x14) = 0;
              }
              uVar8 = uVar8 - 1;
            } while (1 < uVar8);
          }
          if (*plVar14 != 0) {
            *puVar17 = 0;
            FUN__text__00400fc0(0);
            *plVar14 = 0;
            *(undefined4 *)(lVar13 + uVar15 * 0x18 + 0x14) = 0;
          }
          *(undefined1 *)(lVar13 + uVar15 * 0x18 + 4) = 0;
          uVar9 = *(uint *)(param_1 + 0x10);
          if (uVar20 < uVar9) {
            __dest = (void *)(*(long *)(param_1 + 8) + uVar15 * 0x18);
            memmove(__dest,(void *)((long)__dest + 0x18),(ulong)((uVar9 - (int)uVar20) * 0x18));
            uVar9 = *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x10) = uVar9 - 1;
        }
        bVar1 = 1 < (long)uVar20;
        uVar20 = uVar20 - 1;
      } while (bVar1);
    }
  }
  else if (uVar9 != 0) {
    lVar13 = *(long *)(param_1 + 8);
    iVar11 = 0;
    while( true ) {
      iVar2 = iVar11 + ((uint)uVar20 >> 1);
      pbVar7 = (byte *)(lVar13 + (long)iVar2 * 0x18);
      bVar4 = *pbVar7;
      if (bVar4 == bVar3) break;
      if (bVar4 < bVar3) {
        iVar11 = iVar2 + 1;
      }
      uVar9 = (uint)uVar20 - (uint)(bVar4 < bVar3);
      uVar20 = (ulong)(uVar9 >> 1);
      if (uVar9 < 2) goto LAB__text__0043af10;
    }
    *param_5 = bVar3;
    uVar20 = FUN__text__0043b020(pbVar7,param_2,param_3 + 8,param_4,param_5 + 8);
    if ((uVar20 & 1) == 0) goto LAB__text__0043af10;
    lVar16 = lVar13 + (long)iVar2 * 0x18;
    puVar17 = (uint *)(lVar16 + 0x10);
    uVar9 = *puVar17;
    plVar14 = (long *)(lVar16 + 8);
    if (0 < (int)uVar9) {
      uVar20 = (ulong)uVar9 + 1;
      do {
        lVar16 = *plVar14;
        uVar8 = (ulong)((int)uVar20 - 2);
        lVar18 = lVar16 + uVar8 * 0x18;
        plVar19 = (long *)(lVar18 + 8);
        *(undefined1 *)(lVar18 + 4) = 0;
        if (*plVar19 != 0) {
          lVar16 = lVar16 + uVar8 * 0x18;
          *(undefined4 *)(lVar16 + 0x10) = 0;
          FUN__text__00400fc0(0);
          *plVar19 = 0;
          *(undefined4 *)(lVar16 + 0x14) = 0;
        }
        uVar20 = uVar20 - 1;
      } while (1 < uVar20);
    }
    if (*plVar14 != 0) {
      *puVar17 = 0;
      FUN__text__00400fc0(0);
      *plVar14 = 0;
      *(undefined4 *)(lVar13 + (long)iVar2 * 0x18 + 0x14) = 0;
    }
    *(undefined1 *)(lVar13 + (long)iVar2 * 0x18 + 4) = 0;
    uVar9 = *(uint *)(param_1 + 0x10);
    if (uVar9 == 0) goto LAB__text__0043af10;
    iVar11 = 0;
    bVar3 = *param_3;
    uVar12 = uVar9;
    do {
      iVar2 = iVar11 + (uVar12 >> 1);
      pbVar7 = (byte *)(*(long *)(param_1 + 8) + (long)iVar2 * 0x18);
      bVar4 = *pbVar7;
      if (bVar4 == bVar3) {
        uVar9 = uVar9 - 1;
        if ((long)iVar2 < (long)(ulong)uVar9) {
          memmove(pbVar7,pbVar7 + 0x18,
                  (ulong)(((int)*(long *)(param_1 + 8) + uVar9 * 0x18) - (int)pbVar7));
          uVar9 = *(int *)(param_1 + 0x10) - 1;
        }
        *(uint *)(param_1 + 0x10) = uVar9;
        break;
      }
      if (bVar4 < bVar3) {
        iVar11 = iVar2 + 1;
      }
      uVar6 = uVar12 - (bVar4 < bVar3);
      uVar12 = uVar6 >> 1;
    } while (1 < uVar6);
  }
LAB__text__0043af10:
  *param_5 = 0xff;
  if ((((*param_3 == 0xff) && (param_3[8] == 0xff)) && (*(long *)(param_3 + 0x10) == 0)) &&
     ((*(char *)(param_1 + 6) != '\0' && (*param_4 != 0)))) {
    uVar5 = *(ushort *)(param_1 + 4);
    lVar13 = *param_2;
    plVar14 = (long *)(lVar13 + (ulong)uVar5 * 0x28);
    lVar16 = *plVar14;
    if (lVar16 != 0) {
      FUN__text__004360b8(lVar16);
      FUN__text__00400fc0(0x10,lVar16);
      *plVar14 = 0;
    }
    lVar13 = lVar13 + (ulong)uVar5 * 0x28;
    *(undefined4 *)(lVar13 + 0x10) = 0;
    *(byte *)(lVar13 + 0x18) = *(byte *)(lVar13 + 0x18) & 0xfe | 3 < *(byte *)(lVar13 + 0x18);
    *(short *)(lVar13 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar5;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar11 = *(int *)(param_1 + 0x10);
  if (iVar11 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar11 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN__text__00400fc0(0);
      iVar11 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return *(char *)(param_1 + 6) == '\0' && iVar11 == 0;
}


