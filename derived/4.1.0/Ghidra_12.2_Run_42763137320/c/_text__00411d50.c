/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411d50; name: FUN_.text__00411d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00411d50(void)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  pMVar1 = _DAT_008a4870;
  *(undefined2 *)_DAT_008a4870 = 0;
  *(undefined8 *)(pMVar1 + 4) = 0;
  *(undefined8 *)(pMVar1 + 0x10) = 0;
  *(undefined4 *)(pMVar1 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar1,true,0);
  *(undefined8 *)(pMVar1 + 0x24) = 0;
  *(undefined2 *)(pMVar1 + 0x20) = 0;
  *(undefined8 *)(pMVar1 + 0x30) = 0;
  *(undefined4 *)(pMVar1 + 0x38) = 0;
  nn::os::InitializeMutex(pMVar1 + 0x20,true,0);
  *(undefined8 *)(pMVar1 + 0x40) = 0;
  FUN__text__001001d0(_DAT_008a4868,pMVar1,&__DT_FINI_ARRAY);
  puVar2 = _DAT_008a4878;
  *_DAT_008a4878 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  FUN__text__001001d0(FUN__text__00411cc0,0,&__DT_FINI_ARRAY);
  uVar3 = _DAT_008a48c8;
  FUN__text__0041404c(_DAT_008a48c8);
  FUN__text__001001d0(_DAT_008a4898,uVar3,&__DT_FINI_ARRAY);
  lVar4 = _DAT_008a48d0;
  *(undefined8 *)(_DAT_008a48d0 + 0x1c0) = 0;
  *(undefined4 *)(lVar4 + 0x1d0) = 0;
  return;
}


