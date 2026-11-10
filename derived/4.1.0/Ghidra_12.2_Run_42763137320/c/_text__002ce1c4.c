/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce1c4; name: FUN_.text__002ce1c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__002ce1c4(long *param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long local_70;
  long local_68 [5];
  undefined4 local_40;
  long local_38;
  
  pcVar1 = (code *)param_1[0x2f];
  if (pcVar1 != (code *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (*pcVar1)(param_1 + 0x32);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x32);
    lVar2 = param_3[3];
    param_1[0x2f] = param_3[1];
    param_1[0x31] = lVar2;
    lVar2 = *param_3;
    param_1[0x30] = param_3[2];
    param_1[0x2e] = lVar2;
  }
  FUN__text__002ce4c4(&local_70,param_2,0x87b0b8);
  FUN__text__002ce388(local_68,&local_70);
  FUN__text__00113bb0(&local_38,*_DAT_0089f550,0,local_68,0,0,0);
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
  }
  param_1[0xd] = local_38;
  if (local_38 != 0) {
    plVar3 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (param_1[0xe] != 0 || param_1[0x1e] != 0) {
      FUN__text__005d9010(local_38,param_1 + 0xc,1);
    }
    FUN__text__005d8de0(local_38);
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(plVar3);
  }
  if ((local_68[3] != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_68[2] = 0x70f683;
  local_68[3] = 0;
  if (local_68[4] != 0) {
    (**(code **)(*(long *)(local_68[4] + 0x48) + 0x18))();
  }
  local_68[4] = 0;
  local_40 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return local_38 != 0;
}


