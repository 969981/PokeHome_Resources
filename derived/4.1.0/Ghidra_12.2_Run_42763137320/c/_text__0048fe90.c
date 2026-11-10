/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048fe90; name: FUN_.text__0048fe90
 */


void FUN__text__0048fe90(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *__dest;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  
  if (*(char *)(param_2 + 0x1c) != '\0') {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  if (*(char *)(param_2 + 0x1d) != '\0') {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
  }
  *(undefined1 *)(param_2 + 0x1d) = 0;
  if (*(char *)(param_2 + 0x1e) != '\0') {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x1e) = 0;
  if (uVar3 == 0) goto LAB__text__0048ff60;
  uVar7 = *(uint *)(param_1 + 0x28);
  if (uVar7 != 0) {
    iVar8 = 0;
    do {
      iVar2 = iVar8 + (uVar7 >> 1);
      uVar10 = *(uint *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0xc);
      if (uVar10 == uVar3) {
        lVar6 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0xc;
        iVar8 = *(int *)(lVar6 + 4) + -1;
        *(int *)(lVar6 + 4) = iVar8;
        if ((iVar8 == 0) && (uVar7 = *(uint *)(param_1 + 0x28), uVar7 != 0)) {
          iVar8 = 0;
          uVar10 = uVar7;
          goto LAB__text__0048ffd0;
        }
        break;
      }
      if (uVar10 < uVar3) {
        iVar8 = iVar2 + 1;
      }
      uVar10 = uVar7 - (uVar10 < uVar3);
      uVar7 = uVar10 >> 1;
    } while (1 < uVar10);
  }
  goto LAB__text__0048ff5c;
  while( true ) {
    if (uVar4 < uVar3) {
      iVar8 = iVar2 + 1;
    }
    uVar4 = uVar10 - (uVar4 < uVar3);
    uVar10 = uVar4 >> 1;
    if (uVar4 < 2) break;
LAB__text__0048ffd0:
    iVar2 = iVar8 + (uVar10 >> 1);
    __dest = (uint *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0xc);
    uVar4 = *__dest;
    if (uVar4 == uVar3) {
      uVar7 = uVar7 - 1;
      if ((long)iVar2 < (long)(ulong)uVar7) {
        memmove(__dest,__dest + 3,
                (ulong)(((int)*(long *)(param_1 + 0x20) + uVar7 * 0xc) - (int)__dest));
        uVar7 = *(int *)(param_1 + 0x28) - 1;
      }
      *(uint *)(param_1 + 0x28) = uVar7;
      break;
    }
  }
LAB__text__0048ff5c:
  *(undefined4 *)(param_2 + 0x18) = 0;
LAB__text__0048ff60:
  plVar1 = (long *)(param_1 + 0xa0);
  lVar6 = 0;
  plVar9 = plVar1;
  do {
    lVar5 = lVar6;
    lVar6 = *plVar9;
    plVar9 = (long *)(lVar6 + 0x10);
  } while (lVar6 != 0 && lVar6 != param_2);
  if (lVar6 != 0) {
    if (*plVar1 != lVar6) {
      plVar1 = (long *)(lVar5 + 0x10);
    }
    *plVar1 = *(long *)(lVar6 + 0x10);
  }
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}


