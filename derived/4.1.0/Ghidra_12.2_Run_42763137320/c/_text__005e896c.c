/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e896c; name: FUN_.text__005e896c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e896c(long param_1,char *param_2,uint param_3,int param_4)

{
  ThreadType *pTVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x259) = 0;
  pTVar1 = (ThreadType *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x25a) = 0;
  if ((int)param_3 < 0) {
    nn::os::CreateThread
              (pTVar1,_DAT_008a5b48,pTVar1,*(void **)(param_1 + 0x220),*(ulong *)(param_1 + 0x248),
               param_4);
    param_3 = 0xffffffff;
    uVar2 = 7;
  }
  else {
    nn::os::CreateThread
              (pTVar1,_DAT_008a5b48,pTVar1,*(void **)(param_1 + 0x220),*(ulong *)(param_1 + 0x248),
               param_4,param_3);
    uVar2 = 1L << ((ulong)param_3 & 0x3f);
  }
  nn::os::SetThreadCoreMask(pTVar1,param_3,uVar2);
  nn::os::SetThreadName(pTVar1,param_2);
  nn::os::StartThread(pTVar1);
  return;
}


