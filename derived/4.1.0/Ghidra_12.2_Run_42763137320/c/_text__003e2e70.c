/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e2e70; name: FUN_.text__003e2e70
 */


byte * FUN__text__003e2e70(byte *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  char cVar16;
  byte bVar17;
  char cVar18;
  byte bVar19;
  char cVar20;
  byte bVar21;
  byte bVar22;
  char cVar23;
  byte bVar24;
  char cVar25;
  byte bVar26;
  char cVar27;
  byte bVar28;
  char cVar29;
  byte bVar30;
  char cVar31;
  byte bVar32;
  char cVar33;
  byte bVar34;
  char cVar35;
  byte bVar36;
  int iVar37;
  
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    bVar1 = *param_2;
    if ((bVar1 == 0) || ((bVar2 = param_2[1], bVar2 == 0 || (param_2[2] != 0)))) {
      return (byte *)0x0;
    }
    if (((-1 < (char)bVar1) && (-1 < (char)bVar2)) && (bVar1 < bVar2)) {
      for (; 0xf < param_3; param_3 = param_3 - 0x10) {
        Hint_Prefetch(param_1 + 0x10,0,0,0);
        uVar6 = *(undefined8 *)(param_1 + 8);
        cVar23 = (char)((ulong)uVar6 >> 8);
        cVar25 = (char)((ulong)uVar6 >> 0x10);
        cVar27 = (char)((ulong)uVar6 >> 0x18);
        cVar29 = (char)((ulong)uVar6 >> 0x20);
        cVar31 = (char)((ulong)uVar6 >> 0x28);
        cVar33 = (char)((ulong)uVar6 >> 0x30);
        cVar35 = (char)((ulong)uVar6 >> 0x38);
        uVar5 = *(undefined8 *)param_1;
        cVar8 = (char)((ulong)uVar5 >> 8);
        cVar10 = (char)((ulong)uVar5 >> 0x10);
        cVar12 = (char)((ulong)uVar5 >> 0x18);
        cVar14 = (char)((ulong)uVar5 >> 0x20);
        cVar16 = (char)((ulong)uVar5 >> 0x28);
        cVar18 = (char)((ulong)uVar5 >> 0x30);
        cVar20 = (char)((ulong)uVar5 >> 0x38);
        bVar7 = -((char)bVar2 < (char)uVar5) | -((char)uVar5 < (char)bVar1);
        bVar9 = -((char)bVar2 < cVar8) | -(cVar8 < (char)bVar1);
        bVar11 = -((char)bVar2 < cVar10) | -(cVar10 < (char)bVar1);
        bVar13 = -((char)bVar2 < cVar12) | -(cVar12 < (char)bVar1);
        bVar15 = -((char)bVar2 < cVar14) | -(cVar14 < (char)bVar1);
        bVar17 = -((char)bVar2 < cVar16) | -(cVar16 < (char)bVar1);
        bVar19 = -((char)bVar2 < cVar18) | -(cVar18 < (char)bVar1);
        bVar21 = -((char)bVar2 < cVar20) | -(cVar20 < (char)bVar1);
        bVar22 = -((char)bVar2 < (char)uVar6) | -((char)uVar6 < (char)bVar1);
        bVar24 = -((char)bVar2 < cVar23) | -(cVar23 < (char)bVar1);
        bVar26 = -((char)bVar2 < cVar25) | -(cVar25 < (char)bVar1);
        bVar28 = -((char)bVar2 < cVar27) | -(cVar27 < (char)bVar1);
        bVar30 = -((char)bVar2 < cVar29) | -(cVar29 < (char)bVar1);
        bVar32 = -((char)bVar2 < cVar31) | -(cVar31 < (char)bVar1);
        bVar34 = -((char)bVar2 < cVar33) | -(cVar33 < (char)bVar1);
        bVar36 = -((char)bVar2 < cVar35) | -(cVar35 < (char)bVar1);
        auVar4[1] = bVar9;
        auVar4[0] = bVar7;
        auVar4[2] = bVar11;
        auVar4[3] = bVar13;
        auVar4[4] = bVar15;
        auVar4[5] = bVar17;
        auVar4[6] = bVar19;
        auVar4[7] = bVar21;
        auVar4[8] = bVar22;
        auVar4[9] = bVar24;
        auVar4[10] = bVar26;
        auVar4[0xb] = bVar28;
        auVar4[0xc] = bVar30;
        auVar4[0xd] = bVar32;
        auVar4[0xe] = bVar34;
        auVar4[0xf] = bVar36;
        iVar37 = NEON_umaxv(auVar4,4);
        if (iVar37 != 0) {
          uVar3 = CONCAT17((char)(CONCAT11(bVar36,bVar34) >> 4),
                           CONCAT16((char)(CONCAT11(bVar32,bVar30) >> 4),
                                    CONCAT15((char)(CONCAT11(bVar28,bVar26) >> 4),
                                             CONCAT14((char)(CONCAT11(bVar24,bVar22) >> 4),
                                                      CONCAT13((char)(CONCAT11(bVar21,bVar19) >> 4),
                                                               CONCAT12((char)(CONCAT11(bVar17,
                                                  bVar15) >> 4),
                                                  CONCAT11((char)(CONCAT11(bVar13,bVar11) >> 4),
                                                           (char)(CONCAT11(bVar9,bVar7) >> 4))))))))
          ;
          uVar3 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          return param_1 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2);
        }
        param_1 = param_1 + 0x10;
      }
      if (param_3 == 0) {
        return (byte *)0x0;
      }
      do {
        if (*param_1 < bVar1 || bVar2 < *param_1) {
          return param_1;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  return (byte *)0x0;
}


