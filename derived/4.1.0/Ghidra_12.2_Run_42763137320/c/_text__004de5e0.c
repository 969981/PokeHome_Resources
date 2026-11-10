/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de5e0; name: FUN_.text__004de5e0
 */


void FUN__text__004de5e0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN__text__004de754(param_1,param_2,0,0,0,**(undefined4 **)(param_2 + 8));
  uVar3 = param_1[5];
  uVar1 = param_1[3];
  if (uVar3 == 0) {
    uVar2 = param_1[4];
    do {
      uVar2 = uVar2 + 1;
      param_1[4] = uVar2;
      if (param_1[2] * uVar1 + 0x1f >> 5 <= uVar2) {
        *param_1 = param_1[2];
        param_1[1] = uVar1;
        param_1[5] = 0;
        return;
      }
      uVar3 = *(uint *)(*(long *)(param_1 + 6) + (ulong)uVar2 * 4);
      param_1[5] = uVar3;
    } while (uVar3 == 0);
  }
  else {
    uVar2 = param_1[4];
  }
  uVar4 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar2 = uVar4 | uVar2 << 5;
  param_1[5] = uVar3 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2 - uVar3 * uVar1;
  return;
}


