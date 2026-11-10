/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031da3c; name: FUN_.text__0031da3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__0031da3c(long *param_1)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = (uint *)*param_1;
  uVar2 = param_1[1];
  if (uVar2 < *puVar1) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(long *)(puVar1 + 2) + uVar2 * 0x20;
    return auVar4 << 0x40;
  }
  iVar3 = (int)uVar2 - *puVar1;
  lVar5 = LZCOUNT(iVar3 + 0x10);
  auVar6._0_8_ = 0x1c - lVar5;
  auVar6._8_8_ = *(long *)(*(long *)(puVar1 + 4) + (0x1b - lVar5) * 8 + 8) +
                 (ulong)(uint)(iVar3 - *(int *)(_DAT_008a2a58 + auVar6._0_8_ * 4)) * 0x20;
  return auVar6;
}


