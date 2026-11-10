/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022246c; name: FUN_.text__0022246c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0022246c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_58;
  long local_50 [4];
  
  FUN__text__00125548(param_1,param_1 + 0x5d0,0x2000000);
  FUN__text__0012559c(param_1);
  FUN__text__001820d0(local_50);
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x5c8) = local_50[0];
  lVar2 = *(long *)(param_1 + 0x338);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  lVar1 = *(long *)(local_50[0] + 0x58);
  *(long *)(local_50[0] + 0x58) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (*(long *)(param_1 + 0x5c8) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x5c8) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN__text__00222660(param_1);
  FUN__text__00181a9c(param_1);
  FUN__text__00181cd0(param_1);
  local_50[0] = 0x731a27d38aba3869;
  local_50[1] = 0x714f96;
  local_50[2] = 0x1e;
  local_50[3] = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN__text__00115454(*(long *)(param_1 + 0xb8),local_50,0xb);
    if (local_50[3] != 0) {
      (**(code **)(*(long *)(local_50[3] + 0x48) + 0x18))();
    }
  }
  lVar2 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar2 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__00222f84(&local_58,lVar2,local_50,0,0x7167d4);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN__text__00130104(0x71e39f,0x710dca,*(undefined8 *)(param_1 + 0x5c8));
  FUN__text__00136338(0x713ada,*(undefined8 *)(param_1 + 0x5c8),0);
  FUN__text__0010e28c(*_DAT_0089f5a0,0x10,0);
  return;
}


