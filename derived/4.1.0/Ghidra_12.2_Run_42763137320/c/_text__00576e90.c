/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00576e90; name: FUN_.text__00576e90
 */


/* WARNING: Removing unreachable block (ram,0x00576f90) */

void FUN__text__00576e90(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong __n;
  ulong uVar14;
  
  lVar10 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar10 + 0x9a) != '\0') {
    uVar7 = FUN__text__00576360(param_1,param_2);
    if ((uVar7 & 1) != 0) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x158);
  }
  if (*(char *)(lVar10 + 0x58) != '\0') {
    FUN__text__00576c80(param_1);
  }
  if (*(int *)((long)param_2 + 0xc) == 0x11) {
    uVar8 = *(uint *)(param_1 + 0x118);
    uVar13 = *(uint *)(param_1 + 0x120);
    if (uVar8 == 0xffffffff) {
LAB__text__00576f38:
      *(uint *)(param_1 + 0x118) = uVar13;
      uVar8 = uVar13;
LAB__text__00576f44:
      *(uint *)(param_1 + 0x11c) = uVar13;
      uVar13 = (uint)*(ushort *)((long)param_2 + 0x12);
    }
    else {
      if (uVar8 == 0) {
        if (*(short *)((long)param_2 + 0x12) == 0) {
          return;
        }
        goto LAB__text__00576f38;
      }
      if (*(short *)((long)param_2 + 0x12) != 0) goto LAB__text__00576f38;
      if (*(uint *)(param_1 + 0x11c) < uVar13) {
        uVar8 = (uVar8 + uVar13) - *(uint *)(param_1 + 0x11c);
        *(uint *)(param_1 + 0x118) = uVar8;
        goto LAB__text__00576f44;
      }
      uVar13 = 0;
    }
    iVar9 = 0;
    if (*(ushort *)(param_2 + 2) - uVar13 <= uVar8) {
      iVar9 = uVar8 - (*(ushort *)(param_2 + 2) - uVar13);
    }
    *(int *)(param_1 + 0x118) = iVar9;
    uVar4 = *(ushort *)((long)param_2 + 0x12);
    uVar7 = (ulong)uVar4;
    uVar5 = *(ushort *)(param_2 + 2);
    if ((uint)uVar4 < (uint)uVar5) {
      bVar3 = *(byte *)(param_2 + 1);
      if (bVar3 == 0) {
        uVar7 = (ulong)(uint)uVar5;
      }
      else {
        __n = (ulong)(((uint)uVar5 - (uint)uVar4) * 4);
        if (bVar3 == 1) {
          lVar11 = 0;
LAB__text__00577000:
          memset((void *)(*param_2 + lVar11 * (ulong)*(ushort *)(param_2 + 2) + uVar7 * 4),0,__n);
        }
        else {
          uVar14 = (ulong)bVar3 & 0xfe;
          lVar10 = 4;
          do {
            lVar11 = lVar10;
            memset((void *)(*param_2 + (lVar11 + -4) * (ulong)*(ushort *)(param_2 + 2) + uVar7 * 4),
                   0,__n);
            memset((void *)(*param_2 + lVar11 * (ulong)*(ushort *)(param_2 + 2) + uVar7 * 4),0,__n);
            uVar14 = uVar14 - 2;
            lVar10 = lVar11 + 8;
          } while (uVar14 != 0);
          lVar11 = lVar11 + 4;
          if ((bVar3 & 1) != 0) goto LAB__text__00577000;
        }
        uVar7 = (ulong)*(ushort *)(param_2 + 2);
      }
      *(short *)((long)param_2 + 0x12) = (short)uVar7;
      iVar9 = *(int *)(param_1 + 0x118);
    }
    uVar8 = (uint)uVar7;
    if (iVar9 != 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    uVar8 = (uint)*(ushort *)((long)param_2 + 0x12);
  }
  if (uVar8 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_2 + 1);
  if ((uVar8 & 0xf00) == 0x200) {
    if ((uVar8 & 0xff) < 5) {
      FUN__text__0057a3b0();
    }
    else {
      FUN__text__0057afb0(param_1,param_2);
    }
    goto LAB__text__00577140;
  }
  if ((uVar8 & 0xf00) != 0x100) goto LAB__text__00577140;
  uVar13 = uVar8 >> 0xc & 0x63f;
  uVar6 = uVar13 - 0x603;
  uVar7 = (ulong)uVar6;
  if (uVar6 < 0x3d) {
    if ((1L << (uVar7 & 0x3f) & 0x1111000000000000U) != 0) {
      FUN__text__005794a0(param_1,param_2);
      goto LAB__text__00577140;
    }
    if ((1L << (uVar7 & 0x3f) & 0x1110U) != 0) {
      FUN__text__00578830(param_1,param_2);
      goto LAB__text__00577140;
    }
    if (uVar7 != 0) goto LAB__text__005770fc;
  }
  else {
LAB__text__005770fc:
    if (0xf < uVar13) goto LAB__text__00577140;
    uVar8 = 1 << (ulong)(uVar8 >> 0xc & 0x1f);
    if ((uVar8 & 0x1918) != 0) {
      FUN__text__005771a0(param_1,param_2);
      goto LAB__text__00577140;
    }
    if ((uVar8 & 0x8080) == 0) goto LAB__text__00577140;
  }
  FUN__text__00577b90(param_1,param_2);
LAB__text__00577140:
  lVar10 = *(long *)(param_1 + 0x158);
  uVar1 = *(undefined8 *)(lVar10 + 0x10);
  uVar2 = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar10 + 8);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  uVar2 = *(undefined8 *)(lVar10 + 0x38);
  uVar1 = *(undefined8 *)(lVar10 + 0x20);
  uVar12 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(lVar10 + 0x30);
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  *(undefined8 *)(param_1 + 0x188) = uVar12;
  uVar1 = *(undefined8 *)(lVar10 + 0x48);
  uVar2 = *(undefined8 *)(lVar10 + 0x50);
  uVar12 = *(undefined8 *)(lVar10 + 0x40);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar10 + 0x58);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar12;
  return;
}


