/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472d50; name: FUN_.text__00472d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472d50(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  MutexType *pMVar5;
  
  puVar4 = _DAT_008a4d08;
  *_DAT_008a4d08 = 0;
  puVar3 = _DAT_008a4cf0;
  puVar1 = _DAT_008a4ce0;
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  pMVar5 = _DAT_008a4d18;
  *(undefined2 *)_DAT_008a4d18 = 0;
  *(undefined8 *)(pMVar5 + 4) = 0;
  *(undefined8 *)(pMVar5 + 0x10) = 0;
  *(undefined4 *)(pMVar5 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar5,true,0);
  FUN__text__001001d0(_DAT_008a38a0,pMVar5,&__DT_FINI_ARRAY);
  puVar1 = _DAT_008a4d10;
  uVar2 = _DAT_008a4ce8;
  *_DAT_008a4d10 = 0;
  puVar1[1] = 0;
  FUN__text__00463300(uVar2,0x100,1,1);
  return;
}


