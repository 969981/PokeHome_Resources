/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cba74; name: FUN_.text__003cba74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cba74(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_68 [6];
  long local_38;
  
  FUN__text__001699a0(local_68,0x71dc95);
  FUN__text__0010e730(&local_38,*_DAT_0089f550,1,local_68,0,param_2,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x18) = local_38;
  if (local_38 != 0) {
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(param_1 + 0x20) != 0 || *(long *)(param_1 + 0xa0) != 0) {
      FUN__text__005d9010(local_38,param_1 + 0x10,1);
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
  FUN__text__003ce3bc(*_DAT_0089f588,0,param_2);
  return;
}


