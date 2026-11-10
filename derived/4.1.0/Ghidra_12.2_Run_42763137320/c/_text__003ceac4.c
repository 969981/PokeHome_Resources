/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ceac4; name: FUN_.text__003ceac4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ceac4(long param_1,uint param_2,int param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long local_70;
  long local_68 [6];
  long local_38;
  
  *(int *)(param_1 + 0x394) = param_3;
  lVar1 = *param_5;
  if (param_3 == 0) {
    local_38 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN__text__0013064c(local_68,_DAT_008a36e0);
    FUN__text__003c3abc(param_1,param_4,&local_38,local_68,0x71e815,1);
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
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  else {
    local_70 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN__text__0013064c(local_68,_DAT_008a36e0);
    FUN__text__003c3abc(param_1,param_4,&local_70,local_68,0x71e815,1);
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
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
  }
  if (param_2 < 6) {
    FUN__text__003c4b88(*(undefined4 *)((long)(int)param_2 * 4 + 0x73a914),param_1,2,0,1);
  }
  return;
}


