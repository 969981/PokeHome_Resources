/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9d90; name: FUN_.text__003d9d90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d9d90(int *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined1 *puVar17;
  undefined1 *__src;
  long lVar18;
  undefined1 local_c4c;
  undefined1 local_c4b;
  ulong local_48;
  
  if (0x1ff < param_3) {
    puVar17 = operator_new__(param_3 * 6 + 3,_DAT_008a37f8);
    if (puVar17 == (undefined1 *)0x0) {
      if (*param_1 == 0) {
        *param_1 = 9;
      }
      puVar10 = (undefined4 *)FUN__text__003d9014(param_1 + 4);
      *puVar10 = 5;
      return 0;
    }
    uVar3 = param_1[1];
    *puVar17 = 0x22;
    __src = puVar17;
LAB__text__003d9dd0:
    bVar14 = false;
    uVar13 = 0;
    lVar18 = 1;
LAB__text__003d9e10:
    lVar12 = lVar18;
    do {
      bVar4 = *(byte *)(param_2 + uVar13);
      uVar11 = (uint)bVar4;
      if (uVar11 - 8 < 0x28) {
                    /* WARNING: Could not emulate address calculation at 0x003d9e50 */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)((ulong)*(byte *)((ulong)(uVar11 - 8) + 0x73aac4) * 4 + 0x3d9e20))(0x725c)
        ;
        return uVar8;
      }
      if (uVar11 == 0x5c) {
        puVar2 = __src + lVar12;
        lVar12 = lVar12 + 2;
        *puVar2 = 0x5c;
        puVar2[1] = bVar4;
      }
      else if ((char)bVar4 < ' ') {
        if (((uVar3 >> 3 & 1) == 0) && ((char)bVar4 < '\0')) goto LAB__text__003d9ef4;
        puVar10 = (undefined4 *)(__src + lVar12);
        cVar15 = '0';
        if (0x9f < bVar4) {
          cVar15 = '7';
        }
        *puVar10 = 0x3030755c;
        cVar16 = '0';
        if (9 < (uVar11 & 0xf)) {
          cVar16 = '7';
        }
        *(byte *)(puVar10 + 1) = cVar15 + (bVar4 >> 4);
        lVar12 = lVar12 + 6;
        *(char *)((long)puVar10 + 5) = cVar16 + (char)(uVar11 & 0xf);
      }
      else {
        __src[lVar12] = bVar4;
        lVar12 = lVar12 + 1;
      }
      uVar13 = uVar13 + 1;
      if (param_3 == uVar13) {
        uVar13 = lVar12 + 1;
        __src[lVar12] = 0x22;
        if (!bVar14) goto LAB__text__003d9f58;
        goto LAB__text__003d9f2c;
      }
    } while( true );
  }
  uVar3 = param_1[1];
  puVar17 = (undefined1 *)0x0;
  local_c4c = 0x22;
  if (param_3 != 0) {
    __src = &local_c4c;
    goto LAB__text__003d9dd0;
  }
  __src = &local_c4c;
  uVar13 = 2;
  local_c4b = 0x22;
LAB__text__003d9fb4:
  if (param_1 + 0x26 < (int *)(*(long *)(param_1 + 0x14) + uVar13)) {
    lVar18 = *(long *)(param_1 + 2);
    piVar1 = param_1 + 0x16;
    sVar5 = *(long *)(param_1 + 0x14) - (long)piVar1;
    *(int **)(param_1 + 0x14) = piVar1;
    if ((long)sVar5 < 0) goto LAB__text__003da0cc;
    if (*(ulong *)(lVar18 + 0x20) < *(long *)(lVar18 + 0x10) + sVar5) {
      uVar9 = FUN__text__003d6a74(lVar18,piVar1,sVar5);
      if ((uVar9 & 1) == 0) goto LAB__text__003da0dc;
    }
    else {
      memcpy((void *)(*(long *)(lVar18 + 0x18) + *(long *)(lVar18 + 0x10)),piVar1,sVar5);
      *(size_t *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + sVar5;
    }
  }
  memcpy(*(void **)(param_1 + 0x14),__src,uVar13);
  *(ulong *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + uVar13;
  uVar8 = 1;
  goto joined_r0x003da1ac;
LAB__text__003d9ef4:
  __src[lVar12] = bVar4;
  bVar14 = true;
  bVar6 = param_3 - 1 == uVar13;
  uVar13 = uVar13 + 1;
  lVar18 = lVar12 + 1;
  if (bVar6) goto code_r0x003d9f0c;
  goto LAB__text__003d9e10;
code_r0x003d9f0c:
  uVar13 = lVar12 + 2;
  __src[lVar12 + 1] = 0x22;
LAB__text__003d9f2c:
  __src[uVar13] = 0;
  iVar7 = FUN__text__003e3030(0,0,&local_48,__src,uVar13);
  if ((iVar7 != 0) || (local_48 != uVar13)) {
    if (*param_1 == 0) {
      *param_1 = 7;
    }
    puVar10 = (undefined4 *)FUN__text__003d9014(param_1 + 4);
    uVar8 = 1;
    *puVar10 = 5;
    goto joined_r0x003da1ac;
  }
LAB__text__003d9f58:
  if (uVar13 < 0x20) goto LAB__text__003d9fb4;
  lVar12 = *(long *)(param_1 + 0x14);
  piVar1 = param_1 + 0x16;
  *(int **)(param_1 + 0x14) = piVar1;
  lVar18 = *(long *)(param_1 + 2);
  sVar5 = lVar12 - (long)piVar1;
  if (-1 < (long)sVar5) {
    if (*(ulong *)(lVar18 + 0x20) < *(long *)(lVar18 + 0x10) + sVar5) {
      uVar9 = FUN__text__003d6a74(lVar18,piVar1,sVar5);
      if ((uVar9 & 1) == 0) goto LAB__text__003da0dc;
      lVar18 = *(long *)(param_1 + 2);
    }
    else {
      memcpy((void *)(*(long *)(lVar18 + 0x18) + *(long *)(lVar18 + 0x10)),piVar1,sVar5);
      *(size_t *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + sVar5;
      lVar18 = *(long *)(param_1 + 2);
    }
    if (-1 < (long)uVar13) {
      if (*(ulong *)(lVar18 + 0x20) < *(long *)(lVar18 + 0x10) + uVar13) {
        uVar13 = FUN__text__003d6a74(lVar18,__src,uVar13);
        if ((uVar13 & 1) == 0) goto LAB__text__003da0dc;
      }
      else {
        memcpy((void *)(*(long *)(lVar18 + 0x18) + *(long *)(lVar18 + 0x10)),__src,uVar13);
        *(ulong *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + uVar13;
      }
      uVar8 = 1;
      goto joined_r0x003da1ac;
    }
  }
LAB__text__003da0cc:
  if (*(int *)(lVar18 + 0x28) == 0) {
    *(int *)(lVar18 + 0x28) = 0x16;
  }
LAB__text__003da0dc:
  uVar13 = (ulong)(uint)param_1[5] - 1;
  if (uVar13 < (uint)param_1[4]) {
    puVar10 = (undefined4 *)(*(long *)(param_1 + 6) + uVar13 * 8);
    iVar7 = *param_1;
  }
  else {
    iVar7 = (int)uVar13 - param_1[4];
    lVar18 = LZCOUNT(iVar7 + 0x10);
    puVar10 = (undefined4 *)
              (*(long *)(*(long *)(param_1 + 8) + (0x1b - lVar18) * 8 + 8) +
              (ulong)(uint)(iVar7 - *(int *)((0x1c - lVar18) * 4 + 0x734874)) * 8);
    iVar7 = *param_1;
  }
  if (iVar7 == 0) {
    *param_1 = 8;
  }
  uVar8 = 0;
  *puVar10 = 5;
joined_r0x003da1ac:
  if (puVar17 != (undefined1 *)0x0) {
    operator_delete__(puVar17);
  }
  return uVar8;
}


