/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023725c; name: FUN_.text__0023725c
 */


void FUN__text__0023725c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_48;
  long local_28;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74);
  iVar2 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),param_2,uVar1);
  FUN__text__00227bc4(*(undefined8 *)(param_1 + 0x640),iVar2);
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN__text__001156d0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = *(long *)(local_28 + 0x60);
  local_48 = lVar5;
  if ((lVar5 == 0) || ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_28 != 0)) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    uVar6 = *(undefined8 *)(param_1 + 0x648);
    if (lVar5 == 0) goto LAB__text__00237334;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x648);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
LAB__text__00237334:
  FUN__text__0022f34c(uVar6,lVar3,&local_48,0x881ebb96db0fd7c7,0x421fecb47510857,iVar2 + 1,uVar1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


