/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d3b98; name: FUN_.text__003d3b98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d3b98(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long local_38;
  
  if ((param_3 & 1) == 0) {
    FUN__text__003c4ed0(&local_38,*_DAT_0089f550,1,param_2,0,*(undefined8 *)(param_1 + 0x58),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x68) = local_38;
    if (local_38 == 0) {
      return;
    }
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(param_1 + 0x70) != 0 || *(long *)(param_1 + 0xf0) != 0) {
      FUN__text__005d9010(local_38,param_1 + 0x60,1);
    }
  }
  else {
    FUN__text__003c4ed0(&local_38,*_DAT_0089f550,0,param_2,0,*(undefined8 *)(param_1 + 0x58),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x68) = local_38;
    if (local_38 == 0) {
      return;
    }
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(param_1 + 0x70) != 0 || *(long *)(param_1 + 0xf0) != 0) {
      FUN__text__005d9010(local_38,param_1 + 0x60,1);
    }
    FUN__text__005d8de0(local_38);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


