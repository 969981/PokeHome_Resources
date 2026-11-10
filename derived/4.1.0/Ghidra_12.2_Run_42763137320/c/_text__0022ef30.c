/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022ef30; name: FUN_.text__0022ef30
 */


void FUN__text__0022ef30(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                        undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                        undefined4 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_58;
  undefined8 local_38;
  
  uVar1 = *param_3;
  lVar2 = *(long *)(param_2 + 0x2e8);
  local_58 = param_5;
  local_38 = param_4;
  if (lVar2 == 0) {
    FUN__text__005f2d98(uVar1,&local_58,0);
    lVar2 = *(long *)(param_2 + 0x2e0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__005f2d98(uVar1,&local_58,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(param_2 + 0x2e0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar2,0,param_6,4,2,1);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_2 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar2,1,param_7,2,2,1);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_2 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar2,2,param_8,2,2,1);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_2 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar2,3,param_9,2,2,1);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_2 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar2,4,param_10,2,2,1);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN__text__003c8c20(param_2,&local_38,0xb);
  return;
}


