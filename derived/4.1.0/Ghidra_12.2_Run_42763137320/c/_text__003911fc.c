/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003911fc; name: FUN_.text__003911fc
 */


uint FUN__text__003911fc(long param_1,ushort param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 0x402) {
    uVar4 = *(uint *)(param_1 + (ulong)param_2 * 0x20 + 0x60);
  }
  else {
    uVar4 = 0;
  }
  iVar3 = FUN__text__005fdad0();
  uVar1 = 0;
  if (iVar3 != 0x2e8) {
    uVar1 = param_3 & 0xff;
  }
  uVar2 = 0;
  if (1 < iVar3 - 0x298U) {
    uVar2 = uVar1;
  }
  return uVar4 >> (ulong)(uVar2 & 0x1f) & 1;
}


