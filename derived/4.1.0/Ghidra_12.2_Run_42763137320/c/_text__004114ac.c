/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004114ac; name: FUN_.text__004114ac
 */


void FUN__text__004114ac(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x663) == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x650));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x628));
    cVar1 = *(char *)(param_1 + 0x5eb);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x628));
    cVar1 = *(char *)(param_1 + 0x5eb);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x5d8));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5b0));
    cVar1 = *(char *)(param_1 + 0x573);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5b0));
    cVar1 = *(char *)(param_1 + 0x573);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x560));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x538));
    cVar1 = *(char *)(param_1 + 0x4fb);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x538));
    cVar1 = *(char *)(param_1 + 0x4fb);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x4e8));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4c0));
    cVar1 = *(char *)(param_1 + 0x483);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4c0));
    cVar1 = *(char *)(param_1 + 0x483);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x470));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x448));
    cVar1 = *(char *)(param_1 + 0x40b);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x448));
    cVar1 = *(char *)(param_1 + 0x40b);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x3f8));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3d0));
    cVar1 = *(char *)(param_1 + 0x393);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3d0));
    cVar1 = *(char *)(param_1 + 0x393);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x380));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x358));
    cVar1 = *(char *)(param_1 + 0x31b);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x358));
    cVar1 = *(char *)(param_1 + 0x31b);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x308));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2e0));
    cVar1 = *(char *)(param_1 + 0x2a3);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2e0));
    cVar1 = *(char *)(param_1 + 0x2a3);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x290));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x268));
    cVar1 = *(char *)(param_1 + 0x22b);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x268));
    cVar1 = *(char *)(param_1 + 0x22b);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x218));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f0));
    cVar1 = *(char *)(param_1 + 0x1b3);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f0));
    cVar1 = *(char *)(param_1 + 0x1b3);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x1a0));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x178));
    cVar1 = *(char *)(param_1 + 0x13b);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x178));
    cVar1 = *(char *)(param_1 + 0x13b);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x128));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x100));
    cVar1 = *(char *)(param_1 + 0xc3);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x100));
    cVar1 = *(char *)(param_1 + 0xc3);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0xb0));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x88));
    cVar1 = *(char *)(param_1 + 0x4b);
  }
  else {
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x88));
    cVar1 = *(char *)(param_1 + 0x4b);
  }
  if (cVar1 == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x38));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10));
    return;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10));
  return;
}


