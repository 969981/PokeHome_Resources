/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165374; name: FUN_.text__00165374
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00165374(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_48;
  long local_28;
  
  lVar1 = FUN__text__001682b4(*_DAT_0089f530,param_3);
  if (lVar1 != 0) {
    uVar2 = FUN__text__005f29c0(lVar1,param_4,param_2);
    return uVar2;
  }
  FUN__text__00113bb0(&local_28,*_DAT_0089f550,0,param_3,0,*(undefined8 *)(param_1 + 0x228),0);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
  }
  lVar1 = local_28;
  *(long *)(param_1 + 0x68) = local_28;
  plVar3 = (long *)(local_28 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if (*(long *)(param_1 + 0x70) != 0 || *(long *)(param_1 + 0xf0) != 0) {
    FUN__text__005d9010(lVar1,param_1 + 0x60,1);
  }
  FUN__text__005d8de0(lVar1);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  local_48 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 400);
  FUN__text__001594b4(&local_28,*(undefined8 *)(param_1 + 0x228),&local_48);
  uVar2 = FUN__text__005f29c0(local_28,param_4,param_2);
  lVar1 = local_28;
  local_28 = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return uVar2 & 0xffffffff;
}


