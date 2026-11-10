/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00103784; name: FUN_.text__00103784
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00103784(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_78 [6];
  long local_48;
  
  plVar4 = _DAT_0089f550;
  *(undefined8 *)(*_DAT_0089f550 + 0x1c8) = *(undefined8 *)(*_DAT_0089f3d8 + 0x348);
  FUN__text__00109dd0(local_78,_DAT_0089f558,0x714e03,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x1a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x1a8) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x1b0) != 0 || *(long *)(param_1 + 0x230) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x1a0,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010b800(local_78,_DAT_0089f558,0x71914f,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010ba10(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x2b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b8) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x2b8) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x2c0) != 0 || *(long *)(param_1 + 0x340) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x2b0,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010c1a0(local_78,_DAT_0089f558,0x70c1fa,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x4d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4d8) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x4d8) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x4e0) != 0 || *(long *)(param_1 + 0x560) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x4d0,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010c3b0(local_78,_DAT_0089f558,0x70b6f0,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x5e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5e8) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x5e8) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x5f0) != 0 || *(long *)(param_1 + 0x670) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x5e0,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010c5c0(local_78,_DAT_0089f558,0x711888,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x6f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6f8) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x6f8) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x700) != 0 || *(long *)(param_1 + 0x780) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x6f0,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010c7d0(local_78,_DAT_0089f558,0x712570,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x808) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x808) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x808) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x810) != 0 || *(long *)(param_1 + 0x890) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x800,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010c9e0(local_78,_DAT_0089f558,0x71c09f,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0x918) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x918) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0x918) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0x920) != 0 || *(long *)(param_1 + 0x9a0) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0x910,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010cbf0(local_78,_DAT_0089f558,0x70c217,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0xa28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa28) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0xa28) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0xa30) != 0 || *(long *)(param_1 + 0xab0) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0xa20,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010c5c0(local_78,_DAT_0089f558,0x711899,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0xb38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb38) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0xb38) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0xb40) != 0 || *(long *)(param_1 + 0xbc0) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0xb30,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010ce00(local_78,_DAT_0089f558,0x70f661,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0xc48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc48) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0xc48) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0xc50) != 0 || *(long *)(param_1 + 0xcd0) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0xc40,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010d010(local_78,_DAT_0089f558,0x7185f6,0x70f683);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0xd58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd58) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0xd58) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0xd60) != 0 || *(long *)(param_1 + 0xde0) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0xd50,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__001063fc(local_78,0x720b85);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0xe68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xe68) + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  *(long *)(param_1 + 0xe68) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(long *)(param_1 + 0xe70) != 0 || *(long *)(param_1 + 0xef0) != 0) {
      FUN__text__005d9010(lVar1,param_1 + 0xe60,1);
    }
    FUN__text__005d8de0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  FUN__text__0010652c(local_78,0x71c0b9);
  lVar2 = *plVar4;
  lVar1 = *(long *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1c8);
  }
  FUN__text__0010a590(&local_48,lVar2,0,local_78,0,lVar1,0);
  if (*(long *)(param_1 + 0xf78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xf78) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xf78) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(param_1 + 0xf80) != 0 || *(long *)(param_1 + 0x1000) != 0) {
      FUN__text__005d9010(local_48,param_1 + 0xf70,1);
    }
    FUN__text__005d8de0(local_48);
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(plVar4);
  }
  if ((local_78[3] != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_78[2] = 0x70f683;
  local_78[3] = 0;
  if (local_78[4] != 0) {
    (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
  }
  return;
}


