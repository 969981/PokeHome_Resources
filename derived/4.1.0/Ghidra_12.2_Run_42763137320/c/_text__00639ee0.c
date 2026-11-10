/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00639ee0; name: FUN_.text__00639ee0
 */


undefined4 FUN__text__00639ee0(ulong *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte local_24 [4];
  
  puVar4 = (undefined4 *)FUN__text__00638c24(local_24);
  if (param_1 == (ulong *)0x0) {
    uVar3 = FUN__text__006029bc();
    return puVar4[uVar3 & 0xff];
  }
  if (local_24[0] == 1) {
    return *puVar4;
  }
  if (local_24[0] == 0) {
    uVar6 = *param_1;
    uVar7 = param_1[1];
    uVar5 = uVar7 ^ uVar6;
    *param_1 = (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar5 << 0x10 ^ uVar5;
    param_1[1] = uVar5 >> 0x1b | uVar5 << 0x25;
    return puVar4[(int)uVar7 + (int)uVar6 & 0xff];
  }
  uVar3 = (uint)local_24[0];
  uVar6 = *param_1;
  uVar7 = param_1[1];
  lVar2 = -0x20;
  if ((uVar3 << (ulong)((uint)LZCOUNT(uVar3) & 0x1f) & 0x7fffffff) == 0) {
    lVar2 = -0x1f;
  }
  do {
    uVar5 = uVar6 ^ uVar7;
    uVar1 = (int)uVar6 + (int)uVar7 & (uint)(0xffffffffffffffff >> (lVar2 + LZCOUNT(uVar3) & 0x3fU))
    ;
    uVar7 = uVar5 >> 0x1b | uVar5 << 0x25;
    uVar6 = (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar5 << 0x10 ^ uVar5;
  } while (uVar3 <= uVar1);
  *param_1 = uVar6;
  param_1[1] = uVar7;
  return puVar4[uVar1 & 0xff];
}


