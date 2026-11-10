/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585f70; name: FUN_.text__00585f70
 */


/* WARNING: Type propagation algorithm not settling */

int FUN__text__00585f70(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  iVar4 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  if (iVar4 == 0 || *(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) {
    return 0;
  }
  if (param_2 == 0) {
    return iVar4;
  }
  piVar8 = *(int **)(param_1 + 0x18);
  if (param_3 <= iVar4) {
    iVar4 = param_3;
  }
  iVar5 = *piVar8 >> 1;
  if (iVar5 < 0x200) {
    if (iVar5 == 0x80) {
      uVar6 = 0x8b2290;
      iVar5 = piVar8[1];
    }
    else {
      if (iVar5 == 0x100) {
        uVar6 = 0x8b2490;
        iVar5 = piVar8[1];
        goto joined_r0x00586044;
      }
LAB__text__005860a8:
      uVar6 = 0;
      iVar5 = piVar8[1];
    }
joined_r0x005860b8:
    iVar5 = iVar5 >> 1;
    if (iVar5 < 0x200) goto LAB__text__00586080;
LAB__text__005860bc:
    if (iVar5 == 0x200) {
      uVar10 = 0x8b2890;
      goto LAB__text__005860fc;
    }
    if (iVar5 == 0x400) {
      uVar10 = 0x8af290;
      goto LAB__text__005860fc;
    }
    if (iVar5 == 0x800) {
      uVar10 = 0x8b0290;
      goto LAB__text__005860fc;
    }
  }
  else {
    if (iVar5 == 0x200) {
      uVar6 = 0x8b2890;
      iVar5 = piVar8[1];
    }
    else {
      if (iVar5 != 0x400) {
        if (iVar5 != 0x800) goto LAB__text__005860a8;
        uVar6 = 0x8b0290;
        iVar5 = piVar8[1];
        goto joined_r0x005860b8;
      }
      uVar6 = 0x8af290;
      iVar5 = piVar8[1];
    }
joined_r0x00586044:
    iVar5 = iVar5 >> 1;
    if (0x1ff < iVar5) goto LAB__text__005860bc;
LAB__text__00586080:
    if (iVar5 == 0x80) {
      uVar10 = 0x8b2290;
      goto LAB__text__005860fc;
    }
    if (iVar5 == 0x100) {
      uVar10 = 0x8b2490;
      goto LAB__text__005860fc;
    }
  }
  uVar10 = 0;
LAB__text__005860fc:
  uVar9 = 0;
  do {
    lVar7 = uVar9 * 8;
    iVar5 = *(int *)(param_1 + 0x10) + -1;
    if (param_4 != uVar9) {
      iVar5 = (int)uVar9;
    }
    iVar1 = (int)uVar9 + -1;
    if ((long)uVar9 <= (long)(int)param_4) {
      iVar1 = iVar5;
    }
    FUN__text__0058bf60(*piVar8,piVar8[1],*(undefined4 *)(param_1 + 0x38),
                        *(undefined4 *)(param_1 + 0x3c),
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar7),uVar6,uVar10,
                        param_2 + (long)(iVar1 * param_3) * 4,*(int *)(param_1 + 0x10),
                        *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x30) + iVar4);
    uVar3 = piVar8[*(int *)(param_1 + 0x3c)];
    uVar2 = uVar3 + 3;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + lVar7),
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + lVar7) + (long)((int)uVar2 >> 2) * 4),
           (ulong)(uVar2 & 0xfffffffc));
    uVar9 = uVar9 + 1;
  } while ((long)uVar9 < (long)*(int *)(param_1 + 0x10));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return iVar4;
}


