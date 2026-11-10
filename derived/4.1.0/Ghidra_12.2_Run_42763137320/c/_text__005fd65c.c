/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd65c; name: FUN_.text__005fd65c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fd65c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_60 [6];
  long local_18;
  
  FUN__text__006020a0(local_60);
  FUN__text__00113bb0(&local_18,*_DAT_0089f550,0,local_60,0,param_2,0);
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
    FUN__text__005d8de0(local_18);
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(plVar1);
  }
  if ((local_60[3] != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_60[2] = 0x70f683;
  local_60[3] = 0;
  if (local_60[4] != 0) {
    (**(code **)(*(long *)(local_60[4] + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(*(long *)(param_1 + 0x58) + 400);
  return;
}


