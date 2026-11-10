/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f5e0; name: FUN_.text__0048f5e0
 */


void FUN__text__0048f5e0(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = *(long *)(param_1 + 8);
  if (((*(ushort *)(lVar6 + 0x14a) & 1) != 0) &&
     (lVar4 = *(long *)(*(long *)(lVar6 + 8) + 0x38), lVar4 != 0)) {
    FUN__text__00490660(lVar4,param_2);
    lVar6 = *(long *)(param_1 + 8);
  }
  lVar4 = *(long *)(*(long *)(lVar6 + 8) + 0x38);
  if (lVar4 == 0) {
    return;
  }
  fVar8 = *(float *)(lVar6 + 0xec) * 0.05;
  fVar7 = 0.0;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (-37.0 <= fVar8) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar8)) {
      bVar1 = fVar8 < 37.0;
      bVar2 = fVar8 == 37.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    uVar5 = (uint)(*(float *)(lVar6 + 0xec) * 1393317.6 + 1.0653532e+09);
    fVar7 = (float)(uVar5 & 0x7fffff | 0x3f800000);
    fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar5 & 0xff800000);
  }
  FUN__text__00490de0(fVar7,lVar4,param_2,*(undefined4 *)(lVar6 + 0x114));
  return;
}


