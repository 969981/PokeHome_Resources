/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00530d90; name: FUN_.text__00530d90
 */


void FUN__text__00530d90(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  iVar4 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    iVar4 = *(int *)(*(long *)(param_2 + 0x20) + 8);
  }
  iVar4 = FUN__text__00531e54(param_2,(int)param_1[3] + (int)param_1[1] + iVar4);
  if ((iVar4 == 1) && (uVar8 = *(uint *)(param_1 + 1), (int)param_1[3] + uVar8 != 0)) {
    uVar14 = 0;
    do {
      plVar3 = param_1;
      if (uVar8 <= uVar14) {
        plVar3 = param_1 + 2;
      }
      uVar1 = 0;
      if (uVar8 <= uVar14) {
        uVar1 = uVar8;
      }
      lVar16 = *plVar3;
      lVar9 = *(long *)(param_2 + 0x20);
      if ((lVar9 == 0) || (*(uint *)(param_2 + 0x18) <= *(uint *)(lVar9 + 8))) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        lVar9 = lVar9 + (ulong)*(uint *)(lVar9 + 8) * 0x58;
        puVar17 = (undefined4 *)(lVar9 + 0x10);
        *puVar17 = 0xffffffff;
        *(undefined8 *)(lVar9 + 0x28) = 0;
        *(undefined8 *)(lVar9 + 0x30) = 0x3f8000003f800000;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(undefined2 *)(lVar9 + 0x3c) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        *(undefined4 *)(lVar9 + 0x58) = 0;
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(undefined8 *)(lVar9 + 0x40) = 1;
        *(int *)(*(long *)(param_2 + 0x20) + 8) = *(int *)(*(long *)(param_2 + 0x20) + 8) + 1;
      }
      uVar15 = (ulong)(uVar14 - uVar1);
      puVar13 = (undefined4 *)(lVar16 + uVar15 * 0x138);
      lVar11 = *(long *)(*(long *)(param_3 + 8) + 0x20);
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x20) + (ulong)param_5 * 0x38;
      uVar22 = *(undefined8 *)(lVar9 + 0x28);
      local_88 = *(undefined8 *)(lVar9 + 0x18);
      uStack_80 = *(undefined8 *)(lVar9 + 0x20);
      local_a0 = *(undefined8 *)(lVar11 + 0x78);
      uVar21 = *(undefined8 *)(lVar11 + 0x80);
      local_90 = *(undefined8 *)(lVar11 + 0x88);
      uStack_98 = uVar21;
      local_78 = uVar22;
      uVar19 = FUN__text__00531120(puVar13,&local_88,&local_a0);
      *(undefined8 *)(puVar17 + 2) = uVar19;
      *(undefined8 *)(puVar17 + 8) = 0x3f8000003f800000;
      lVar9 = lVar16 + uVar15 * 0x138;
      puVar2 = (uint *)(lVar9 + 0x130);
      *(undefined8 *)(puVar17 + 4) = uVar21;
      *(undefined8 *)(puVar17 + 6) = uVar22;
      uVar18 = *(undefined4 *)(lVar9 + 0x128);
      *(undefined8 *)(puVar17 + 0x14) = 0;
      puVar17[0x12] = 0;
      puVar17[10] = uVar18;
      uVar6 = (ulong)*(uint *)(lVar9 + 0x130);
      uVar12 = uVar6;
      do {
        if ((int)uVar12 < 1) goto LAB__text__00530ffc;
        lVar9 = uVar12 * 2;
        uVar12 = uVar12 - 1;
      } while (*(long *)(puVar13 + lVar9 + 0x30) == 0);
      __s = *(char **)(*(long *)(puVar13 + lVar9 + 0x30) + 8);
      *(char **)(puVar17 + 0x14) = __s;
      uVar18 = 0;
      if (__s != (char *)0x0) {
        sVar5 = strlen(__s);
        uVar18 = (undefined4)sVar5;
      }
      puVar17[0x12] = uVar18;
      uVar6 = (ulong)*puVar2;
LAB__text__00530ffc:
      if (uVar6 == 0) {
        uVar12 = 0;
        uVar8 = 0;
        *(undefined1 *)(puVar17 + 0xb) = 0;
        if (*puVar2 == 0) goto LAB__text__00530e40;
LAB__text__00531054:
        uVar6 = uVar12 & 0xffffffff;
        puVar10 = *(undefined4 **)(lVar16 + uVar15 * 0x138 + (uVar12 & 0xffffffff) * 8 + 200);
        if (puVar10 == (undefined4 *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar17[0xd] = *puVar10;
          uVar12 = uVar6 + 1;
          if ((uVar12 < *puVar2) &&
             (puVar10 = *(undefined4 **)(lVar16 + uVar15 * 0x138 + uVar12 * 8 + 200),
             puVar10 != (undefined4 *)0x0)) {
            puVar17[0xe] = *puVar10;
            uVar12 = uVar6 + 2;
            if ((uVar12 < *puVar2) &&
               (puVar10 = *(undefined4 **)(lVar16 + uVar15 * 0x138 + uVar12 * 8 + 200),
               puVar10 != (undefined4 *)0x0)) {
              puVar17[0xf] = *puVar10;
              uVar12 = uVar6 + 3;
              if ((uVar12 < *puVar2) &&
                 (puVar10 = *(undefined4 **)(lVar16 + uVar15 * 0x138 + uVar12 * 8 + 200),
                 puVar10 != (undefined4 *)0x0)) {
                uVar6 = uVar6 + 4;
                uVar18 = 4;
                puVar17[0x10] = *puVar10;
              }
              else {
                uVar18 = 3;
                uVar6 = uVar12;
              }
            }
            else {
              uVar18 = 2;
              uVar6 = uVar12;
            }
          }
          else {
            uVar18 = 1;
            uVar6 = uVar12;
          }
        }
        cVar7 = (char)uVar6;
      }
      else {
        uVar12 = 0;
        do {
          if (*(long *)(puVar13 + uVar12 * 2 + 0x32) != 0) goto LAB__text__00531028;
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
        uVar12 = uVar6;
LAB__text__00531028:
        uVar8 = (uint)uVar12;
        *(char *)(puVar17 + 0xb) = (char)uVar12;
        if (uVar8 < *puVar2) goto LAB__text__00531054;
LAB__text__00530e40:
        cVar7 = (char)uVar8;
        uVar18 = 0;
      }
      puVar17[0xc] = uVar18;
      *(char *)((long)puVar17 + 0x2d) = (char)*puVar2 - cVar7;
      *puVar17 = *puVar13;
      uVar1 = uVar14 + 1;
      lVar9 = *(long *)(*(long *)(param_4 + 8) + 0x38);
      fVar20 = *(float *)(lVar9 + 0x98);
      if (param_1[(ulong)(*(uint *)(param_1 + 1) <= uVar14) + 4] != *(long *)(lVar9 + 0x68)) {
        fVar20 = 1.0 - fVar20;
      }
      puVar17[9] = fVar20 * *(float *)(lVar16 + uVar15 * 0x138 + 300);
      uVar8 = *(uint *)(param_1 + 1);
      uVar14 = uVar1;
    } while (uVar1 < (int)param_1[3] + uVar8);
  }
  return;
}


