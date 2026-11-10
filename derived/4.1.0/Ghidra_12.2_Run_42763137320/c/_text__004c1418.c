/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1418; name: FUN_.text__004c1418
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c1418(long *param_1)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = *_DAT_008a4450;
  if (lVar2 == 0) {
    return;
  }
  *(ulong *)(lVar2 + 0x30) =
       (ulong)*_DAT_008a4b70 + (ulong)*_DAT_008a4b70 * (ulong)*(uint *)(*_DAT_008a45c0 + 0x88);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  FUN__text__004c1a60(lVar2,uVar1);
  return;
}


