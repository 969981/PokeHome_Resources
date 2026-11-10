/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050c320; name: FUN_.text__0050c320
 */


long FUN__text__0050c320(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  for (lVar3 = *(long *)(*param_1 + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
      (lVar3 != 0 && (*(long *)(lVar3 + 0x78) != param_2)); lVar3 = *(long *)(lVar3 + 0x80)) {
  }
  return lVar3;
}


