/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ed80; name: FUN_.text__0040ed80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040ed80(float param_1,int param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0x1f;
  if ((-96.3 <= param_1) && (param_1 <= 0.0)) {
    if (param_2 <= *_DAT_008a4608) {
      *_DAT_008a4608 = param_2;
      fVar4 = exp2f(param_1 * 0.1660964);
      pfVar1 = _DAT_008a4f30;
      fVar5 = 0.0;
      if ((-37.0 <= param_1 * 0.05) && (param_1 * 0.05 <= 37.0)) {
        uVar3 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar5 = (fVar5 * (fVar5 * 0.32518977 + 0.020805772) + 0.65304345) *
                (float)(uVar3 & 0xff800000);
      }
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
      *_DAT_008a4f40 = fVar4;
      *pfVar1 = param_1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


