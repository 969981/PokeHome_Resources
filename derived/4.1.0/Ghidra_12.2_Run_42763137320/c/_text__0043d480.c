/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d480; name: FUN_.text__0043d480
 */


bool FUN__text__0043d480(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  byte bVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  byte *__dest_00;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  
  bVar3 = *param_2;
  uVar8 = *(ulong *)(param_2 + 8);
  if ((bVar3 != 0xff || uVar8 != 0) && (uVar11 = *(uint *)(param_1 + 0x10), uVar11 != 0)) {
    lVar15 = *(long *)(param_1 + 8);
    iVar12 = 0;
    do {
      iVar1 = iVar12 + (uVar11 >> 1);
      bVar5 = *(byte *)(lVar15 + (long)iVar1 * 0x18);
      if (bVar5 == bVar3) {
        if (uVar8 == 0) {
          lVar7 = lVar15 + (long)iVar1 * 0x18;
          cVar4 = *(char *)(lVar7 + 4);
          *(undefined1 *)(lVar7 + 4) = 0;
          bVar6 = cVar4 != '\0';
          goto LAB__text__0043d614;
        }
        lVar16 = lVar15 + (long)iVar1 * 0x18;
        plVar17 = (long *)(lVar16 + 8);
        lVar7 = *plVar17;
        puVar18 = (uint *)(lVar16 + 0x10);
        uVar11 = *puVar18;
        bVar6 = uVar11 != 0;
        if (uVar11 == 0) goto LAB__text__0043d5f4;
        iVar12 = 0;
        uVar13 = uVar11;
        goto LAB__text__0043d560;
      }
      if (bVar5 < bVar3) {
        iVar12 = iVar1 + 1;
      }
      uVar13 = uVar11 - (bVar5 < bVar3);
      uVar11 = uVar13 >> 1;
    } while (1 < uVar13);
  }
  cVar4 = *(char *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  return cVar4 != '\0';
  while( true ) {
    if (uVar14 < uVar8) {
      iVar12 = uVar2 + 1;
    }
    uVar2 = uVar13 - (uVar14 < uVar8);
    uVar13 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__0043d560:
    uVar2 = iVar12 + (uVar13 >> 1);
    uVar14 = *(ulong *)(lVar7 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
    if (uVar14 == uVar8) {
      uVar11 = uVar11 - 1;
      if ((long)(int)uVar2 < (long)(ulong)uVar11) {
        __dest = (void *)(lVar7 + (long)(int)uVar2 * 0x10);
        memmove(__dest,(void *)((long)__dest + 0x10),
                (ulong)(((int)lVar7 + uVar11 * 0x10) - (int)__dest) & 0xfffffff0);
        uVar11 = *puVar18 - 1;
      }
      *puVar18 = uVar11;
      if (uVar11 == 0) {
        lVar7 = *plVar17;
LAB__text__0043d5f4:
        if (lVar7 != 0) {
          *puVar18 = 0;
          FUN__text__00400fc0(0);
          *plVar17 = 0;
          *(undefined4 *)(lVar15 + (long)iVar1 * 0x18 + 0x14) = 0;
        }
      }
      else {
        bVar6 = true;
      }
      goto LAB__text__0043d614;
    }
  }
  bVar6 = false;
LAB__text__0043d614:
  lVar7 = lVar15 + (long)iVar1 * 0x18;
  piVar9 = (int *)(lVar7 + 0x10);
  pcVar10 = (char *)(lVar7 + 4);
  if (*pcVar10 == '\0' && *piVar9 == 0) {
    *pcVar10 = '\0';
    plVar17 = (long *)(lVar15 + (long)iVar1 * 0x18 + 8);
    if (*plVar17 != 0) {
      *piVar9 = 0;
      FUN__text__00400fc0(0);
      *plVar17 = 0;
      *(undefined4 *)(lVar15 + (long)iVar1 * 0x18 + 0x14) = 0;
    }
    uVar11 = *(uint *)(param_1 + 0x10);
    if (uVar11 != 0) {
      bVar3 = *param_2;
      iVar12 = 0;
      uVar13 = uVar11;
      do {
        iVar1 = iVar12 + (uVar13 >> 1);
        __dest_00 = (byte *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
        bVar5 = *__dest_00;
        if (bVar5 == bVar3) {
          uVar11 = uVar11 - 1;
          if ((long)iVar1 < (long)(ulong)uVar11) {
            memmove(__dest_00,__dest_00 + 0x18,
                    (ulong)(((int)*(long *)(param_1 + 8) + uVar11 * 0x18) - (int)__dest_00));
            uVar11 = *(int *)(param_1 + 0x10) - 1;
          }
          *(uint *)(param_1 + 0x10) = uVar11;
          return bVar6;
        }
        if (bVar5 < bVar3) {
          iVar12 = iVar1 + 1;
        }
        uVar2 = uVar13 - (bVar5 < bVar3);
        uVar13 = uVar2 >> 1;
      } while (1 < uVar2);
    }
  }
  return bVar6;
}


