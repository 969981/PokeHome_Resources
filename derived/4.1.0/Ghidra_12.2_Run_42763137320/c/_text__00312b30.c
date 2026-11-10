/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312b30; name: FUN_.text__00312b30
 */


void FUN__text__00312b30(long param_1,short param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  short *psVar10;
  ulong uVar11;
  
  bVar9 = *(byte *)(param_1 + 0x4225);
  if ('\0' < (char)bVar9) {
    uVar7 = 0;
    do {
      if (*(short *)(param_1 + 0x4248 + uVar7 * 2) == param_2) {
        if ((int)uVar7 < (char)bVar9 + -1) {
          uVar11 = uVar7 & 0xffffffff;
          do {
            cVar4 = (char)uVar11;
            uVar5 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar5;
            *(undefined2 *)(param_1 + 0x4248 + (long)cVar4 * 2) =
                 *(undefined2 *)(param_1 + 0x4248 + (long)(int)uVar7 * 2 + 2);
            uVar5 = (uint)(char)uVar5;
            uVar7 = (ulong)uVar5;
            bVar9 = *(byte *)(param_1 + 0x4225);
          } while ((int)uVar5 < (char)bVar9 + -1);
        }
        *(byte *)(param_1 + 0x4225) = bVar9 - 1;
        return;
      }
      uVar7 = uVar7 + 1;
    } while (bVar9 != uVar7);
  }
  bVar9 = *(byte *)(param_1 + 0x4224);
  uVar7 = (ulong)bVar9;
  if ('\0' < (char)bVar9) {
    psVar10 = (short *)(param_1 + 0x4228);
    do {
      if (*psVar10 == param_2) {
        return;
      }
      uVar7 = uVar7 - 1;
      psVar10 = psVar10 + 1;
    } while (uVar7 != 0);
  }
  bVar8 = bVar9 + 1;
  bVar1 = 0x10 < bVar8;
  if ((bVar9 + 1 & 0xf0) != 0) {
    bVar8 = 0x10;
  }
  uVar5 = (uint)(char)(bVar9 - bVar1);
  *(byte *)(param_1 + 0x4224) = bVar8;
  if (0 < (int)uVar5) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x4226);
    uVar7 = (ulong)uVar5 & 0xff;
    do {
      uVar5 = uVar6 & 0xffff;
      uVar2 = 1 << (ulong)((uint)uVar7 & 0x1f);
      uVar3 = uVar6 | uVar2;
      uVar6 = uVar6 & (uVar2 ^ 0xffffffff);
      if ((uVar5 >> (ulong)((uint)(uVar7 - 1) & 0x1f) & 1) != 0) {
        uVar6 = uVar3;
      }
      uVar11 = uVar7 - 1;
      *(undefined2 *)(param_1 + 0x4228 + (uVar7 & 0xff) * 2) =
           *(undefined2 *)(param_1 + 0x4228 + (uVar7 - 1 & 0xffffffff) * 2);
      bVar1 = 0 < (long)uVar7;
      uVar7 = uVar11;
    } while (uVar11 != 0 && bVar1);
    *(short *)(param_1 + 0x4226) = (short)uVar6;
  }
  *(short *)(param_1 + 0x4228) = param_2;
  if ((param_3 & 1) == 0) {
    *(ushort *)(param_1 + 0x4226) = *(ushort *)(param_1 + 0x4226) & 0xfffe;
    return;
  }
  *(ushort *)(param_1 + 0x4226) = *(ushort *)(param_1 + 0x4226) | 1;
  return;
}


