/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052559c; name: FUN_.text__0052559c
 */


void FUN__text__0052559c(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  ulong local_40;
  long local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_24 = 0x7f7fffff;
  local_68 = 0;
  local_60 = 0;
  local_38 = param_2;
  local_28 = param_3;
  FUN__text__00525630(&local_68,param_1);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0xbc)
  ;
  if (local_48 != 0) {
    local_40 = local_40 & 0xffffffff00000000;
    FUN__text__00400fc0(9);
    local_48 = 0;
    local_40 = local_40 & 0xffffffff;
  }
  if (local_60 != 0) {
    local_58 = local_58 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
  }
  return;
}


