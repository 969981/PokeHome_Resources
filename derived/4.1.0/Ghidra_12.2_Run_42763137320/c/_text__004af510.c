/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af510; name: FUN_.text__004af510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004af510(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = _DAT_008a45d8;
  if (((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) >> 2 & 1) != 0)) &&
     (uVar3 = (ulong)*param_1, uVar3 != 0)) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar4 + 4);
      if (param_3 <= uVar1 && uVar1 < param_4) {
        FUN__text__0048d700(*puVar2,*(undefined4 *)(param_2 + 0x280));
        uVar3 = (ulong)*param_1;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < uVar3);
  }
  return;
}


