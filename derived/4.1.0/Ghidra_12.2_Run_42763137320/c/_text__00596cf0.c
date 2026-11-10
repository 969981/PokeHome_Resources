/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00596cf0; name: FUN_.text__00596cf0
 */


void FUN__text__00596cf0(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar5 = param_2 - 1;
  uVar4 = (uint)(1L << ((ulong)uVar5 & 0x3f));
  if ((param_4 & 1) == 0) {
    uVar11 = 0;
    do {
      uVar10 = 0x80;
      uVar5 = 1;
      uVar7 = uVar11 & 0xffffffff;
      uVar6 = 1;
      do {
        uVar6 = uVar6 | uVar10;
        uVar12 = (uint)uVar7 & uVar6 & 0xffff;
        bVar2 = uVar10 != uVar12;
        uVar10 = uVar10 >> 1;
        if (uVar5 != uVar12 && bVar2) {
          uVar6 = 0;
        }
        uVar12 = uVar6 ^ (uint)uVar7;
        uVar7 = (ulong)uVar12;
        uVar6 = uVar5 << 1;
        uVar5 = uVar6 & 0xfffe;
      } while (uVar5 < uVar10);
      uVar5 = -(uVar12 & 1) & uVar4;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x1e) >> 0x1f ^ uVar6 ^ uVar5 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x1d) >> 0x1f ^ uVar5 ^ uVar6 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x1c) >> 0x1f ^ uVar5 ^ uVar6 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x1b) >> 0x1f ^ uVar5 ^ uVar6 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x1a) >> 0x1f ^ uVar5 ^ uVar6 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x19) >> 0x1f ^ uVar5 ^ uVar6 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      uVar6 = uVar4 & (int)(uVar12 << 0x18) >> 0x1f ^ uVar5 ^ uVar6 << 1;
      uVar5 = 0;
      if ((uVar6 & uVar4) != 0) {
        uVar5 = param_3;
      }
      *(uint *)(param_1 + uVar11 * 4) = uVar5 ^ uVar6 << 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x100);
  }
  else {
    uVar11 = 0;
    if (uVar5 == 0) {
      do {
        uVar6 = 0x80;
        uVar5 = 1;
        uVar4 = 1;
        uVar7 = uVar11;
        do {
          uVar4 = uVar4 | uVar6;
          uVar10 = (uint)uVar7 & uVar4 & 0xffff;
          bVar2 = uVar6 != uVar10;
          uVar6 = uVar6 >> 1;
          if (uVar5 != uVar10 && bVar2) {
            uVar4 = 0;
          }
          uVar10 = uVar4 ^ (uint)uVar7;
          uVar7 = (ulong)uVar10;
          uVar4 = uVar5 << 1;
          uVar5 = uVar4 & 0xfffe;
        } while (uVar5 < uVar6);
        uVar4 = -(uVar10 & 1) & 1;
        uVar5 = 1;
        uVar12 = 1;
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = param_3;
        }
        uVar6 = (int)(uVar10 << 0x1e) >> 0x1f & 1U ^ uVar6 ^ uVar4 << 1;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        uVar6 = (int)(uVar10 << 0x1d) >> 0x1f & 1U ^ uVar4 ^ uVar6 << 1;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        uVar6 = (int)(uVar10 << 0x1c) >> 0x1f & 1U ^ uVar4 ^ uVar6 << 1;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        uVar6 = (int)(uVar10 << 0x1b) >> 0x1f & 1U ^ uVar4 ^ uVar6 << 1;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        uVar6 = (int)(uVar10 << 0x1a) >> 0x1f & 1U ^ uVar4 ^ uVar6 << 1;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        uVar6 = (int)(uVar10 << 0x19) >> 0x1f & 1U ^ uVar4 ^ uVar6 << 1;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        uVar8 = 0x80;
        uVar6 = (int)(uVar10 << 0x18) >> 0x1f & 1U ^ uVar4 ^ uVar6 << 1;
        uVar7 = uVar11;
        uVar4 = 0;
        if ((uVar6 & 1) != 0) {
          uVar4 = param_3;
        }
        do {
          uVar12 = uVar12 | uVar8;
          uVar10 = (uint)uVar7 & uVar12 & 0xffff;
          bVar2 = uVar8 != uVar10;
          uVar8 = uVar8 >> 1;
          if (uVar5 != uVar10 && bVar2) {
            uVar12 = 0;
          }
          uVar7 = (ulong)(uVar12 ^ (uint)uVar7);
          uVar12 = uVar5 << 1;
          uVar5 = uVar12 & 0xfffe;
        } while (uVar5 < uVar8);
        uVar5 = (uint)uVar11;
        uVar11 = (ulong)(uVar5 + 1);
        *(uint *)(param_1 + (uVar7 & 0xffff) * 4) = uVar4 ^ uVar6 << 1;
      } while ((uVar5 & 0xffff) < 0xff);
    }
    else {
      uVar6 = 0;
      do {
        uVar9 = 0x80;
        uVar10 = 1;
        uVar12 = 1;
        uVar8 = uVar6;
        do {
          uVar12 = uVar12 | uVar9;
          uVar1 = uVar8 & uVar12 & 0xffff;
          bVar2 = uVar9 != uVar1;
          uVar9 = uVar9 >> 1;
          if (uVar10 != uVar1 && bVar2) {
            uVar12 = 0;
          }
          uVar8 = uVar12 ^ uVar8;
          uVar12 = uVar10 << 1;
          uVar10 = uVar12 & 0xfffe;
        } while (uVar10 < uVar9);
        uVar10 = -(uVar8 & 1) & uVar4;
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x1e) >> 0x1f ^ uVar12 ^ uVar10 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x1d) >> 0x1f ^ uVar10 ^ uVar12 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x1c) >> 0x1f ^ uVar10 ^ uVar12 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x1b) >> 0x1f ^ uVar10 ^ uVar12 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x1a) >> 0x1f ^ uVar10 ^ uVar12 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x19) >> 0x1f ^ uVar10 ^ uVar12 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar12 = uVar4 & (int)(uVar8 << 0x18) >> 0x1f ^ uVar10 ^ uVar12 << 1;
        uVar10 = 0;
        if ((uVar12 & uVar4) != 0) {
          uVar10 = param_3;
        }
        uVar10 = uVar10 ^ uVar12 << 1;
        uVar12 = 1;
        uVar8 = 1 << (ulong)(uVar5 & 0x1f);
        do {
          uVar9 = uVar8 | uVar12;
          bVar2 = (uVar9 & uVar10) != uVar12;
          uVar12 = uVar12 * 2;
          bVar3 = (uVar9 & uVar10) != uVar8;
          uVar8 = uVar8 >> 1;
          if (bVar2 && bVar3) {
            uVar9 = 0;
          }
          uVar10 = uVar9 ^ uVar10;
        } while (uVar12 < uVar8);
        uVar9 = 0x80;
        uVar12 = 1;
        uVar11 = (ulong)uVar6;
        uVar8 = 1;
        do {
          uVar8 = uVar8 | uVar9;
          uVar1 = (uint)uVar11 & uVar8 & 0xffff;
          bVar2 = uVar9 != uVar1;
          uVar9 = uVar9 >> 1;
          if (uVar12 != uVar1 && bVar2) {
            uVar8 = 0;
          }
          uVar11 = (ulong)(uVar8 ^ (uint)uVar11);
          uVar8 = uVar12 << 1;
          uVar12 = uVar8 & 0xfffe;
        } while (uVar12 < uVar9);
        *(uint *)(param_1 + (uVar11 & 0xffff) * 4) = uVar10;
        uVar10 = uVar6 & 0xffff;
        uVar6 = uVar6 + 1;
      } while (uVar10 < 0xff);
    }
  }
  return;
}


