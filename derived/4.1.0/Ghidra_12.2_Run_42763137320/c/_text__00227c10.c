/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00227c10; name: FUN_.text__00227c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00227c10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50 [3];
  long local_38;
  
  FUN__text__00125548(param_1,param_1 + 0x5d0,0x2000000);
  FUN__text__0012559c(param_1);
  FUN__text__001820d0(local_50);
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x5c8) = local_50[0];
  lVar2 = *(long *)(param_1 + 0x338);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
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
    plVar4 = (long *)(*(long *)(param_1 + 0x5c8) + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN__text__00227fe0(param_1);
  FUN__text__00181a9c(param_1);
  FUN__text__00181cd0(param_1);
  FUN__text__005e927c(local_50,0x872450);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN__text__00115454(*(long *)(param_1 + 0xb8),local_50,0xb);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  **(undefined4 **)(param_1 + 0xa40) = 0;
  lVar2 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar2 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__002298b4(&local_58,lVar2,local_50,0,0x7167d4);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  lVar2 = param_1 + 0xa48;
  *(undefined8 *)(local_58 + 0x650) = *(undefined8 *)(param_1 + 0xa40);
  *(long *)(local_58 + 0x658) = lVar2;
  lVar1 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar1 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__00229bd8(&local_60,lVar1,local_50,0,0x717c25);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  lVar1 = param_1 + 0xa50;
  *(undefined8 *)(local_60 + 0x640) = *(undefined8 *)(param_1 + 0xa40);
  *(long *)(local_60 + 0x648) = lVar2;
  *(long *)(local_60 + 0x650) = lVar1;
  lVar3 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar3 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__00229f04(&local_68,lVar3,local_50,0,0x70ee43);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  *(undefined8 *)(local_68 + 0x640) = *(undefined8 *)(param_1 + 0xa40);
  *(long *)(local_68 + 0x648) = lVar2;
  *(long *)(local_68 + 0x650) = lVar1;
  lVar3 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar3 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__0022a254(&local_70,lVar3,local_50,0,0x713143);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  *(undefined8 *)(local_70 + 0x640) = *(undefined8 *)(param_1 + 0xa40);
  *(long *)(local_70 + 0x648) = lVar2;
  *(long *)(local_70 + 0x650) = lVar1;
  lVar3 = *(long *)(param_1 + 0x5c8);
  local_50[0] = *(long *)(lVar3 + 0x58);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
  }
  FUN__text__0022a690(&local_78,lVar3,local_50,0,0x713c6f);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  *(undefined8 *)(local_78 + 0x640) = *(undefined8 *)(param_1 + 0xa40);
  *(long *)(local_78 + 0x648) = lVar2;
  *(long *)(local_78 + 0x650) = lVar1;
  FUN__text__00136338(0x714599,*(undefined8 *)(param_1 + 0x5c8),0x7168c7);
  FUN__text__00130104(0x71e39f,0x710dca,*(undefined8 *)(param_1 + 0x5c8));
  FUN__text__0010e28c(*_DAT_0089f5a0,0x11,0);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


