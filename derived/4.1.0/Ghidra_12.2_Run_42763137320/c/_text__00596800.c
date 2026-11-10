/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00596800; name: FUN_.text__00596800
 */


void FUN__text__00596800(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar5 = (uint)(1L << ((ulong)(param_2 - 1U) & 0x3f));
  if ((param_4 & 1) == 0) {
    uVar14 = 0;
    do {
      uVar7 = 0x80;
      uVar9 = 1;
      uVar6 = uVar14 & 0xffffffff;
      uVar11 = 1;
      do {
        uVar11 = uVar11 | uVar7;
        uVar12 = (uint)uVar6 & uVar11 & 0xffff;
        bVar4 = uVar7 != uVar12;
        uVar7 = uVar7 >> 1;
        if (uVar9 != uVar12 && bVar4) {
          uVar11 = 0;
        }
        uVar12 = uVar11 ^ (uint)uVar6;
        uVar6 = (ulong)uVar12;
        uVar11 = uVar9 << 1;
        uVar9 = uVar11 & 0xfffe;
      } while (uVar9 < uVar7);
      uVar9 = -(uVar12 & 1) & uVar5;
      uVar11 = 0;
      if ((uVar9 & uVar5 & 0xffff) != 0) {
        uVar11 = param_3;
      }
      uVar11 = uVar5 & (int)(short)(uVar12 << 0xe) >> 0xf ^ uVar11 ^ uVar9 << 1;
      uVar9 = 0;
      if ((uVar11 & uVar5 & 0xffff) != 0) {
        uVar9 = param_3;
      }
      uVar11 = uVar5 & (int)(short)(uVar12 << 0xd) >> 0xf ^ uVar9 ^ uVar11 << 1;
      uVar9 = 0;
      if ((uVar11 & uVar5 & 0xffff) != 0) {
        uVar9 = param_3;
      }
      uVar11 = uVar5 & (int)(short)(uVar12 << 0xc) >> 0xf ^ uVar9 ^ uVar11 << 1;
      uVar9 = 0;
      if ((uVar11 & uVar5 & 0xffff) != 0) {
        uVar9 = param_3;
      }
      uVar11 = uVar5 & (int)(short)(uVar12 << 0xb) >> 0xf ^ uVar9 ^ uVar11 << 1;
      uVar9 = 0;
      if ((uVar11 & uVar5 & 0xffff) != 0) {
        uVar9 = param_3;
      }
      uVar11 = uVar5 & (int)(short)(uVar12 << 10) >> 0xf ^ uVar9 ^ uVar11 << 1;
      uVar9 = 0;
      if ((uVar11 & uVar5 & 0xffff) != 0) {
        uVar9 = param_3;
      }
      uVar11 = uVar5 & (int)(short)(uVar12 << 9) >> 0xf ^ uVar9 ^ uVar11 << 1;
      uVar9 = 0;
      if ((uVar11 & uVar5 & 0xffff) != 0) {
        uVar9 = param_3;
      }
      uVar9 = uVar5 & (int)(short)(uVar12 << 8) >> 0xf ^ uVar9 ^ uVar11 << 1;
      uVar2 = 0;
      if ((uVar9 & uVar5 & 0xffff) != 0) {
        uVar2 = (ushort)param_3;
      }
      *(ushort *)(param_1 + uVar14 * 2) = uVar2 ^ (ushort)(uVar9 << 1);
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x100);
  }
  else {
    uVar11 = 1 << (ulong)(param_2 - 1U & 0x1f);
    uVar9 = uVar11 & 0xffff;
    if (uVar9 < 2) {
      uVar9 = 0;
      do {
        uVar15 = 0x80;
        uVar11 = 1;
        uVar7 = 1;
        uVar12 = uVar9;
        do {
          uVar7 = uVar7 | uVar15;
          uVar8 = uVar12 & uVar7 & 0xffff;
          bVar4 = uVar15 != uVar8;
          uVar15 = uVar15 >> 1;
          if (uVar11 != uVar8 && bVar4) {
            uVar7 = 0;
          }
          uVar12 = uVar7 ^ uVar12;
          uVar7 = uVar11 << 1;
          uVar11 = uVar7 & 0xfffe;
        } while (uVar11 < uVar15);
        uVar11 = 1;
        uVar7 = -(uVar12 & 1) & uVar5;
        uVar8 = 1;
        uVar15 = 0;
        if ((uVar7 & uVar5 & 0xffff) != 0) {
          uVar15 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar12 << 0xe) >> 0xf ^ uVar15 ^ uVar7 << 1;
        uVar7 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar7 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar12 << 0xd) >> 0xf ^ uVar7 ^ uVar15 << 1;
        uVar7 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar7 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar12 << 0xc) >> 0xf ^ uVar7 ^ uVar15 << 1;
        uVar7 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar7 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar12 << 0xb) >> 0xf ^ uVar7 ^ uVar15 << 1;
        uVar7 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar7 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar12 << 10) >> 0xf ^ uVar7 ^ uVar15 << 1;
        uVar7 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar7 = param_3;
        }
        uVar14 = (ulong)uVar9;
        uVar15 = uVar5 & (int)(short)(uVar12 << 9) >> 0xf ^ uVar7 ^ uVar15 << 1;
        uVar7 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar7 = param_3;
        }
        uVar10 = 0x80;
        uVar7 = uVar5 & (int)(short)(uVar12 << 8) >> 0xf ^ uVar7 ^ uVar15 << 1;
        uVar2 = 0;
        if ((uVar7 & uVar5 & 0xffff) != 0) {
          uVar2 = (ushort)param_3;
        }
        do {
          uVar8 = uVar8 | uVar10;
          uVar12 = (uint)uVar14 & uVar8 & 0xffff;
          bVar4 = uVar10 != uVar12;
          uVar10 = uVar10 >> 1;
          if (uVar11 != uVar12 && bVar4) {
            uVar8 = 0;
          }
          uVar14 = (ulong)(uVar8 ^ (uint)uVar14);
          uVar8 = uVar11 << 1;
          uVar11 = uVar8 & 0xfffe;
        } while (uVar11 < uVar10);
        uVar11 = uVar9 & 0xffff;
        uVar9 = uVar9 + 1;
        *(ushort *)(param_1 + (uVar14 & 0xffff) * 2) = uVar2 ^ (ushort)(uVar7 << 1);
      } while (uVar11 < 0xff);
    }
    else {
      uVar7 = 0;
      do {
        uVar10 = 0x80;
        uVar12 = 1;
        uVar15 = 1;
        uVar8 = uVar7;
        do {
          uVar15 = uVar15 | uVar10;
          uVar13 = uVar8 & uVar15 & 0xffff;
          bVar4 = uVar10 != uVar13;
          uVar10 = uVar10 >> 1;
          if (uVar12 != uVar13 && bVar4) {
            uVar15 = 0;
          }
          uVar8 = uVar15 ^ uVar8;
          uVar15 = uVar12 << 1;
          uVar12 = uVar15 & 0xfffe;
        } while (uVar12 < uVar10);
        uVar10 = 1;
        uVar12 = -(uVar8 & 1) & uVar5;
        uVar15 = 0;
        if ((uVar12 & uVar5 & 0xffff) != 0) {
          uVar15 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 0xe) >> 0xf ^ uVar15 ^ uVar12 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 0xd) >> 0xf ^ uVar12 ^ uVar15 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 0xc) >> 0xf ^ uVar12 ^ uVar15 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 0xb) >> 0xf ^ uVar12 ^ uVar15 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 10) >> 0xf ^ uVar12 ^ uVar15 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 9) >> 0xf ^ uVar12 ^ uVar15 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar15 = uVar5 & (int)(short)(uVar8 << 8) >> 0xf ^ uVar12 ^ uVar15 << 1;
        uVar12 = 0;
        if ((uVar15 & uVar5 & 0xffff) != 0) {
          uVar12 = param_3;
        }
        uVar12 = uVar12 ^ uVar15 << 1;
        uVar15 = 1;
        uVar8 = uVar11;
        uVar13 = uVar9;
        do {
          uVar3 = uVar8 | uVar10;
          uVar1 = uVar12 & uVar3 & 0xffff;
          uVar10 = uVar15 << 1;
          uVar8 = uVar13 >> 1;
          if (uVar15 != uVar1 && uVar13 != uVar1) {
            uVar3 = 0;
          }
          uVar12 = uVar3 ^ uVar12;
          uVar15 = uVar10 & 0xfffe;
          uVar13 = uVar8;
        } while (uVar15 < uVar8);
        uVar10 = 0x80;
        uVar15 = 1;
        uVar14 = (ulong)uVar7;
        uVar8 = 1;
        do {
          uVar8 = uVar8 | uVar10;
          uVar13 = (uint)uVar14 & uVar8 & 0xffff;
          bVar4 = uVar10 != uVar13;
          uVar10 = uVar10 >> 1;
          if (uVar15 != uVar13 && bVar4) {
            uVar8 = 0;
          }
          uVar14 = (ulong)(uVar8 ^ (uint)uVar14);
          uVar8 = uVar15 << 1;
          uVar15 = uVar8 & 0xfffe;
        } while (uVar15 < uVar10);
        *(short *)(param_1 + (uVar14 & 0xffff) * 2) = (short)uVar12;
        uVar12 = uVar7 & 0xffff;
        uVar7 = uVar7 + 1;
      } while (uVar12 < 0xff);
    }
  }
  return;
}


