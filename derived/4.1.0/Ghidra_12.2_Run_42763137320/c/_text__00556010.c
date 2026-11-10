/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00556010; name: FUN_.text__00556010
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00556010(float param_1,float param_2,long param_3,long *param_4,int param_5,
                        long *param_6,ulong param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  undefined1 uVar22;
  int iVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  undefined2 uVar30;
  uint uVar31;
  int *piVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_94;
  
  uVar5 = *(uint *)(param_3 + 0x28);
  if ((param_7 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x30) = 1;
  }
  uVar11 = uVar5 >> 2;
  if (param_1 / param_2 == 1.0) {
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB__text__00556094;
    uVar22 = 1;
  }
  else {
    uVar22 = 0;
  }
  *(undefined1 *)(param_3 + 0x32) = uVar22;
LAB__text__00556094:
  uVar27 = 0;
  uVar2 = uVar11 + uVar5;
  fVar34 = (float)uVar5 / (*(float *)(param_3 + 0xc) * 4.0);
LAB__text__00556104:
  do {
    local_94 = (uint)*(ushort *)((long)param_6 + 0x12);
    uVar31 = (uint)*(ushort *)((long)param_4 + 0x12);
    lVar25 = *param_4;
    uVar9 = *(ushort *)(param_4 + 2);
    lVar28 = *(long *)(param_3 + 0x40);
    lVar26 = *param_6;
    piVar32 = (int *)(lVar28 + uVar27 * 0x60);
    uVar10 = *(ushort *)(param_6 + 2);
    fVar35 = *(float *)(param_3 + 0x48);
    uVar29 = *(uint *)(param_3 + 0x2c);
    bVar13 = *(char *)(param_3 + 0x31) != '\0';
    bVar14 = *(char *)(param_3 + 0x30) != '\0';
    iVar23 = param_5;
    do {
      uVar4 = uVar31;
      if (uVar29 <= uVar31) {
        uVar4 = uVar29;
      }
      uVar19 = uVar29 - uVar4;
      if (((bVar13) && (uVar31 <= uVar29)) && (*(int *)((long)param_4 + 0xc) != 0x11)) {
        uVar31 = 0;
        bVar13 = true;
        uVar24 = 0x2b;
        goto LAB__text__00556718;
      }
      uVar17 = FUN__text__00556a04(param_2,*(long *)(param_3 + 0x38) + uVar27 * 0x20,
                                   lVar25 + uVar27 * 4 * (ulong)uVar9 + (ulong)(uVar4 + iVar23) * 4,
                                   uVar31 - uVar4);
      uVar31 = (uVar31 - uVar4) - (uVar17 & 0xffff);
      puVar3 = (uint *)(*(long *)(param_3 + 0x38) + uVar27 * 0x20);
      uVar6 = puVar3[3];
      bVar13 = (bool)(bVar13 & *puVar3 != uVar6);
      if ((bVar13 && uVar31 == 0) && *(int *)((long)param_4 + 0xc) != 0x11) {
        uVar30 = 0;
        bVar13 = true;
        *(undefined4 *)((long)param_6 + 0xc) = 0x2b;
        uVar27 = uVar27 + 1;
        if (uVar27 < *(uint *)(param_3 + 0x20)) goto LAB__text__00556104;
        goto LAB__text__00556750;
      }
      bVar15 = *(int *)((long)param_4 + 0xc) == 0x11;
      bVar16 = uVar31 == 0;
      bVar12 = bVar15 && bVar16;
      uVar29 = uVar19;
      if (uVar5 <= (uint)(*piVar32 - piVar32[3])) {
        if (*(char *)(param_3 + 0x32) == '\0') {
          if ((*(char *)(lVar28 + uVar27 * 0x60 + ((ulong)*(byte *)(piVar32 + 0xb) & 1) * 0x10 +
                        0x3c) == '\0') && (uVar2 <= uVar6 || bVar15 && bVar16)) {
            FUN__text__005557c0(puVar3,uVar11);
            uVar21 = FUN__text__005556cc(*(long *)(param_3 + 0x38) + uVar27 * 0x20,param_8,uVar5,
                                         bVar12);
            if ((uVar21 & 1) != 0) {
              FUN__text__00555160(0x3f800000,param_3,param_8,uVar5);
              lVar1 = lVar28 + uVar27 * 0x60 + 0x30;
              FUN__text__00556f60(lVar1 + ((ulong)*(byte *)(piVar32 + 0xb) & 1) * 0x10,param_8,uVar5
                                  ,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
              FUN__text__00556bd4(lVar1 + ((ulong)*(byte *)(piVar32 + 0xb) & 1) * 0x10);
            }
          }
          if ((*(char *)(lVar28 + uVar27 * 0x60 +
                         ((ulong)~(uint)*(byte *)(piVar32 + 0xb) & 1) * 0x10 + 0x3c) == '\0') &&
             (lVar1 = *(long *)(param_3 + 0x38) + uVar27 * 0x20,
             uVar2 <= *(uint *)(lVar1 + 0xc) || bVar15 && bVar16)) {
            FUN__text__005557c0(lVar1,uVar11);
            uVar21 = FUN__text__005556cc(*(long *)(param_3 + 0x38) + uVar27 * 0x20,param_8,uVar5,
                                         bVar12);
            if ((uVar21 & 1) != 0) {
              FUN__text__00555160(0x3f800000,param_3,param_8,uVar5);
              lVar1 = lVar28 + uVar27 * 0x60 + 0x30;
              FUN__text__00556f60(lVar1 + ((ulong)~(uint)*(byte *)(piVar32 + 0xb) & 1) * 0x10,
                                  param_8,uVar5,*(undefined8 *)(param_3 + 0x10),
                                  *(undefined8 *)(param_3 + 0x18));
              FUN__text__00556bd4(lVar1 + ((ulong)~(uint)*(byte *)(piVar32 + 0xb) & 1) * 0x10);
            }
          }
          uVar21 = (ulong)*(byte *)(piVar32 + 0xb) & 1;
          lVar1 = lVar28 + uVar27 * 0x60 + (uVar21 ^ 1) * 0x10;
          if ((*(char *)(lVar1 + 0x3c) == '\0') ||
             (*(char *)(lVar28 + uVar27 * 0x60 + uVar21 * 0x10 + 0x3c) == '\0'))
          goto LAB__text__00556590;
          FUN__text__00557160(fVar35,piVar32 + 0x14,
                              *(undefined8 *)(lVar28 + uVar27 * 0x60 + uVar21 * 0x10 + 0x30),
                              *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(piVar32 + 8),uVar11,
                              bVar14);
          FUN__text__00556fa0(piVar32 + 0x14,param_8,uVar5,*(undefined8 *)(param_3 + 0x10),
                              *(undefined8 *)(param_3 + 0x18));
          FUN__text__00555160(fVar34,param_3,param_8,uVar5);
          FUN__text__00555390(piVar32,param_8,uVar11);
          fVar35 = fVar35 + param_1 / param_2;
          *(undefined1 *)(piVar32 + 0x17) = 0;
          if (fVar35 < 1.0) {
            bVar14 = false;
            cVar7 = *(char *)((long)piVar32 + 0x2d);
          }
          else {
            bVar8 = *(byte *)(piVar32 + 0xb);
            uVar21 = (ulong)bVar8 & 1;
            *(undefined1 *)(lVar28 + uVar27 * 0x60 + uVar21 * 0x10 + 0x3c) = 0;
            if ((uint)(int)fVar35 < 2) {
              *(byte *)(piVar32 + 0xb) = bVar8 + 1;
              bVar14 = false;
              fVar35 = fVar35 - (float)(int)fVar35;
              cVar7 = *(char *)((long)piVar32 + 0x2d);
            }
            else {
              *(undefined1 *)(lVar28 + uVar27 * 0x60 + (ulong)((uint)uVar21 ^ 1) * 0x10 + 0x3c) = 0;
              iVar20 = ((int)fVar35 - 2U) * uVar11;
              iVar18 = FUN__text__005557c0(*(long *)(param_3 + 0x38) + uVar27 * 0x20,iVar20);
              bVar14 = false;
              fVar35 = fVar35 - (float)(int)fVar35;
              cVar7 = *(char *)((long)piVar32 + 0x2d);
              uVar29 = iVar20 - iVar18;
            }
          }
        }
        else {
          if (uVar2 <= uVar6 || bVar15 && bVar16) {
            fVar33 = fVar35 * (float)uVar11;
            uVar19 = uVar11;
            if ((int)fVar33 != 0) {
              fVar35 = 0.0;
              uVar19 = (int)fVar33;
            }
            FUN__text__005557c0(puVar3,uVar19);
            *(undefined1 *)
             (lVar28 + uVar27 * 0x60 + ((ulong)*(byte *)(piVar32 + 0xb) & 1) * 0x10 + 0x3c) = 0;
            uVar21 = FUN__text__005556cc(*(long *)(param_3 + 0x38) + uVar27 * 0x20,param_8,uVar5,
                                         bVar12);
            if ((uVar21 & 1) != 0) {
              FUN__text__00555160(0x3f800000,param_3,param_8,uVar5);
              FUN__text__00555160(fVar34,param_3,param_8,uVar5);
              FUN__text__00555390(piVar32,param_8,uVar11);
              cVar7 = *(char *)((long)piVar32 + 0x2d);
              goto joined_r0x005566f0;
            }
          }
LAB__text__00556590:
          cVar7 = *(char *)((long)piVar32 + 0x2d);
        }
joined_r0x005566f0:
        if (cVar7 != '\0') {
          iVar18 = FUN__text__005557c0(piVar32,uVar5 >> 1);
          iVar20 = piVar32[10];
          piVar32[10] = iVar20 + iVar18;
          if (uVar5 >> 1 < (uint)(iVar20 + iVar18)) {
            *(undefined1 *)((long)piVar32 + 0x2d) = 0;
          }
        }
      }
      if (bVar15 && bVar16) {
        bVar15 = *(int *)(*(long *)(param_3 + 0x38) + uVar27 * 0x20 + 0xc) == 0;
      }
      else {
        bVar15 = false;
      }
      uVar19 = FUN__text__005554d8(piVar32,lVar26 + uVar27 * 4 * (ulong)uVar10 + (ulong)local_94 * 4
                                   ,uVar11,*(ushort *)(param_6 + 2) - local_94,bVar15);
      local_94 = local_94 + (uVar19 & 0xffff);
      if (((bVar15 != false) && (piVar32[3] == 0)) &&
         (iVar20 = FUN__text__00555344(piVar32,uVar11), iVar20 == 0)) {
        uVar24 = 0x11;
        goto LAB__text__00556714;
      }
      if (local_94 == *(ushort *)(param_6 + 2)) {
        uVar24 = 0x2d;
        goto LAB__text__00556714;
      }
      iVar23 = uVar17 + uVar4 + iVar23;
    } while ((bVar12) || (uVar31 != 0));
    uVar24 = 0x2b;
LAB__text__00556714:
    uVar19 = uVar29;
LAB__text__00556718:
    uVar30 = (undefined2)uVar31;
    *(undefined4 *)((long)param_6 + 0xc) = uVar24;
    uVar27 = uVar27 + 1;
    if (*(uint *)(param_3 + 0x20) <= uVar27) {
LAB__text__00556750:
      *(undefined2 *)((long)param_4 + 0x12) = uVar30;
      *(short *)((long)param_6 + 0x12) = (short)local_94;
      *(float *)(param_3 + 0x48) = fVar35;
      *(uint *)(param_3 + 0x2c) = uVar19;
      *(bool *)(param_3 + 0x31) = bVar13;
      *(bool *)(param_3 + 0x30) = bVar14;
      return;
    }
  } while( true );
}


