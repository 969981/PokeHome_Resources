/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00232b34; name: FUN_.text__00232b34
 */


void FUN__text__00232b34(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48;
  long local_28;
  
  uVar1 = FUN__text__0022cc88(*(undefined8 *)(param_1 + 0x650));
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  param_2 = *(int *)(*(long *)(param_1 + 0x640) + 0xc) + param_2;
  *(int *)(*(long *)(param_1 + 0x640) + 0xc) = param_2;
  lVar2 = *(long *)(param_1 + 0x2d0);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN__text__001156d0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_28 + 0x60);
  local_48 = lVar4;
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_28 != 0)) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    uVar5 = *(undefined8 *)(param_1 + 0x648);
    if (lVar4 == 0) goto LAB__text__00232c0c;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x648);
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
LAB__text__00232c0c:
  FUN__text__0022f218(uVar5,lVar2,&local_48,0x881ebb96db0fd7c7,0x421fecb47510857,param_2 + 1,uVar1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


