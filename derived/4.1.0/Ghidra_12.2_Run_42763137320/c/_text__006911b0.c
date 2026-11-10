/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006911b0; name: FUN_.text__006911b0
 */


long FUN__text__006911b0(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x1884) == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar1 = FUN__text__00690390(param_1,auStack_48,uVar3 & 0xffff,param_2);
    if ((uVar1 & 1) != 0) {
      local_44 = 0;
      uVar1 = FUN__text__00690390(param_1,&local_44,uVar3 & 0xffff,param_2);
      if (((uVar1 & 1) != 0) &&
         (lVar2 = FUN__text__00691ba0(param_1 + 0x30,param_2,param_3,local_44), lVar2 != 0)) {
        return lVar2;
      }
    }
    uVar3 = uVar3 + 1;
    if (*(uint *)(param_1 + 0x1884) <= uVar3) {
      return 0;
    }
  } while( true );
}


