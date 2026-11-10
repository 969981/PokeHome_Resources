/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e41f0; name: FUN_.text__004e41f0
 */


void FUN__text__004e41f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xe) = 0;
  *param_1 = 0x88f078;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((long)param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[1] = uVar1;
  return;
}


