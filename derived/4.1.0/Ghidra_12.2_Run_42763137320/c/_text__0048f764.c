/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f764; name: FUN_.text__0048f764
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__0048f764(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0x501502f9;
  }
  lVar2 = FUN__text__0045b010();
  if (((lVar2 != 0) && (uVar4 = (ulong)*(byte *)(lVar2 + 0x1f8), uVar4 != 0xff)) &&
     (lVar3 = *(long *)(lVar2 + uVar4 * 0x18 + 0x30), lVar3 != 0)) {
    uVar1 = *(int *)(lVar2 + uVar4 * 0x18 + 0x38) - 2;
    if (*(float *)(lVar3 + (ulong)uVar1 * 0xc + 4) <= *_DAT_008a4f40) {
      uVar4 = (ulong)*(byte *)(lVar2 + 0x1f9);
      if (((uVar4 == 0xff) || (lVar5 = *(long *)(lVar2 + uVar4 * 0x18 + 0x30), lVar5 == 0)) ||
         (*(float *)(lVar5 + (ulong)(*(int *)(lVar2 + uVar4 * 0x18 + 0x38) - 2) * 0xc + 4) <=
          *_DAT_008a4f40)) {
        return *(undefined4 *)(lVar3 + (ulong)uVar1 * 0xc);
      }
    }
  }
  return 0x501502f9;
}


