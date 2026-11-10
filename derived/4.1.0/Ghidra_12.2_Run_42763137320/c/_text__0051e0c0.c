/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051e0c0; name: FUN_.text__0051e0c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051e0c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_008a4048;
  *_DAT_008a4048 = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 5) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  nn::os::InitializeMutex((MutexType *)(puVar1 + 4),true,0);
  puVar1[0xc] = 0;
  nn::os::InitializeEvent(puVar1 + 0xe,0,1);
  FUN__text__001001d0(_DAT_008a4040,puVar1,&__DT_FINI_ARRAY);
  return;
}


