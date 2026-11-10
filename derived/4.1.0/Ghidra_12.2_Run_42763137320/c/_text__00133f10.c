/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00133f10; name: FUN_.text__00133f10
 */


void FUN__text__00133f10(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  long *plVar4;
  ulong local_50;
  byte *pbStack_48;
  size_t local_40;
  long local_38;
  
  local_40 = strlen((char *)param_1);
  bVar1 = *param_1;
  local_50 = 0xcbf29ce484222645;
  pbVar3 = param_1;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_50 = (local_50 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  local_38 = 0;
  pbStack_48 = param_1;
  plVar2 = (long *)FUN__text__00134070(param_2,&local_50);
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2 + 9;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar2 + 0x88))(plVar2,param_3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


