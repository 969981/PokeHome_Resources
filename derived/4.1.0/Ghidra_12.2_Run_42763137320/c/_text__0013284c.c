/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013284c; name: FUN_.text__0013284c
 */


void FUN__text__0013284c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar4 + 0x3d0);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x58), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(lVar4 + 0x3d0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_18 = 0;
    local_40 = &local_18;
    uStack_38 = 0x18cd1891cbc1757a;
    FUN__text__001331c0(lVar2,&local_40,0);
    uVar1 = local_18;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x20) = local_40;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x28) = local_40;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x30) = local_40;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x38) = local_40;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x40) = local_40;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x48) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x48) = local_40;
  uVar1 = FUN__text__001281e0(param_1);
  FUN__text__0015c5c4(&local_40,uVar1,0x721828);
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
  }
  *(undefined8 **)(param_1 + 0x50) = local_40;
  return;
}


