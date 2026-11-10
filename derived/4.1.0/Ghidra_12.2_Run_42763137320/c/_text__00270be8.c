/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00270be8; name: FUN_.text__00270be8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00270be8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_58;
  long local_50 [4];
  
  FUN__text__00125548(param_1,param_1 + 0x5d0,0x2000000);
  local_50[0] = CONCAT44(local_50[0]._4_4_,1);
  FUN__text__00270e20(param_1 + 0x5d0,0x720176,local_50,0x100000);
  FUN__text__0012559c(param_1);
  FUN__text__001820d0(local_50);
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
  }
  lVar3 = local_50[0];
  *(long *)(param_1 + 0x5c8) = local_50[0];
  lVar2 = *(long *)(param_1 + 0x338);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  lVar1 = *(long *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x58) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (*(long *)(param_1 + 0x5c8) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x5c8) + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN__text__00271080(param_1);
  FUN__text__00181a9c(param_1);
  FUN__text__00181cd0(param_1);
  local_50[0] = 0xe0187710dcb7d7e;
  local_50[1] = 0x70b95a;
  local_50[2] = 0x1c;
  local_50[3] = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN__text__00115454(*(long *)(param_1 + 0xb8),local_50,0xb);
    if (local_50[3] != 0) {
      (**(code **)(*(long *)(local_50[3] + 0x48) + 0x18))();
    }
  }
  lVar3 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar3 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__00271c8c(&local_58,lVar3,local_50,0,0x72021a);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN__text__00137978(0x70eeac,*(undefined8 *)(param_1 + 0x5c8),
                      *(undefined8 *)(*_DAT_008a1640 + 0x28),0);
  FUN__text__00130104(0x71e39f,0x710dca,*(undefined8 *)(param_1 + 0x5c8));
  FUN__text__00136338(0x713ada,*(undefined8 *)(param_1 + 0x5c8),0);
  FUN__text__0010e28c(*_DAT_0089f5a0,0xf,0);
  return;
}


