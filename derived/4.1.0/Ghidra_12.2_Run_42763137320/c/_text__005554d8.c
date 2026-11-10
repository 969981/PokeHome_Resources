/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005554d8; name: FUN_.text__005554d8
 */


uint FUN__text__005554d8(uint *param_1,void *param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong __n;
  
  uVar4 = 0;
  if ((param_2 != (void *)0x0) && (param_4 != 0)) {
    uVar2 = param_1[3];
    if (((param_5 & 1) == 0) || (uVar2 != 0)) {
      uVar3 = param_1[2];
      uVar4 = uVar2;
      if (param_4 <= uVar2) {
        uVar4 = param_4;
      }
      param_1[3] = uVar2 - uVar4;
      uVar2 = *param_1;
    }
    else {
      uVar2 = *param_1;
      uVar1 = (param_1[1] - param_3) + param_1[6];
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      uVar1 = uVar1 - uVar4 * uVar2;
      uVar3 = param_1[2];
      uVar4 = uVar2;
      if (uVar3 <= uVar1) {
        uVar4 = 0;
      }
      uVar4 = (uVar1 - uVar3) + uVar4;
      if (param_4 <= uVar4) {
        uVar4 = param_4;
      }
    }
    uVar2 = uVar2 - uVar3;
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      uVar1 = uVar2;
    }
    memcpy(param_2,(void *)(*(long *)(param_1 + 4) + (ulong)uVar3 * 4),(ulong)(uVar1 << 2));
    memset((void *)(*(long *)(param_1 + 4) + (ulong)param_1[2] * 4),0,(ulong)(uVar1 << 2));
    if (uVar2 < uVar4) {
      __n = (ulong)((uVar4 - uVar1) * 4);
      memcpy((void *)((long)param_2 + (ulong)uVar1 * 4),*(void **)(param_1 + 4),__n);
      memset(*(void **)(param_1 + 4),0,__n);
    }
    uVar2 = *param_1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (param_1[2] + uVar4) / uVar2;
    }
    param_1[2] = (param_1[2] + uVar4) - uVar3 * uVar2;
  }
  return uVar4;
}


