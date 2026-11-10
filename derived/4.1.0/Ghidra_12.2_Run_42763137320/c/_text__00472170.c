/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472170; name: FUN_.text__00472170
 */


undefined4 FUN__text__00472170(float param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ushort uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_64 [4];
  
  uVar2 = DAT_00aea7d0;
  if ((uint)DAT_00aea7d0 < (DAT_00aea718 - DAT_00aea790) + 1U) {
    if (DAT_00aea7c8 == 0) {
      lVar7 = 0;
      fVar13 = 101.0;
      bVar1 = 0;
      iVar8 = 2;
      if (DAT_00aea7d0 == 0) goto LAB__text__004722a4;
    }
    else {
      uVar9 = 0;
      bVar1 = 0;
      lVar11 = (ulong)DAT_00aea7c8 << 3;
      plVar10 = DAT_00aea7c0;
      lVar7 = 0;
      fVar13 = 101.0;
      iVar8 = 2;
      do {
        while( true ) {
          lVar6 = *plVar10;
          if (((*(uint *)(lVar6 + 0x313) >> 0x10 & 1) == 0) &&
             ((*(uint *)(lVar6 + 0x313) & 0x6000000) == 0 &&
              (*(ushort *)(lVar6 + 0x220) & 0x100) == 0)) break;
LAB__text__00472200:
          plVar10 = plVar10 + 1;
          lVar11 = lVar11 + -8;
          if (lVar11 == 0) goto LAB__text__00472274;
        }
        fVar12 = *(float *)(lVar6 + 0x318);
        uVar9 = uVar9 + 1;
        if (param_1 < fVar12) goto LAB__text__00472200;
        iVar3 = FUN__text__00475978(lVar6,auStack_64);
        if (iVar3 == 0) {
          bVar1 = uVar9 <= uVar2 | bVar1;
          goto LAB__text__00472200;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
        lVar7 = lVar6;
        fVar13 = fVar12;
        iVar8 = iVar3;
      } while (lVar11 != 0);
LAB__text__00472274:
      if (uVar2 <= uVar9) {
LAB__text__004722a4:
        bVar4 = 0;
        if (((fVar13 == param_1 || fVar13 < param_1) && (fVar13 != param_1)) && (lVar7 != 0)) {
          if (iVar8 == 1) {
            FUN__text__00476d04(lVar7,2);
          }
          bVar4 = 1;
        }
        uVar5 = 0x50;
        if ((bool)(bVar1 | bVar4)) {
          uVar5 = 1;
        }
        return uVar5;
      }
    }
  }
  return 1;
}


