/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d7ac0; name: FUN_.text__005d7ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d7ac0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  
  piVar3 = _DAT_008a0300;
  if (0 < *(int *)(param_1 + 0xa4)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      iVar2 = *piVar3;
      local_60 = 0;
      uStack_58 = 0;
      lVar4 = *(long *)(param_2 + 0x58);
      lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x58) + lVar6;
      thunk_FUN__text__006ec64c(lVar1,&local_60);
      FUN__text__006ed12c(lVar4 + (long)iVar2 * 0x168,uVar5 & 0xffffffff,&local_60,
                          (long)*(int *)(lVar1 + 0x68),
                          (long)*(int *)(lVar1 + 0x6c) * (long)*(int *)(lVar1 + 0x68));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x70;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0xa4));
  }
  FUN__text__006ecfcc(*(long *)(param_2 + 0x58) + (long)*piVar3 * 0x168,param_1 + 0x58);
  return;
}


