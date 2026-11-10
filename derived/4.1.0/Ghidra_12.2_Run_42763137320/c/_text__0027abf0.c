/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027abf0; name: FUN_.text__0027abf0
 */


bool FUN__text__0027abf0(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_14 [4];
  
  local_14[0] = 0;
  local_68 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN__text__005ffbe4(&local_68,local_14,param_2,0);
  if (local_14[0] == 0) {
    local_14[0] = 10;
  }
  uVar2 = 0;
  do {
    uVar1 = FUN__text__00325c10(param_2,uVar2 & 0xffffffff);
    if ((uVar1 & 0x8001) != 0) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < local_14[0]);
  return (uVar1 & 0x8001) != 0;
}


