/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488f70; name: FUN_.text__00488f70
 */


ulong FUN__text__00488f70(ulong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  
  iVar2 = (int)param_1;
  if (iVar2 != 0) {
    uVar3 = param_1 & 0xffffffff;
    param_1 = 0;
    puVar4 = (uint *)((ulong)(iVar2 - 1) * 0x20 + 0x73b770);
    do {
      uVar1 = 0;
      if ((param_2 & 0xffff & *puVar4) != 0) {
        uVar1 = 1 << (ulong)(*puVar4 >> 0x10 & 0x1f);
      }
      uVar3 = uVar3 - 1;
      param_1 = (ulong)(uVar1 | (uint)param_1);
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  return param_1;
}


