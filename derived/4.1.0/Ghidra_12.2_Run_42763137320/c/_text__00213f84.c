/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00213f84; name: FUN_.text__00213f84
 */


void FUN__text__00213f84(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,
                        undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined1 *)((long)param_1 + 0x14) = param_4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


