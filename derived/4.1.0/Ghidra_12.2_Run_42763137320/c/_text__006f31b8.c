/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f31b8; name: FUN_.text__006f31b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f31b8(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  (*(code *)*_DAT_008a7578)(&local_70,*param_2);
  FUN__text__006f296c(&local_70,param_3);
  if ((*(byte *)((long)param_2 + 0x300c) & 1) == 0) {
    (*(code *)*_DAT_008a75d0)(&local_70,0);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (*(code *)*_DAT_008a7640)(param_1 + 0x10,&local_70);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


