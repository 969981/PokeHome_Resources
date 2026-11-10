/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a044; name: FUN_.text__0053a044
 */


undefined1  [16]
FUN__text__0053a044(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                   undefined8 *param_4,long param_5,long param_6,long param_7,long param_8)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long lStack_60;
  long local_58;
  float local_50;
  undefined2 local_4c;
  undefined1 auStack_48 [8];
  long local_28;
  
  *param_4 = *(undefined8 *)(param_8 + 0xb0);
  FUN__text__00521214(param_7,&local_28,auStack_48);
  local_80 = FUN__text__00521904(param_7,local_28 != param_8);
  local_98 = *(undefined8 *)(param_5 + 0xe8);
  uStack_90 = *(undefined8 *)(param_5 + 0xf0);
  local_68 = param_6 + 0x80;
  lStack_60 = param_6 + 0x48;
  local_58 = param_6 + 8;
  local_4c = 0x100;
  local_50 = SQRT(*(float *)(param_7 + 0x40) * *(float *)(param_7 + 0x40) +
                  *(float *)(param_7 + 0x3c) * *(float *)(param_7 + 0x3c)) +
             *(float *)(param_6 + 0x128);
  local_88 = *(undefined8 *)(param_5 + 0xf8);
  uStack_78 = param_2;
  local_70 = param_3;
  FUN__text__00539e90(param_4,&local_98,param_5 + 0x58,&local_80);
  return ZEXT816(0);
}


