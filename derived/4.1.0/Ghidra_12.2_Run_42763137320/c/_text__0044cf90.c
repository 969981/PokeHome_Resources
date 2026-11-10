/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044cf90; name: FUN_.text__0044cf90
 */


void FUN__text__0044cf90(long param_1,long param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *__src;
  uint uVar19;
  float fVar20;
  uint local_88;
  undefined1 uStack_61;
  
  cVar4 = *(char *)(param_1 + 0xe1);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  uVar7 = *(uint *)(param_1 + 0x98);
  uVar2 = *param_3;
  if (uVar2 != 0) {
    bVar5 = false;
    uVar13 = (uint)(uVar2 < uVar7);
    if (uVar2 < uVar7) {
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    do {
      uVar15 = 0;
      uVar14 = 0;
      do {
        puVar18 = (ulong *)(param_2 + uVar15 * 0x10);
        uVar3 = (uint)puVar18[1];
        if ((uVar3 != 0) && (fVar20 = *(float *)((long)puVar18 + 0xc), 0.0 < fVar20)) {
          uVar17 = *puVar18;
          uVar19 = *(uint *)(param_1 + 0x98);
          lVar16 = *(long *)(param_1 + 0x90);
          if (uVar19 == 0) {
            if (lVar16 != 0) {
              uVar12 = 0;
              goto LAB__text__0044d0e8;
            }
            if (*(int *)(param_1 + 0x9c) != 0) {
              *(undefined4 *)(param_1 + 0x98) = 1;
              uVar9 = 1;
              goto LAB__text__0044d048;
            }
            uVar12 = FUN__text__0044d9c0(param_1 + 0x70,1);
            uVar9 = 1;
            if (((uVar12 & 1) == 0) || (*(int *)(param_1 + 0x9c) == 0)) goto LAB__text__0044d048;
            uVar19 = *(uint *)(param_1 + 0x98);
            *(uint *)(param_1 + 0x98) = uVar19 + 1;
            if (*(long *)(param_1 + 0x90) == 0) goto LAB__text__0044d2f4;
            puVar18 = (ulong *)(*(long *)(param_1 + 0x90) + (ulong)uVar19 * 0x18);
            *puVar18 = 0xffffffffffffffff;
            *(undefined4 *)(puVar18 + 1) = 0;
            *(undefined4 *)(puVar18 + 2) = 0x3f800000;
LAB__text__0044d1b4:
            *puVar18 = uVar17;
            *(uint *)(puVar18 + 1) = uVar3;
LAB__text__0044d1bc:
            if (uVar17 != 0xffffffffffffffff) {
              if (((puVar18 + -3 < *(ulong **)(param_1 + 0x90)) || (puVar18[-3] != uVar17)) &&
                 ((*(ulong **)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x98) * 3 + -3 <
                   puVar18 + 3 || (puVar18[3] != uVar17)))) {
                FUN__text__0044b8a0(param_1 + 0xa0,uVar17,&uStack_61);
              }
            }
            uVar9 = 1;
LAB__text__0044d044:
            *(float *)(puVar18 + 2) = fVar20;
          }
          else {
            iVar10 = 0;
            uVar9 = uVar19;
            do {
              iVar1 = (uVar9 >> 1) + iVar10;
              puVar18 = (ulong *)(lVar16 + (long)iVar1 * 0x18);
              uVar12 = *puVar18;
              if (uVar12 == uVar17 && (uint)puVar18[1] == uVar3) {
                uVar9 = 0;
                goto LAB__text__0044d044;
              }
              if (uVar12 < uVar17) {
LAB__text__0044d094:
                uVar8 = uVar9 - 1;
                iVar10 = iVar1 + 1;
                uVar6 = uVar8 >> 1;
              }
              else {
                uVar8 = uVar9;
                uVar6 = uVar9 >> 1;
                if (uVar12 == uVar17 && (uint)puVar18[1] < uVar3) goto LAB__text__0044d094;
              }
              uVar9 = uVar6;
            } while (1 < uVar8);
            uVar12 = 0;
            uVar9 = uVar19;
            do {
              iVar10 = (uVar9 >> 1) + (int)uVar12;
              puVar18 = (ulong *)(lVar16 + (long)iVar10 * 0x18);
              uVar11 = *puVar18;
              if (uVar11 == uVar17 && (uint)puVar18[1] == uVar3) goto LAB__text__0044d1bc;
              if (uVar11 < uVar17) {
LAB__text__0044d220:
                uVar8 = uVar9 - 1;
                uVar12 = (ulong)(iVar10 + 1);
                uVar6 = uVar8 >> 1;
              }
              else {
                uVar8 = uVar9;
                uVar6 = uVar9 >> 1;
                if (uVar11 == uVar17 && (uint)puVar18[1] < uVar3) goto LAB__text__0044d220;
              }
              uVar9 = uVar6;
            } while (1 < uVar8);
LAB__text__0044d0e8:
            uVar9 = *(uint *)(param_1 + 0x9c);
            if (uVar19 < uVar9) {
LAB__text__0044d138:
              __src = (undefined8 *)(lVar16 + uVar12 * 0x18);
              if ((uint)uVar12 < uVar19) {
                memmove(__src + 3,__src,(ulong)((uVar19 - (uint)uVar12) * 0x18));
              }
              if (lVar16 != 0) {
                *(undefined4 *)(__src + 1) = 0;
                *__src = 0xffffffffffffffff;
                *(undefined4 *)(lVar16 + uVar12 * 0x18 + 0x10) = 0x3f800000;
              }
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
              if (*(long *)(param_1 + 0x90) != 0) {
                puVar18 = (ulong *)(*(long *)(param_1 + 0x90) + uVar12 * 0x18);
                goto LAB__text__0044d1b4;
              }
LAB__text__0044d2f4:
              uVar9 = 1;
            }
            else {
              iVar10 = uVar9 + (uVar9 >> 1);
              if (uVar9 == 0) {
                iVar10 = 1;
              }
              uVar11 = FUN__text__0044d9c0(param_1 + 0x70,iVar10);
              uVar9 = 1;
              if (((uVar11 & 1) != 0) && (uVar19 < *(uint *)(param_1 + 0x9c))) {
                uVar19 = *(uint *)(param_1 + 0x98);
                lVar16 = *(long *)(param_1 + 0x90);
                goto LAB__text__0044d138;
              }
            }
          }
LAB__text__0044d048:
          uVar13 = uVar9 | uVar13;
          uVar14 = uVar14 + (uVar9 ^ 1);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar2);
      if (uVar7 <= uVar14) goto LAB__text__0044d360;
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (!bVar5) {
        local_88 = uVar13;
      }
      bVar5 = true;
      uVar13 = 0;
    } while( true );
  }
  local_88 = 0;
  if (uVar7 != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    goto LAB__text__0044d38c;
  }
LAB__text__0044d374:
  if ((cVar4 != '\0') && ((local_88 & 1) == 0)) {
    return;
  }
LAB__text__0044d38c:
  FUN__text__0044caf0(param_1);
  return;
LAB__text__0044d360:
  if (!bVar5) {
    local_88 = uVar13;
  }
  goto LAB__text__0044d374;
}


