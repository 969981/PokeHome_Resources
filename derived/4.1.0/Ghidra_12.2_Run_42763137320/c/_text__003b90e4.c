/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b90e4; name: FUN_.text__003b90e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b90e4(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = _DAT_008a3670 + 0x10;
  FUN__text__003b9b90(param_1 + 2);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)((long)param_1 + 0x1a4) = param_2[2];
  *(undefined4 *)(param_1 + 0x35) = param_2[3];
  *(undefined1 *)((long)param_1 + 0x1ac) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5];
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x36) = uVar1;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = uVar1;
  return;
}


