/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028f1e4; name: FUN_.text__0028f1e4
 */


void FUN__text__0028f1e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_60 = 0xa7649e0ad180b01a;
  uStack_58 = 0x71a942;
  local_50 = 0x1b;
  local_48 = 0;
  local_38 = param_2;
  FUN__text__00115650(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_60,0xb);
  lVar3 = *(long *)(local_40 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (local_40 == 0) goto LAB__text__0028f270;
  }
  (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  local_40 = 0;
LAB__text__0028f270:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x640) + 0x68);
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,(long)iVar1 * 8 + 0x730f20,lVar5);
  uVar2 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(param_1 + 0x110,&local_38,uVar2,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


