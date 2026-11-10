/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e2a44; name: FUN_.text__004e2a44
 */


int FUN__text__004e2a44(undefined8 param_1,int *param_2,int param_3)

{
  if (param_3 == 1) {
    nn::os::WaitEvent((EventType *)(param_2 + 2));
    if (*(char *)((long)param_2 + 0x1b) == '\x01') {
      nn::os::FinalizeEvent((EventType *)(param_2 + 2));
    }
    param_3 = *param_2;
  }
  else if (*(char *)((long)param_2 + 0x1b) == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_2 + 2));
    return param_3;
  }
  return param_3;
}


