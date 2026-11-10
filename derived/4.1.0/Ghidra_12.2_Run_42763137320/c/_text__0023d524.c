/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023d524; name: FUN_.text__0023d524
 */


void FUN__text__0023d524(long param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_38;
  undefined8 local_18;
  
  local_18 = 0xfcaabfcb436d8936;
  if (param_2 != 1) {
    local_18 = 0xfcaac0cb436d8ae9;
  }
  FUN__text__001156d0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 == 0) {
    pcVar2 = *(code **)(*(long *)(local_38 + 0x48) + 0x18);
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if ((local_38 != 0) && ((**(code **)(*(long *)(local_38 + 0x48) + 0x18))(), lVar3 == 0))
    goto LAB__text__0023d5cc;
    pcVar2 = *(code **)(*(long *)(lVar3 + 0x48) + 0x10);
  }
  (*pcVar2)();
LAB__text__0023d5cc:
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,&local_18,lVar5);
  uVar1 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(param_1 + 0x110,0x72ba70,uVar1,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


