/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011a6a8; name: FUN_.text__0011a6a8
 */


void FUN__text__0011a6a8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12));
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x1d) != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18));
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12));
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[3];
  *param_1 = 0x8689e0;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x0011a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6);
  return;
}


