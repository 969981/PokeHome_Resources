/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683d64; name: FUN_.text__00683d64
 */


void FUN__text__00683d64(undefined8 *param_1,undefined1 param_2,undefined4 param_3,
                        undefined4 param_4,undefined8 *param_5,undefined8 param_6,undefined8 param_7
                        )

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = param_4;
  param_1[5] = param_6;
  param_1[6] = param_7;
  if (param_5 == (undefined8 *)0x0) {
    FUN__text__00679e88();
    return;
  }
  uVar1 = *param_5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_5 + 1);
  param_1[3] = uVar1;
  return;
}


