/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006078a0; name: FUN_.text__006078a0
 */


uint FUN__text__006078a0(undefined8 param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN__text__00601290(&local_50,param_2,param_3 & 0xff);
  uVar2 = FUN__text__005f3560(param_1,&local_50);
  uVar1 = 0;
  if ((uVar2 & 1) == 0) {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    FUN__text__00607930(&local_50,param_2 & 0xffffffff,param_3);
    uVar1 = FUN__text__005f3560(param_1,&local_50);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


