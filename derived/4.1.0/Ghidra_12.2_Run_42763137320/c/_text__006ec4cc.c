/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec4cc; name: FUN_.text__006ec4cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ec4cc(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3,
                        undefined8 *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (*(code *)*_DAT_008a6cb8)(&local_80);
  (*(code *)*_DAT_008a6cc0)(&local_80,*param_2);
  (*(code *)*_DAT_008a6cc8)(&local_80,*param_4,param_5,*param_3);
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (*(code *)*_DAT_008a6cd0)(param_1 + 0x10,&local_80);
  uVar1 = (*(code *)*_DAT_008a6cb0)(*param_4);
  param_1[1] = (byte)(uVar1 >> 1) & 2 | param_1[1] & 0xfc;
  *param_1 = 1;
  return;
}


