/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7900; name: FUN_.text__006d7900
 */


void FUN__text__006d7900(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x3e0);
  lVar2 = *(long *)(lVar1 + 1000);
  if ((*(long *)(lVar1 + 0x3f0) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x3f0) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar3 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar2 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d7968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


