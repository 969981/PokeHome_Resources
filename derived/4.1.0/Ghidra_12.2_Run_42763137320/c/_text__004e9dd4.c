/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9dd4; name: FUN_.text__004e9dd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e9dd4(long param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x38) = param_2;
  if (param_4 < iVar1) {
    dVar3 = (double)NEON_ucvtf((ulong)_DAT_008ab030);
    dVar3 = ((double)(param_4 - iVar1) * 1000.0) / dVar3;
    dVar2 = 0.5;
    if (dVar3 <= 0.0) {
      dVar2 = -0.5;
    }
    *(int *)(param_1 + 0x38) = (int)(dVar2 + dVar3) + param_2;
    param_4 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(int *)(param_1 + 0x34) = param_4;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 2;
  return;
}


