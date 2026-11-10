/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014bc40; name: FUN_.text__0014bc40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014bc40(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0xd2) != '\0') {
    lVar3 = *(long *)(*_DAT_0089f4f0 + 0x78);
    local_38 = param_2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__00145f44(&local_40,lVar3);
    lVar4 = *(long *)(param_1 + 0x68);
    lVar1 = local_40;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar1 = lVar4;
      if (local_40 != 0) {
        plVar2 = (long *)(local_40 + 0x48);
        local_40 = lVar4;
        (**(code **)(*plVar2 + 0x18))();
        lVar1 = local_40;
      }
    }
    local_40 = lVar1;
    FUN__text__0014d958(&local_48,param_2,&local_38);
    if (*(long *)(param_1 + 0x208) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x208) + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x208) = local_48;
    local_50 = local_40;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN__text__0014de68(local_48,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x208));
    (**(code **)(**(long **)(param_1 + 0x208) + 0x70))(*(long **)(param_1 + 0x208),0,0);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


