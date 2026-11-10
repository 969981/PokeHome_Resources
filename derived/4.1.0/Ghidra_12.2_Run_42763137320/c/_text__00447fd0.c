/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447fd0; name: FUN_.text__00447fd0
 */


undefined8 FUN__text__00447fd0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  lVar7 = *(long *)(param_2 + 8);
  if ((lVar7 != 0) &&
     (((DAT_00aea600 != 0 &&
       (fVar8 = (float)NEON_ucvtf(DAT_00aea608), fVar8 / (float)DAT_00aea600 <= 0.9)) ||
      (FUN__text__00449e00(&DAT_00aea5f8), DAT_00aea600 != 0)))) {
    lVar3 = DAT_00aea5f8;
    uVar1 = ((uint)lVar7 ^ (uint)lVar7 >> 0x10) * -0x7a143595;
    uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
    uVar1 = uVar1 ^ uVar1 >> 0x10;
    uVar2 = 0;
    if (DAT_00aea600 != 0) {
      uVar2 = uVar1 / DAT_00aea600;
    }
    uVar4 = (ulong)(uVar1 - uVar2 * DAT_00aea600);
    lVar5 = *(long *)(DAT_00aea5f8 + uVar4 * 8);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      do {
        uVar2 = ((uint)lVar6 ^ (uint)lVar6 >> 0x10) * -0x7a143595;
        uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
        if ((uVar2 ^ uVar2 >> 0x10) == uVar1) {
          return 1;
        }
        lVar6 = *(long *)(lVar6 + 0x70);
      } while (lVar6 != 0);
    }
    *(long *)(lVar7 + 0x70) = lVar5;
    *(long *)(lVar3 + uVar4 * 8) = lVar7;
    DAT_00aea608 = DAT_00aea608 + 1;
  }
  return 1;
}


