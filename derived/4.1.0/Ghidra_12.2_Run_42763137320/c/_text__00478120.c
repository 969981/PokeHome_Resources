/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00478120; name: FUN_.text__00478120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00478120(long *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if ((*(ushort *)(param_1 + 0x41) & 1) == 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1);
    if ((*(ushort *)(param_1 + 0x41) >> 4 & 1) != 0) {
      (**(code **)(*param_1 + 0x80))(param_1);
    }
  }
  fVar6 = *(float *)(param_1 + 0x11) * 0.05;
  fVar5 = 0.0;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (-37.0 <= fVar6) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < 37.0;
      bVar2 = fVar6 == 37.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    uVar4 = (uint)(*(float *)(param_1 + 0x11) * 1393317.6 + 1.0653532e+09);
    fVar5 = (float)(uVar4 & 0x7fffff | 0x3f800000);
    fVar5 = (fVar5 * (fVar5 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar4 & 0xff800000);
  }
  return *(float *)(param_1 + 0x20) * fVar5 <= *_DAT_008a4f40;
}


