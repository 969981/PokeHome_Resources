/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129e70; name: FUN_.text__00129e70
 */


void FUN__text__00129e70(undefined8 param_1,undefined8 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulong local_60;
  byte *pbStack_58;
  size_t local_50;
  long local_48;
  
  local_50 = strlen((char *)param_3);
  bVar1 = *param_3;
  local_60 = 0xcbf29ce484222645;
  pbVar2 = param_3;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    local_60 = (local_60 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar2;
  }
  local_48 = 0;
  pbStack_58 = param_3;
  FUN__text__00129f20(param_1,param_2,&local_60,param_4 & 1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


