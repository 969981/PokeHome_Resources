/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8300; name: FUN_.text__004d8300
 */


void FUN__text__004d8300(float param_1,long param_2,long *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = *(uint *)(param_3 + 1);
  uVar1 = *(ushort *)(param_3 + 2);
  if ((uVar4 & 0xf00) == 0x200) {
    uVar4 = 1;
LAB__text__004d844c:
    fVar10 = 0.0;
    lVar6 = 0;
    lVar5 = 0;
    uVar8 = (ulong)uVar4;
    do {
      fVar9 = (float)FUN__text__004d8960(*(long *)(param_2 + 0x38) + lVar5,
                                         *(long *)(param_2 + 0x40) + lVar5,
                                         *param_3 + lVar6 * (ulong)*(ushort *)(param_3 + 2),uVar1);
      fVar10 = fVar9 + fVar10;
      lVar5 = lVar5 + 0x90;
      lVar6 = lVar6 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  else {
    if ((uVar4 & 0xf00) == 0x100) {
      uVar4 = uVar4 >> 0xc & 0xfffffff7;
      if (uVar4 != 0) {
        fVar10 = 0.0;
        uVar7 = 1;
        uVar2 = uVar4 - (uVar4 >> 1 & 0x55555555);
        uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
        do {
          if ((uVar7 & uVar4) != 0) {
            uVar3 = ((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0xff;
            if (uVar7 != 8) {
              uVar3 = uVar7 + 0xfffff & uVar4;
              uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
              uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
              uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
            }
            lVar5 = (ulong)(uVar3 & 0xff) * 0x90;
            fVar9 = (float)FUN__text__004d8960(*(long *)(param_2 + 0x38) + lVar5,
                                               *(long *)(param_2 + 0x40) + lVar5,
                                               *param_3 +
                                               (ulong)*(ushort *)(param_3 + 2) *
                                               (ulong)(uVar3 & 0xff) * 4,uVar1);
            if ((uVar7 & 0x600) != 0) {
              fVar9 = fVar9 * 1.4125375;
            }
            fVar10 = fVar9 + fVar10;
          }
          uVar7 = uVar7 * 2;
        } while (uVar7 <= uVar4);
        goto LAB__text__004d849c;
      }
    }
    else {
      uVar4 = uVar4 & 0xff;
      if (uVar4 != 0) goto LAB__text__004d844c;
    }
    fVar10 = 0.0;
  }
LAB__text__004d849c:
  *(float *)(param_2 + 0x18) = (param_1 * 1.0009619 * param_1 * 1.0009619 * fVar10) / (float)uVar1;
  return;
}


