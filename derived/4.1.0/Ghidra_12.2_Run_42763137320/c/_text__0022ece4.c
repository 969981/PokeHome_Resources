/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022ece4; name: FUN_.text__0022ece4
 */


void FUN__text__0022ece4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                        undefined8 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_58;
  undefined8 local_38;
  
  uVar2 = *param_3;
  lVar3 = *(long *)(param_2 + 0x2e8);
  local_58 = param_5;
  local_38 = param_4;
  if (lVar3 == 0) {
    FUN__text__005f2d98(uVar2,&local_58,0);
    lVar3 = *(long *)(param_2 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005f2d98(uVar2,&local_58,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(param_2 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar1 = 2;
  if ((param_8 & 1) == 0) {
    uVar1 = 0;
  }
  FUN__text__00166508(lVar3,0,param_7,param_6,uVar1,1);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__003c8c20(param_2,&local_38,0xb);
  return;
}


