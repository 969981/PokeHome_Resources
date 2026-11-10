/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5944; name: FUN_.text__006f5944
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5944(undefined1 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
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
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  (*(code *)*_DAT_008a6d08)(&local_c0,*param_2);
  FUN__text__006f2700(&local_c0,param_3);
  (*(code *)*_DAT_008a6d48)(&local_c0,*param_4,param_5);
  if ((*(byte *)(param_3 + 0x10) >> 5 & 1) != 0) {
    FUN__text__006f5f9c(&local_c0,param_4,param_5,param_6);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (*(code *)*_DAT_008a6d58)(param_1 + 0x10,&local_c0);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


