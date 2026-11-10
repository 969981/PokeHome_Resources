/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042769c; name: FUN_.text__0042769c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042769c(long param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uVar4 = *(uint *)(lVar3 + 0x313);
  if ((uVar4 >> 0x17 & 1) == 0) {
    uVar2 = 0;
    if ((ulong)*_DAT_008a4b68 != 0) {
      uVar2 = ((ulong)*(uint *)(lVar3 + 0x30c) * (ulong)*(uint *)(param_1 + 0x24)) /
              (ulong)*_DAT_008a4b68;
    }
    FUN__text__004de2f0(uVar2,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                        *(undefined2 *)(lVar3 + 0x310),param_2,param_3);
  }
  else {
    if (*(short *)(lVar3 + 0x310) == 0) {
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x24));
      fVar5 = (fVar5 * 1000.0) / fVar6;
    }
    else {
      fVar5 = (float)FUN__text__004de200(param_1 + 0x24);
      lVar3 = *(long *)(param_1 + 0x18);
      uVar4 = *(uint *)(lVar3 + 0x313);
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x24));
    }
    FUN__text__004de2f0((int)(fVar5 * *(float *)(lVar3 + 0x30c) * fVar6 * 0.001),
                        *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                        *(undefined2 *)(lVar3 + 0x310),param_2,param_3);
  }
  if (((uVar4 >> 0x18 & 1) == 0) ||
     (lVar3 = FUN__text__004af5c0(param_1 + 0xa0,*param_2), lVar3 == 0)) {
    return;
  }
  uVar1 = *(undefined4 *)(lVar3 + 4);
  *param_2 = uVar1;
  FUN__text__004de2f0(uVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),*param_3
                      ,param_2,param_3);
  return;
}


