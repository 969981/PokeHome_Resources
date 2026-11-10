/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d0c68; name: FUN_.text__003d0c68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d0c68(long *param_1,ulong param_2)

{
  long *plVar1;
  long local_68 [6];
  long local_38;
  
  (**(code **)(*param_1 + 0x28))(local_68);
  if ((param_2 & 1) == 0) {
    FUN__text__003c4ed0(&local_38,*_DAT_0089f550,1,local_68,0,param_1[0xb],0);
    if (param_1[0xd] != 0) {
      (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    }
    param_1[0xd] = local_38;
    if (local_38 == 0) goto LAB__text__003d0da4;
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (param_1[0xe] != 0 || param_1[0x1e] != 0) {
      FUN__text__005d9010(local_38,param_1 + 0xc,1);
    }
  }
  else {
    FUN__text__003c4ed0(&local_38,*_DAT_0089f550,0,local_68,0,param_1[0xb],0);
    if (param_1[0xd] != 0) {
      (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    }
    param_1[0xd] = local_38;
    if (local_38 == 0) goto LAB__text__003d0da4;
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (param_1[0xe] != 0 || param_1[0x1e] != 0) {
      FUN__text__005d9010(local_38,param_1 + 0xc,1);
    }
    FUN__text__005d8de0(local_38);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
LAB__text__003d0da4:
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
  return;
}


