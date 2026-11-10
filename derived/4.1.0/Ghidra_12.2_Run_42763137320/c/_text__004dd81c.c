/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd81c; name: FUN_.text__004dd81c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004dd81c(long *param_1)

{
  long lVar1;
  
  FUN__text__00428414();
  lVar1 = _DAT_008a4ea0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *param_1 = lVar1 + 0x10;
  FUN__text__004af19c(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[3] == 0) {
    *(undefined2 *)((long)param_1 + 0x54) = 1;
    return;
  }
  *(undefined2 *)((long)param_1 + 0x54) = *(undefined2 *)(param_1[3] + 0x310);
  return;
}


