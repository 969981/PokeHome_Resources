/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b87c0; name: FUN_.text__004b87c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b87c0(EventType *param_1)

{
  ThreadType *pTVar1;
  
  param_1[0x28] = (EventType)0x1;
  pTVar1 = _DAT_008a4f58;
  if (_DAT_008a4f58[0x40] != (ThreadType)0x0) {
    if (param_1[0x13] == (EventType)0x1) {
      nn::os::SignalEvent(param_1);
    }
    nn::os::WaitThread(pTVar1);
    nn::os::DestroyThread(pTVar1);
    if (*(long *)(pTVar1 + 0x1c8) != 0) {
      free(*(void **)(pTVar1 + 0x1c0));
    }
    *(undefined8 *)(pTVar1 + 0x1c0) = 0;
    pTVar1[0x40] = (ThreadType)0x0;
    *_DAT_008a4f68 = 0;
  }
  if (param_1[0x13] == (EventType)0x1) {
    nn::os::FinalizeEvent(param_1);
    return;
  }
  return;
}


