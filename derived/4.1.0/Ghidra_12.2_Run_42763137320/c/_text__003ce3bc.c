/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce3bc; name: FUN_.text__003ce3bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ce3bc(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long local_68 [6];
  undefined8 local_38;
  long local_18;
  
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_38 = *_DAT_008a36e0;
  FUN__text__0013064c(local_68,&local_38);
  FUN__text__003c4ed0(&local_18,*_DAT_0089f550,1,local_68,0,param_3,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x58) = local_18;
  if (local_18 != 0) {
    plVar1 = (long *)(local_18 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(param_1 + 0x60) != 0 || *(long *)(param_1 + 0xe0) != 0) {
      FUN__text__005d9010(local_18,param_1 + 0x50,1);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
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
  return;
}


