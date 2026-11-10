/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043a440; name: FUN_.text__0043a440
 */


bool FUN__text__0043a440(long param_1,long *param_2,uint *param_3,long *param_4,uint *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  ulong uVar7;
  void *__dest;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  
  uVar8 = *param_3;
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar21 = (ulong)uVar3;
  if (uVar8 == 0) {
    if (0 < (int)uVar3) {
      do {
        lVar15 = *(long *)(param_1 + 0x10);
        uVar24 = uVar21 - 1 & 0xffffffff;
        puVar6 = (uint *)(lVar15 + uVar24 * 0x18);
        *param_5 = *puVar6;
        uVar7 = FUN__text__0043a930(puVar6,param_2,param_3 + 2,param_4,param_5 + 2);
        if ((uVar7 & 1) != 0) {
          lVar20 = lVar15 + uVar24 * 0x18;
          puVar6 = (uint *)(lVar20 + 0x10);
          uVar8 = *puVar6;
          plVar23 = (long *)(lVar20 + 8);
          uVar7 = (ulong)uVar8;
          if (0 < (int)uVar8) {
            do {
              lVar13 = *plVar23;
              uVar9 = uVar7 - 1 & 0xffffffff;
              lVar20 = lVar13 + uVar9 * 0x18;
              puVar10 = (uint *)(lVar20 + 0x10);
              uVar8 = *puVar10;
              plVar19 = (long *)(lVar20 + 8);
              uVar22 = (ulong)uVar8;
              if (0 < (int)uVar8) {
                do {
                  lVar20 = *plVar19;
                  uVar26 = uVar22 - 1 & 0xffffffff;
                  lVar27 = lVar20 + uVar26 * 0x18;
                  puVar28 = (uint *)(lVar27 + 0x10);
                  uVar8 = *puVar28;
                  plVar16 = (long *)(lVar27 + 8);
                  if (0 < (int)uVar8) {
                    uVar25 = (ulong)uVar8 + 1;
                    do {
                      lVar27 = *plVar16;
                      uVar11 = (ulong)((int)uVar25 - 2);
                      lVar17 = lVar27 + uVar11 * 0x18;
                      plVar18 = (long *)(lVar17 + 8);
                      *(undefined1 *)(lVar17 + 4) = 0;
                      if (*plVar18 != 0) {
                        lVar27 = lVar27 + uVar11 * 0x18;
                        *(undefined4 *)(lVar27 + 0x10) = 0;
                        FUN__text__00400fc0(0);
                        *plVar18 = 0;
                        *(undefined4 *)(lVar27 + 0x14) = 0;
                      }
                      uVar25 = uVar25 - 1;
                    } while (1 < uVar25);
                  }
                  if (*plVar16 != 0) {
                    *puVar28 = 0;
                    FUN__text__00400fc0(0);
                    *plVar16 = 0;
                    *(undefined4 *)(lVar20 + uVar26 * 0x18 + 0x14) = 0;
                  }
                  *(undefined1 *)(lVar20 + uVar26 * 0x18 + 4) = 0;
                  bVar1 = 1 < (long)uVar22;
                  uVar22 = uVar22 - 1;
                } while (bVar1);
              }
              if (*plVar19 != 0) {
                *puVar10 = 0;
                FUN__text__00400fc0(0);
                *plVar19 = 0;
                *(undefined4 *)(lVar13 + uVar9 * 0x18 + 0x14) = 0;
              }
              *(undefined1 *)(lVar13 + uVar9 * 0x18 + 6) = 0;
              bVar1 = 1 < uVar7;
              uVar7 = uVar7 - 1;
            } while (bVar1);
          }
          if (*plVar23 != 0) {
            *puVar6 = 0;
            FUN__text__00400fc0(0);
            *plVar23 = 0;
            *(undefined4 *)(lVar15 + uVar24 * 0x18 + 0x14) = 0;
          }
          *(undefined1 *)(lVar15 + uVar24 * 0x18 + 6) = 0;
          uVar8 = *(uint *)(param_1 + 0x18);
          if (uVar21 < uVar8) {
            __dest = (void *)(*(long *)(param_1 + 0x10) + uVar24 * 0x18);
            memmove(__dest,(void *)((long)__dest + 0x18),(ulong)((uVar8 - (int)uVar21) * 0x18));
            uVar8 = *(uint *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = uVar8 - 1;
        }
        bVar1 = 1 < (long)uVar21;
        uVar21 = uVar21 - 1;
      } while (bVar1);
    }
  }
  else if (uVar3 != 0) {
    lVar15 = *(long *)(param_1 + 0x10);
    iVar12 = 0;
LAB__text__0043a494:
    iVar2 = iVar12 + ((uint)uVar21 >> 1);
    puVar6 = (uint *)(lVar15 + (long)iVar2 * 0x18);
    uVar3 = *puVar6;
    if (uVar3 != uVar8) goto code_r0x0043a4ac;
    *param_5 = uVar8;
    uVar21 = FUN__text__0043a930(puVar6,param_2,param_3 + 2,param_4,param_5 + 2);
    if ((uVar21 & 1) != 0) {
      lVar20 = lVar15 + (long)iVar2 * 0x18;
      puVar6 = (uint *)(lVar20 + 0x10);
      uVar8 = *puVar6;
      plVar23 = (long *)(lVar20 + 8);
      if (0 < (int)uVar8) {
        uVar21 = (ulong)uVar8 + 1;
        do {
          FUN__text__00438750(*plVar23 + (ulong)((int)uVar21 - 2) * 0x18);
          uVar21 = uVar21 - 1;
        } while (1 < uVar21);
      }
      if (*plVar23 != 0) {
        *puVar6 = 0;
        FUN__text__00400fc0(0);
        *plVar23 = 0;
        *(undefined4 *)(lVar15 + (long)iVar2 * 0x18 + 0x14) = 0;
      }
      *(undefined1 *)(lVar15 + (long)iVar2 * 0x18 + 6) = 0;
      uVar8 = *(uint *)(param_1 + 0x18);
      if (uVar8 == 0) goto LAB__text__0043a7d0;
      iVar12 = 0;
      uVar3 = *param_3;
      uVar14 = uVar8;
      while( true ) {
        iVar2 = iVar12 + (uVar14 >> 1);
        puVar6 = (uint *)(*(long *)(param_1 + 0x10) + (long)iVar2 * 0x18);
        uVar4 = *puVar6;
        if (uVar4 == uVar3) break;
        if (uVar4 < uVar3) {
          iVar12 = iVar2 + 1;
        }
        uVar4 = uVar14 - (uVar4 < uVar3);
        uVar14 = uVar4 >> 1;
        if (uVar4 < 2) goto LAB__text__0043a7d0;
      }
      uVar8 = uVar8 - 1;
      if ((long)iVar2 < (long)(ulong)uVar8) {
        memmove(puVar6,puVar6 + 6,
                (ulong)(((int)*(long *)(param_1 + 0x10) + uVar8 * 0x18) - (int)puVar6));
        uVar8 = *(int *)(param_1 + 0x18) - 1;
      }
      *(uint *)(param_1 + 0x18) = uVar8;
      *param_5 = 0;
      if (*param_3 != 0) goto LAB__text__0043a7e0;
      goto LAB__text__0043a87c;
    }
  }
LAB__text__0043a7d0:
  *param_5 = 0;
  if (*param_3 == 0) {
LAB__text__0043a87c:
    if ((((param_3[2] == 0) && ((char)param_3[4] == -1)) && ((char)param_3[6] == -1)) &&
       (((*(long *)(param_3 + 8) == 0 && (*(char *)(param_1 + 10) != '\0')) && (*param_4 != 0)))) {
      uVar5 = *(ushort *)(param_1 + 8);
      lVar15 = *param_2;
      plVar23 = (long *)(lVar15 + (ulong)uVar5 * 0x28);
      lVar20 = *plVar23;
      if (lVar20 != 0) {
        FUN__text__004360b8(lVar20);
        FUN__text__00400fc0(0x10,lVar20);
        *plVar23 = 0;
      }
      lVar15 = lVar15 + (ulong)uVar5 * 0x28;
      *(undefined4 *)(lVar15 + 0x10) = 0;
      *(byte *)(lVar15 + 0x18) = *(byte *)(lVar15 + 0x18) & 0xfe | 3 < *(byte *)(lVar15 + 0x18);
      *(short *)(lVar15 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar5;
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
LAB__text__0043a7e0:
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar12 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN__text__00400fc0(0);
      iVar12 = *(int *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return *(char *)(param_1 + 10) == '\0' && iVar12 == 0;
code_r0x0043a4ac:
  if (uVar3 < uVar8) {
    iVar12 = iVar2 + 1;
  }
  uVar3 = (uint)uVar21 - (uint)(uVar3 < uVar8);
  uVar21 = (ulong)(uVar3 >> 1);
  if (uVar3 < 2) goto LAB__text__0043a7d0;
  goto LAB__text__0043a494;
}


