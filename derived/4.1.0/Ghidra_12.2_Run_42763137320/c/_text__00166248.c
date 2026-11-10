/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00166248; name: FUN_.text__00166248
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00166248(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN__text__001589ac(*_DAT_0089f538,param_4);
  lVar1 = (param_2 & 0xffffffff) * 8;
  *(undefined4 *)(*(long *)(param_1 + 0x208) + lVar1) = param_3;
  *(uint *)(*(long *)(param_1 + 0x208) + lVar1 + 4) = uVar2 & 1;
  FUN__text__001662b4(param_1,param_2 & 0xffffffff,param_3,uVar2 & 1,0);
  return;
}


