/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cb840; name: FUN_.text__006cb840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006cb840(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  lVar1 = _DAT_008a6ad0 + 0x10;
  param_1[3] = param_3;
  param_1[4] = param_2;
  param_1[5] = 0;
  *param_1 = lVar1;
  param_1[1] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  uVar2 = (ulong)*(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x18) != 0) {
    puVar3 = (ushort *)(*(long *)(param_2 + 0x20) + 0x30);
    do {
      if ((((1 < puVar3[-0x18]) || (1 < puVar3[-0x10])) || (1 < puVar3[-8])) ||
         (((1 < *puVar3 || (1 < puVar3[8])) || (1 < puVar3[0x10])))) {
        *(undefined1 *)((long)param_1 + 0x14) = 1;
        return;
      }
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 0x30;
    } while (uVar2 != 0);
  }
  return;
}


