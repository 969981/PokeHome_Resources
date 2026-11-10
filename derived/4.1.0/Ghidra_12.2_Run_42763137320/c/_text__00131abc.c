/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00131abc; name: FUN_.text__00131abc
 */


void FUN__text__00131abc(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = param_1[1];
  FUN__text__00131bf8(&local_38,local_40,&local_40);
  if (param_1[0xc9] != 0) {
    (**(code **)(*(long *)(param_1[0xc9] + 0x48) + 0x18))();
  }
  param_1[0xc9] = local_38;
  uVar3 = *(undefined8 *)(param_1[0xc] + 0xb8);
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  local_38 = 0;
  FUN__text__003ce1e8(&local_48,uVar3,uVar1,param_1 + 0xd3,&local_38,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if (param_1[200] != 0) {
    (**(code **)(*(long *)(param_1[200] + 0x48) + 0x18))();
  }
  param_1[200] = local_48;
  lVar4 = param_1[0xc9];
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar2 = *(long *)(local_48 + 0xa8);
  *(long *)(local_48 + 0xa8) = lVar4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = FUN__text__003c79c0(param_1[0x5a],0x721818);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  return;
}


