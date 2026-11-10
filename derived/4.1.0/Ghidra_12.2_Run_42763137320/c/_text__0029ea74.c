/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029ea74; name: FUN_.text__0029ea74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0029ea74(char *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long local_250;
  long local_248;
  undefined8 local_240;
  code *local_238;
  long local_230;
  undefined8 local_228;
  undefined1 auStack_220 [96];
  undefined8 local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [104];
  long local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar1 = _DAT_0089f550;
  lVar11 = *(long *)(param_1 + 8);
  FUN__text__005da7f0(&local_b8,*_DAT_0089f550,&DAT__text__00400070 + lVar11,
                      *(undefined8 *)(FUN__text__0040007c + lVar11 + 4));
  local_108 = local_b8;
  uStack_100 = uStack_b0;
  local_f8 = local_a8;
  local_f0 = local_a0;
  uStack_e8 = uStack_98;
  local_e0 = local_90;
  local_d8 = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  local_d0 = local_80;
  uStack_c8 = uStack_78;
  local_c0 = local_70;
  iVar6 = FUN__text__005dd608(&local_108);
  if (iVar6 == 3) {
    iVar6 = FUN__text__005dd648(&local_108,*(undefined8 *)(FUN__text__0040007c + lVar11 + 4));
    *(int *)(lVar11 + 0x400088) = iVar6;
  }
  else {
    iVar6 = 0;
    *(undefined4 *)(lVar11 + 0x400088) = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))((long *)(local_d8 + 0x48));
    local_d8 = 0;
    iVar6 = *(int *)(lVar11 + 0x400088);
  }
  if (iVar6 != 0) goto LAB__text__0029ee78;
  FUN__text__0029ef3c(&local_138,0x720239,&local_b8);
  if (*(int *)(param_1 + 4) == 0) {
    uVar8 = FUN__text__002a1864(0x34);
    local_250 = 0;
    iVar6 = FUN__text__0029f0e4(&local_250,&local_138,0);
    *(int *)(lVar11 + 0x400088) = iVar6;
    if (iVar6 == 0) {
      FUN__text__005dc04c(local_250,0,0);
      iVar6 = FUN__text__005dc198(local_250,lVar11 + 0x68,uVar8);
      *(int *)(lVar11 + 0x400088) = iVar6;
      if (iVar6 != 0) goto LAB__text__0029ece4;
      iVar6 = FUN__text__005dc190(local_250);
      bVar4 = iVar6 == 0;
      *(int *)(lVar11 + 0x400088) = iVar6;
      bVar5 = !bVar4;
    }
    else {
LAB__text__0029ece4:
      bVar4 = false;
      bVar5 = true;
    }
    if (local_250 != 0) {
      (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
    }
    if (bVar4) {
      FUN__text__0029f214(&local_250,0x720246,&local_b8);
      local_68 = 0;
      iVar6 = FUN__text__0029f0e4(&local_68,&local_250,0);
      *(int *)(lVar11 + 0x400088) = iVar6;
      if (iVar6 == 0) {
        FUN__text__005dc04c(local_68,0,0);
        iVar6 = FUN__text__005dc198(local_68,lVar11 + 0x68,uVar8);
        *(int *)(lVar11 + 0x400088) = iVar6;
        if (iVar6 != 0) goto LAB__text__0029ed5c;
        iVar6 = FUN__text__005dc190(local_68);
        bVar5 = iVar6 != 0;
        *(int *)(lVar11 + 0x400088) = iVar6;
      }
      else {
LAB__text__0029ed5c:
        bVar5 = true;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      if ((local_238 != (code *)0x0) && (local_250 != 0)) {
        (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
      }
      local_250 = 0;
      local_248 = -0x340d631b7bddd9bb;
      local_240 = 0x70f683;
      local_238 = (code *)0x0;
      if (local_230 != 0) {
        (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
      }
    }
    if ((!bVar5) && (*(int *)(lVar11 + 0x400088) == 0)) {
      if (*param_1 == '\0') {
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x400094));
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x4000a0));
        if (*(char *)(lVar11 + 0x4000ac) != '\0') {
          *(undefined1 *)(lVar11 + 0x4000ac) = 0;
          goto joined_r0x0029edd0;
        }
      }
      uVar7 = FUN__text__005dd758(&local_b8);
      *(undefined4 *)(lVar11 + 0x400088) = uVar7;
    }
  }
  else {
    uVar8 = *(undefined8 *)(FUN__text__0040007c + lVar11 + 4);
    *(undefined4 *)(lVar11 + 0x400088) = 1;
    uVar9 = nn::fs::IsSaveDataExisting(uVar8,&DAT__text__00400070 + lVar11);
    if (((uVar9 & 1) != 0) && (iVar6 = FUN__text__005dd2a0(&local_138), iVar6 != 0)) {
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1b8 = (code *)0x0;
      local_238 = (code *)0x0;
      local_230 = 0;
      local_250 = _DAT_0089f6e0 + 0x10;
      local_1c0 = 0;
      local_228 = 0;
      local_240 = 0;
      FUN__text__00113bb0(&local_68,*puVar1,0,&local_138,0,*(undefined8 *)(lVar11 + 0x50),0);
      lVar3 = local_68;
      local_248 = local_68;
      if (local_68 == 0) {
        local_250 = 0x867958;
        local_248 = 0;
      }
      else {
        plVar10 = (long *)(local_68 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN__text__005d8de0(lVar3);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        uVar9 = *(ulong *)(lVar3 + 0x180);
        *(ulong *)(&DAT__text__00400068 + lVar11) = uVar9;
        if (uVar9 < 0x400001) {
          memcpy((void *)(lVar11 + 0x68),*(void **)(lVar3 + 400),*(size_t *)(lVar3 + 0x180));
          *(undefined4 *)(lVar11 + 0x400088) = 0;
        }
        local_250 = _DAT_0089f718 + 0x10;
        FUN__text__005d9290(lVar3,&local_250);
        lVar11 = local_248;
        local_248 = 0;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
        }
      }
      pcVar2 = local_1b8;
      if (local_1b8 != (code *)0x0) {
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1c0 = 0;
        local_1b8 = (code *)0x0;
        (*pcVar2)(auStack_1a0);
      }
      pcVar2 = local_238;
      if (local_238 != (code *)0x0) {
        local_230 = 0;
        local_228 = 0;
        local_240 = 0;
        local_238 = (code *)0x0;
        (*pcVar2)(auStack_220);
      }
      if (local_248 != 0) {
        (**(code **)(*(long *)(local_248 + 0x48) + 0x18))();
      }
    }
  }
joined_r0x0029edd0:
  if ((local_120 != 0) && (local_138 != 0)) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  local_138 = 0;
  uStack_130 = 0xcbf29ce484222645;
  local_128 = 0x70f683;
  local_120 = 0;
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
  }
LAB__text__0029ee78:
  FUN__text__005daa98(*puVar1,&local_b8);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  return 1;
}


