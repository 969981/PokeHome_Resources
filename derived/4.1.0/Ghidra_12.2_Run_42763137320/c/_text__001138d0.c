/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001138d0; name: FUN_.text__001138d0
 */


uint FUN__text__001138d0(undefined8 param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = param_3[1];
  if (uVar3 - *param_3 != 0) {
    uVar1 = (uVar3 - *param_3) + 1;
    if (uVar1 == 0) {
      lVar7 = *(long *)(param_2 + 0x9c0);
      uVar5 = (lVar7 + 1U) % 0x270;
      uVar3 = *(uint *)(param_2 + uVar5 * 4);
      *(uint *)(param_2 + lVar7 * 4) =
           *(uint *)(param_2 + ((lVar7 + 0x18dU) % 0x270) * 4) ^
           (uVar3 & 0x7ffffffe | *(uint *)(param_2 + lVar7 * 4) & 0x80000000) >> 1 ^
           -(uVar3 & 1) & 0x9908b0df;
      uVar3 = *(uint *)(param_2 + *(long *)(param_2 + 0x9c0) * 4);
      *(ulong *)(param_2 + 0x9c0) = uVar5;
      uVar3 = uVar3 ^ uVar3 >> 0xb;
      uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
      uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
      return uVar3 ^ uVar3 >> 0x12;
    }
    lVar7 = 0x1f;
    if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
      lVar7 = 0x20;
    }
    uVar4 = lVar7 - LZCOUNT(uVar1);
    uVar5 = uVar4 >> 5;
    if ((uVar4 & 0x1f) != 0) {
      uVar5 = uVar5 + 1;
    }
    uVar3 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar3 = ((uint)uVar4 & 0xff) / ((uint)uVar5 & 0xff);
    }
    uVar6 = *(ulong *)(param_2 + 0x9c0);
    uVar2 = 0;
    if (uVar5 <= uVar4) {
      uVar2 = 0xffffffff >> (ulong)(-uVar3 & 0x1f);
    }
    do {
      lVar7 = uVar6 * 4;
      uVar5 = uVar6 + 0x18d;
      uVar6 = (uVar6 + 1) % 0x270;
      uVar3 = *(uint *)(param_2 + uVar6 * 4);
      *(uint *)(param_2 + lVar7) =
           *(uint *)(param_2 + (uVar5 % 0x270) * 4) ^
           (uVar3 & 0x7ffffffe | *(uint *)(param_2 + lVar7) & 0x80000000) >> 1 ^
           -(uVar3 & 1) & 0x9908b0df;
      uVar3 = *(uint *)(param_2 + *(long *)(param_2 + 0x9c0) * 4);
      *(ulong *)(param_2 + 0x9c0) = uVar6;
      uVar3 = uVar3 ^ uVar3 >> 0xb;
      uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
      uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
      uVar3 = (uVar3 ^ uVar3 >> 0x12) & uVar2;
    } while (uVar1 <= uVar3);
    uVar3 = *param_3 + uVar3;
  }
  return uVar3;
}


