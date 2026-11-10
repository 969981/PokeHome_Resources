/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683d4c; name: FUN_.text__00683d4c
 */


void FUN__text__00683d4c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,
                        undefined1 param_4,undefined4 param_5)

{
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)((long)param_1 + 0xd) = param_4;
  *(undefined4 *)(param_1 + 1) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}


