/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00678fd0; name: FUN_.text__00678fd0
 */


void FUN__text__00678fd0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_8;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    local_8 = 0;
    uVar1 = nnsslConnectionGetConnectionId(lVar3,&local_8);
    uVar2 = nnResultIsFailure(uVar1);
    if (((uVar2 & 1) == 0) && (local_8 != 0)) {
      uVar1 = nnsslConnectionDestroy(lVar3);
      nnResultIsFailure(uVar1);
    }
  }
  return;
}


