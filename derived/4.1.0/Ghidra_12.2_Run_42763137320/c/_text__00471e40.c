/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471e40; name: FUN_.text__00471e40
 */


undefined4
FUN__text__00471e40(float param_1,undefined8 *param_2,ushort param_3,long param_4,byte param_5,
                   uint param_6,undefined8 *param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  long *plVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_74 [4];
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    lVar7 = 0;
    fVar12 = 101.0;
    uVar9 = 0;
  }
  else {
    plVar10 = (long *)*param_2;
    uVar9 = 0;
    if ((param_6 & 1) != 0) {
      lVar6 = (ulong)uVar1 << 3;
      fVar13 = 101.0;
      bVar11 = 0;
      lVar8 = 0;
      iVar5 = 2;
      if (param_4 == 0) {
        do {
          while( true ) {
            lVar7 = *plVar10;
            if (((*(uint *)(lVar7 + 0x313) >> 0x10 & 1) == 0) &&
               ((*(uint *)(lVar7 + 0x313) & 0x6000000) == 0 &&
                (*(ushort *)(lVar7 + 0x220) & 0x100) == 0)) break;
LAB__text__00472054:
            plVar10 = plVar10 + 1;
            lVar6 = lVar6 + -8;
            lVar7 = lVar8;
            fVar12 = fVar13;
            iVar2 = iVar5;
            if (lVar6 == 0) goto LAB__text__00471fa4;
          }
          fVar12 = *(float *)(lVar7 + 0x318);
          uVar9 = uVar9 + 1;
          if (param_1 < fVar12) goto LAB__text__00472054;
          iVar2 = FUN__text__00475978(lVar7,auStack_74);
          if (iVar2 == 0) {
            bVar11 = uVar9 <= param_3 | bVar11;
            goto LAB__text__00472054;
          }
          plVar10 = plVar10 + 1;
          lVar6 = lVar6 + -8;
          lVar8 = lVar7;
          fVar13 = fVar12;
          iVar5 = iVar2;
        } while (lVar6 != 0);
      }
      else {
        do {
          while (((lVar7 = *plVar10, *(long *)(lVar7 + 0x20) != param_4 ||
                  ((*(uint *)(lVar7 + 0x313) >> 0x10 & 1) != 0)) ||
                 (!((*(uint *)(lVar7 + 0x313) & 0x6000000) == 0 &&
                   (*(ushort *)(lVar7 + 0x220) & 0x100) == 0)))) {
LAB__text__004720e0:
            plVar10 = plVar10 + 1;
            lVar6 = lVar6 + -8;
            lVar7 = lVar8;
            fVar12 = fVar13;
            iVar2 = iVar5;
            if (lVar6 == 0) goto LAB__text__00471fa4;
          }
          fVar12 = *(float *)(lVar7 + 0x318);
          uVar9 = uVar9 + 1;
          if (param_1 < fVar12) goto LAB__text__004720e0;
          iVar2 = FUN__text__00475978(lVar7,auStack_74);
          if (iVar2 == 0) {
            bVar11 = uVar9 <= param_3 | bVar11;
            goto LAB__text__004720e0;
          }
          plVar10 = plVar10 + 1;
          lVar6 = lVar6 + -8;
          lVar8 = lVar7;
          fVar13 = fVar12;
          iVar5 = iVar2;
        } while (lVar6 != 0);
      }
      goto LAB__text__00471fa4;
    }
    lVar7 = 0;
    fVar12 = 101.0;
    lVar6 = (ulong)uVar1 << 3;
    if (param_4 == 0) {
      do {
        lVar8 = *plVar10;
        if ((*(uint *)(lVar8 + 0x313) >> 0x10 & 1) == 0) {
          if ((*(uint *)(lVar8 + 0x313) & 0x6000000) == 0 &&
              (*(ushort *)(lVar8 + 0x220) & 0x100) == 0) {
            uVar9 = uVar9 + 1;
            if (*(float *)(lVar8 + 0x318) <= param_1) {
              lVar7 = lVar8;
              fVar12 = *(float *)(lVar8 + 0x318);
            }
          }
        }
        plVar10 = plVar10 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    else {
      do {
        lVar8 = *plVar10;
        if (*(long *)(lVar8 + 0x20) == param_4) {
          if ((*(uint *)(lVar8 + 0x313) >> 0x10 & 1) == 0) {
            if ((*(uint *)(lVar8 + 0x313) & 0x6000000) == 0 &&
                (*(ushort *)(lVar8 + 0x220) & 0x100) == 0) {
              uVar9 = uVar9 + 1;
              if (*(float *)(lVar8 + 0x318) <= param_1) {
                lVar7 = lVar8;
                fVar12 = *(float *)(lVar8 + 0x318);
              }
            }
          }
        }
        plVar10 = plVar10 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  bVar11 = 0;
  iVar2 = 2;
LAB__text__00471fa4:
  if (uVar9 < param_3) {
    uVar4 = 1;
  }
  else {
    bVar3 = 0;
    if (((fVar12 <= param_1) && ((param_5 & fVar12 == param_1) == 0)) && (lVar7 != 0)) {
      *param_7 = *(undefined8 *)(lVar7 + 0x1e8);
      if ((iVar2 == 1) || ((param_6 & 1) == 0)) {
        FUN__text__00476d04(lVar7,param_8);
      }
      bVar3 = 1;
    }
    uVar4 = 0x50;
    if ((param_6 & 1) == 0) {
      uVar4 = 2;
    }
    if ((bool)(bVar11 | bVar3)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


