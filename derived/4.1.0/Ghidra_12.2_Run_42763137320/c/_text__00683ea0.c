/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683ea0; name: FUN_.text__00683ea0
 */


void FUN__text__00683ea0(long *param_1,undefined4 param_2,undefined4 param_3,long param_4,
                        long param_5)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = param_5 + 8;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *(undefined2 *)((long)param_1 + 0xc) = 7;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return;
}


