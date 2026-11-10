/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa7a0; name: FUN_.text__001aa7a0
 */


bool FUN__text__001aa7a0(long param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_40;
  long local_38;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x158);
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_38 = lVar5;
  FUN__text__0019485c(uVar6,&local_38,param_2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar4 = FUN__text__00306588(lVar5);
  if (((uVar4 & 1) == 0) && (sVar2 = FUN__text__003068a0(lVar5), sVar2 != 0)) {
    FUN__text__00320ca0();
    sVar2 = FUN__text__00306600(lVar5);
    sVar3 = FUN__text__00306a00(lVar5,0);
    bVar1 = sVar2 != sVar3;
    FUN__text__003068a8(lVar5);
    local_40 = lVar5;
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    FUN__text__001951d4(uVar6,&local_40,param_2,1);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  else {
    bVar1 = false;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return bVar1;
}


