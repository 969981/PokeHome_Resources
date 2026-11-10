/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472630; name: FUN_.text__00472630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472630(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_38;
  
  puVar1 = _DAT_008a45c0;
  for (lVar3 = *(long *)(_DAT_008a4d08 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x240)) {
    uVar2 = FUN__text__00476ea4(lVar3,param_1,1);
    if ((uVar2 & 1) != 0) {
      local_38 = 0x400000000;
      FUN__text__00474488(lVar3,&local_38,1);
      FUN__text__004b4b80(*puVar1,*(undefined8 *)(lVar3 + 0x1e8),0,0);
    }
  }
  FUN__text__00415730(param_1);
  return;
}


