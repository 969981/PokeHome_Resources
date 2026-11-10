/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555b10; name: FUN_.text__00555b10
 */


undefined4
FUN__text__00555b10(float param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6,
                   long param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined4 local_d4;
  
  fVar26 = *(float *)(param_2 + 0x48);
  uVar22 = *(uint *)(param_2 + 0x2c);
  bVar11 = *(char *)(param_2 + 0x30) != '\0';
  if (param_4 == 0) {
    local_d4 = 0x2d;
  }
  else {
    lVar20 = *(long *)(param_2 + 0x40);
    fVar25 = *(float *)(param_2 + 0xc);
    uVar21 = (ulong)param_6;
    uVar19 = 0;
    piVar23 = (int *)(lVar20 + (ulong)param_6 * 0x60);
    uVar6 = *(uint *)(param_2 + 0x28);
    iVar17 = 0;
    uVar24 = 0;
    uVar8 = uVar6 >> 2;
    lVar18 = lVar20 + (ulong)param_6 * 0x60;
    pcVar2 = (char *)(lVar18 + 0x5c);
    lVar18 = lVar18 + 0x50;
    local_d4 = 0x2d;
    uVar9 = param_4;
    do {
      uVar12 = 0;
      uVar4 = uVar9;
      if (uVar22 <= uVar9) {
        uVar4 = uVar22;
      }
      if ((param_3 != 0) && (uVar22 < uVar9)) {
        uVar12 = FUN__text__00556a04(param_1,*(long *)(param_2 + 0x38) + uVar21 * 0x20,
                                     param_3 + (ulong)(uVar4 + iVar17) * 4,uVar9 - uVar4);
      }
      if ((*(char *)(lVar20 + uVar21 * 0x60 + ((ulong)*(byte *)(piVar23 + 0xb) & 1) * 0x10 + 0x3c)
           == '\0') &&
         (uVar16 = FUN__text__005556cc(*(long *)(param_2 + 0x38) + uVar21 * 0x20,param_8,uVar6,
                                       param_5 & 1), (uVar16 & 1) != 0)) {
        FUN__text__005557c0(*(long *)(param_2 + 0x38) + uVar21 * 0x20,uVar8);
        FUN__text__00555160(0x3f800000,param_2,param_8,uVar6);
        lVar3 = lVar20 + uVar21 * 0x60 + 0x30;
        FUN__text__00556f60(lVar3 + ((ulong)*(byte *)(piVar23 + 0xb) & 1) * 0x10,param_8,uVar6,
                            *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
        FUN__text__00556bd4(lVar3 + ((ulong)*(byte *)(piVar23 + 0xb) & 1) * 0x10);
      }
      if ((*(char *)(lVar20 + uVar21 * 0x60 + ((ulong)~(uint)*(byte *)(piVar23 + 0xb) & 1) * 0x10 +
                    0x3c) == '\0') &&
         (uVar16 = FUN__text__005556cc(*(long *)(param_2 + 0x38) + uVar21 * 0x20,param_8,uVar6,
                                       param_5 & 1), (uVar16 & 1) != 0)) {
        FUN__text__005557c0(*(long *)(param_2 + 0x38) + uVar21 * 0x20,uVar8);
        FUN__text__00555160(0x3f800000,param_2,param_8,uVar6);
        lVar3 = lVar20 + uVar21 * 0x60 + 0x30;
        FUN__text__00556f60(lVar3 + ((ulong)~(uint)*(byte *)(piVar23 + 0xb) & 1) * 0x10,param_8,
                            uVar6,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
        FUN__text__00556bd4(lVar3 + ((ulong)~(uint)*(byte *)(piVar23 + 0xb) & 1) * 0x10);
      }
      uVar22 = uVar22 - uVar4;
      lVar3 = lVar20 + uVar21 * 0x60 + ((ulong)*(byte *)(piVar23 + 0xb) & 1 ^ 1) * 0x10;
      if ((*(char *)(lVar3 + 0x3c) == '\0') ||
         (lVar1 = lVar20 + uVar21 * 0x60 + ((ulong)*(byte *)(piVar23 + 0xb) & 1) * 0x10,
         *(char *)(lVar1 + 0x3c) == '\0')) {
LAB__text__00555e14:
        if (*pcVar2 != '\0') goto LAB__text__00555e20;
      }
      else {
        if (*pcVar2 == '\0') {
          FUN__text__00557160(fVar26,lVar18,*(undefined8 *)(lVar1 + 0x30),
                              *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(piVar23 + 8),uVar8,
                              bVar11);
          bVar11 = false;
          goto LAB__text__00555e14;
        }
LAB__text__00555e20:
        if (uVar6 <= (uint)(*piVar23 - piVar23[3])) {
          FUN__text__00556fa0(lVar18,param_8,uVar6,*(undefined8 *)(param_2 + 0x10),
                              *(undefined8 *)(param_2 + 0x18));
          FUN__text__00555160((float)uVar6 / (fVar25 * 4.0),param_2,param_8,uVar6);
          FUN__text__00555390(piVar23,param_8,uVar8);
          fVar26 = fVar26 + 1.0 / param_1;
          *pcVar2 = '\0';
          if (1.0 <= fVar26) {
            bVar7 = *(byte *)(piVar23 + 0xb);
            uVar16 = (ulong)bVar7 & 1;
            *(undefined1 *)(lVar20 + uVar21 * 0x60 + uVar16 * 0x10 + 0x3c) = 0;
            if ((uint)(int)fVar26 < 2) {
              *(byte *)(piVar23 + 0xb) = bVar7 + 1;
            }
            else {
              *(undefined1 *)(lVar20 + uVar21 * 0x60 + (ulong)((uint)uVar16 ^ 1) * 0x10 + 0x3c) = 0;
              iVar15 = ((int)fVar26 - 2U) * uVar8;
              iVar13 = FUN__text__005557c0(*(long *)(param_2 + 0x38) + uVar21 * 0x20,iVar15);
              uVar22 = iVar15 - iVar13;
            }
            fVar26 = fVar26 - (float)(int)fVar26;
          }
        }
      }
      if ((((param_5 & 1) == 0) || (*(int *)(*(long *)(param_2 + 0x38) + uVar21 * 0x20 + 0xc) != 0))
         || (*pcVar2 != '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = piVar23[3] == 0;
      }
      uVar14 = FUN__text__005554d8(piVar23,param_7 + uVar19 * 4,uVar8,param_4 - (int)uVar19,bVar10);
      if ((bVar10 != false) && (piVar23[3] == 0)) {
        iVar15 = FUN__text__00555344(piVar23,uVar8);
        uVar5 = 0x11;
        if (iVar15 != 0) {
          uVar5 = local_d4;
        }
        local_d4 = uVar5;
      }
      uVar14 = (int)uVar19 + (uVar14 & 0xffff);
      uVar19 = (ulong)uVar14;
      uVar9 = (uVar9 - uVar4) - (uVar12 & 0xffff);
      if (param_4 <= uVar14 && uVar9 == 0) break;
      bVar10 = uVar24 < 99;
      uVar24 = uVar24 + 1;
      iVar17 = uVar12 + uVar4 + iVar17;
    } while (bVar10);
  }
  if (*(int *)(param_2 + 0x20) - 1U == param_6) {
    *(float *)(param_2 + 0x48) = fVar26;
    *(uint *)(param_2 + 0x2c) = uVar22;
    *(bool *)(param_2 + 0x30) = bVar11;
  }
  return local_d4;
}


