/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c6198; name: FUN_.text__002c6198
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__002c6198(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long local_60 [6];
  long local_18;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    FUN__text__002c5dc0(local_60,0x71e6ae);
    FUN__text__00113bb0(&local_18,*_DAT_0089f550,0,local_60,0,param_2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x18) = local_18;
    if (local_18 != 0) {
      plVar2 = (long *)(local_18 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if (*(long *)(param_1 + 0x20) != 0 || *(long *)(param_1 + 0xa0) != 0) {
        FUN__text__005d9010(local_18,param_1 + 0x10,1);
      }
      FUN__text__005d8de0(local_18);
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(plVar2);
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
    lVar1 = *(long *)(param_1 + 0x18);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
      *(ulong *)(param_1 + 0x120) = (long)*(uint **)(lVar1 + 400) + (ulong)**(uint **)(lVar1 + 400);
      FUN__text__002c5ef0(param_1);
    }
  }
  return *(long *)(param_1 + 0x120) != 0;
}


