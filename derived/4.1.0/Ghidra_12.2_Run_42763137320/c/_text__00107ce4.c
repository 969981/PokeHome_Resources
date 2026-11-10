/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00107ce4; name: FUN_.text__00107ce4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00107ce4(long *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  
  lVar1 = _DAT_0089f6a8;
  puVar2 = (undefined8 *)param_1[0x42];
  param_1[0x42] = 0;
  *param_1 = lVar1 + 0x10;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0x43] + 0x18))
              ((long *)param_1[0x43],puVar2,param_1[0x44],param_1[0x45]);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x33];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x36);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x23];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x26);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x13];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x16);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[3];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00107da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6);
  return;
}


