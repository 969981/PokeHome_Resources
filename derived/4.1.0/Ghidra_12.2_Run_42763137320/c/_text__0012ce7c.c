/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012ce7c; name: FUN_.text__0012ce7c
 */


undefined8 FUN__text__0012ce7c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x3d0) == 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x58);
  uVar3 = 0;
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    uVar3 = *param_2;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x58);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_40 = &local_18;
    local_18 = 0;
    uStack_38 = uVar3;
    FUN__text__0012f540(lVar1,&local_40,0);
    uVar3 = local_18;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return uVar3;
}


