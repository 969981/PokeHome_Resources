/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b25a8; name: FUN_.text__006b25a8
 */


void FUN__text__006b25a8(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_44;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined4 uStack_38;
  undefined4 local_34;
  
  if ((*(byte *)(param_1 + 0x62) >> 5 & 1) == 0) {
    local_44 = 0x15;
    local_40 = 0xffffffffff;
    uStack_3b = 0xffffff;
    uStack_38 = 0xffffffff;
    local_34 = 0xff;
    FUN__text__006b3b30(param_1,0x15,&local_44,0x14,1);
  }
  FUN__text__006b3b30(param_1,param_2,param_3,param_4,0);
  return;
}


