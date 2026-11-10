/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023937c; name: FUN_.text__0023937c
 */


void FUN__text__0023937c(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN__text__001156d0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_28 + 0x60);
  local_48 = lVar3;
  if ((lVar3 == 0) || ((**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(), local_28 != 0)) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    uVar4 = *(undefined8 *)(param_1 + 0x648);
    if (lVar3 == 0) goto LAB__text__00239438;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x648);
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
LAB__text__00239438:
  FUN__text__0022f148(uVar4,lVar1,&local_48,*param_3,0xd0219cb4c67a652,param_2 + 4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


