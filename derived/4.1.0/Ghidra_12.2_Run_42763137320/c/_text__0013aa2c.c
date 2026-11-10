/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013aa2c; name: FUN_.text__0013aa2c
 */


void FUN__text__0013aa2c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1[0xbb] != 0) {
    (**(code **)(*(long *)(param_1[0xbb] + 0x48) + 0x18))();
    param_1[0xbb] = 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0xab];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0xae);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x99];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x9b] = 0;
    param_1[0x9a] = 0;
    param_1[0x99] = 0;
    param_1[0x98] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x9c);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x87];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x89] = 0;
    param_1[0x88] = 0;
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x8a);
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*(long *)(param_1[0x80] + 0x48) + 0x18))();
    param_1[0x80] = 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x71];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x74);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x61];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[99] = 0;
    param_1[0x62] = 0;
    param_1[0x61] = 0;
    param_1[0x60] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 100);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x51];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x54);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x41];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x44);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x31];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x34);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x21];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x24);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x11];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x14);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[1];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0013abc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 4);
  return;
}


