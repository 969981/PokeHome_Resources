/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043b020; name: FUN_.text__0043b020
 */


bool FUN__text__0043b020(long param_1,long *param_2,byte *param_3,long *param_4,byte *param_5)

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
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  
  bVar3 = *param_3;
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar15 = (ulong)uVar9;
  if (bVar3 == 0xff) {
    if (0 < (int)uVar9) {
      iVar16 = -uVar9;
      do {
        lVar12 = *(long *)(param_1 + 8);
        uVar11 = uVar15 - 1 & 0xffffffff;
        pbVar7 = (byte *)(lVar12 + uVar11 * 0x18);
        *param_5 = *pbVar7;
        uVar8 = FUN__text__0043b360(pbVar7,param_2,param_3 + 8,param_4,param_5 + 8);
        if ((uVar8 & 1) != 0) {
          lVar13 = lVar12 + uVar11 * 0x18;
          plVar14 = (long *)(lVar13 + 8);
          *(undefined1 *)(lVar13 + 4) = 0;
          if (*plVar14 != 0) {
            lVar12 = lVar12 + uVar11 * 0x18;
            *(undefined4 *)(lVar12 + 0x10) = 0;
            FUN__text__00400fc0(0);
            *plVar14 = 0;
            *(undefined4 *)(lVar12 + 0x14) = 0;
          }
          uVar9 = *(uint *)(param_1 + 0x10);
          if (uVar15 < uVar9) {
            __dest = (void *)(*(long *)(param_1 + 8) + uVar11 * 0x18);
            memmove(__dest,(void *)((long)__dest + 0x18),(ulong)((iVar16 + uVar9) * 0x18));
            uVar9 = *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x10) = uVar9 - 1;
        }
        iVar16 = iVar16 + 1;
        bVar1 = 1 < uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar1);
    }
  }
  else if (uVar9 != 0) {
    lVar12 = *(long *)(param_1 + 8);
    iVar16 = 0;
    do {
      iVar2 = iVar16 + ((uint)uVar15 >> 1);
      pbVar7 = (byte *)(lVar12 + (long)iVar2 * 0x18);
      bVar4 = *pbVar7;
      if (bVar4 == bVar3) {
        *param_5 = bVar3;
        uVar15 = FUN__text__0043b360(pbVar7,param_2,param_3 + 8,param_4,param_5 + 8);
        if ((uVar15 & 1) != 0) {
          lVar13 = lVar12 + (long)iVar2 * 0x18;
          plVar14 = (long *)(lVar13 + 8);
          *(undefined1 *)(lVar13 + 4) = 0;
          if (*plVar14 != 0) {
            lVar12 = lVar12 + (long)iVar2 * 0x18;
            *(undefined4 *)(lVar12 + 0x10) = 0;
            FUN__text__00400fc0(0);
            *plVar14 = 0;
            *(undefined4 *)(lVar12 + 0x14) = 0;
          }
          uVar9 = *(uint *)(param_1 + 0x10);
          if (uVar9 != 0) {
            iVar16 = 0;
            bVar3 = *param_3;
            uVar10 = uVar9;
            goto LAB__text__0043b1f4;
          }
        }
        break;
      }
      if (bVar4 < bVar3) {
        iVar16 = iVar2 + 1;
      }
      uVar9 = (uint)uVar15 - (uint)(bVar4 < bVar3);
      uVar15 = (ulong)(uVar9 >> 1);
    } while (1 < uVar9);
  }
  goto LAB__text__0043b254;
  while( true ) {
    if (bVar4 < bVar3) {
      iVar16 = iVar2 + 1;
    }
    uVar6 = uVar10 - (bVar4 < bVar3);
    uVar10 = uVar6 >> 1;
    if (uVar6 < 2) break;
LAB__text__0043b1f4:
    iVar2 = iVar16 + (uVar10 >> 1);
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
  }
LAB__text__0043b254:
  *param_5 = 0xff;
  if ((((*param_3 == 0xff) && (*(long *)(param_3 + 8) == 0)) && (*(char *)(param_1 + 4) != '\0')) &&
     (*param_4 != 0)) {
    uVar5 = *(ushort *)(param_1 + 2);
    lVar12 = *param_2;
    plVar14 = (long *)(lVar12 + (ulong)uVar5 * 0x28);
    lVar13 = *plVar14;
    if (lVar13 != 0) {
      FUN__text__004360b8(lVar13);
      FUN__text__00400fc0(0x10,lVar13);
      *plVar14 = 0;
    }
    lVar12 = lVar12 + (ulong)uVar5 * 0x28;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(byte *)(lVar12 + 0x18) = *(byte *)(lVar12 + 0x18) & 0xfe | 3 < *(byte *)(lVar12 + 0x18);
    *(short *)(lVar12 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar5;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar16 = *(int *)(param_1 + 0x10);
  if (iVar16 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar16 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN__text__00400fc0(0);
      iVar16 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return *(char *)(param_1 + 4) == '\0' && iVar16 == 0;
}


