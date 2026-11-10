/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013bab0; name: FUN_.text__0013bab0
 */


void FUN__text__0013bab0(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  ulong local_60;
  byte *pbStack_58;
  size_t local_50;
  long local_48;
  
  local_50 = strlen((char *)param_2);
  bVar1 = *param_2;
  local_60 = 0xcbf29ce484222645;
  pbVar3 = param_2;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_60 = (local_60 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  local_48 = 0;
  pbStack_58 = param_2;
  plVar2 = (long *)FUN__text__0013bb90(param_3,&local_60);
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
    (**(code **)(*plVar2 + 0x90))(plVar2,param_4);
  }
  *param_1 = (long)plVar2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


