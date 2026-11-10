/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022170c; name: FUN_.text__0022170c
 */


void FUN__text__0022170c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x6c0);
  lVar3 = *(long *)(lVar1 + 0x2e8);
  local_28 = 0x3b867779fe0cd961;
  if (lVar3 == 0) {
    FUN__text__005f2d98(uVar2,&local_28,0);
    lVar3 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005f2d98(uVar2,&local_28,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar3,0,param_2,4,1,1);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__003c8c20(lVar1,0x729450,0xb);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


