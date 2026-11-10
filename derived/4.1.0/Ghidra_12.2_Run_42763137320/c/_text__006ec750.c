/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec750; name: FUN_.text__006ec750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ec750(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 **)(param_1 + 8) = param_2;
  uVar1 = *param_2;
  *(undefined1 **)(param_1 + 0xb0) = param_1 + 0x10;
  (*DAT_00c609c0)(param_1 + 0x10,uVar1);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  (*(code *)*_DAT_008a6d70)(*(undefined8 *)(param_1 + 0xb0),&DAT__text__006ec800);
  (*(code *)*_DAT_008a6d78)(*(undefined8 *)(param_1 + 0xb0),param_1);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  param_1[1] = *(byte *)((long)param_2 + 0x300c) >> 2 & 2 | param_1[1] & 0xfc;
  *param_1 = 1;
  return;
}


