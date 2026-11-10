/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030d9a0; name: FUN_.text__0030d9a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0030d9a0(char *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long local_230;
  long local_228;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 auStack_200 [96];
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_38;
  
  puVar1 = _DAT_0089f550;
  lVar8 = *(long *)(param_1 + 8);
  FUN__text__005da7f0(&local_a0,*_DAT_0089f550,lVar8 + 0x68,*(undefined8 *)(lVar8 + 0xf00098));
  local_f0 = local_a0;
  uStack_e8 = uStack_98;
  local_e0 = local_90;
  local_d8 = local_88;
  uStack_d0 = uStack_80;
  local_c8 = local_78;
  local_c0 = local_70;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  local_b8 = local_68;
  uStack_b0 = uStack_60;
  local_a8 = local_58;
  iVar3 = FUN__text__005dd608(&local_f0);
  if (iVar3 == 3) {
    iVar3 = FUN__text__005dd648(&local_f0,*(undefined8 *)(lVar8 + 0xf00098));
    *(int *)(lVar8 + 0x60) = iVar3;
  }
  else {
    iVar3 = 0;
    *(undefined4 *)(lVar8 + 0x60) = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))((long *)(local_c0 + 0x48));
    iVar3 = *(int *)(lVar8 + 0x60);
    local_c0 = 0;
  }
  if (iVar3 != 0) {
    *(undefined1 *)(lVar8 + 0xf00091) = 1;
    goto LAB__text__0030de54;
  }
  *(undefined1 *)(lVar8 + 0xf00091) = 0;
  FUN__text__0029ef3c(&local_120,0x70b9e8,&local_a0);
  if (*(int *)(param_1 + 4) == 1) {
    local_230 = 0;
    iVar3 = FUN__text__0029f0e4(&local_230,&local_120,0);
    *(int *)(lVar8 + 0x60) = iVar3;
    if (iVar3 == 0) {
      FUN__text__005dc04c(local_230,0,0);
      iVar3 = FUN__text__005dc198(local_230,lVar8 + 0x90,*(undefined4 *)(lVar8 + 0xf000a0));
      bVar6 = false;
      *(int *)(lVar8 + 0x60) = iVar3;
      if (iVar3 == 0) {
        if (*(uint *)(lVar8 + 0xf000a0) < 0x1405) {
          lVar9 = *_DAT_008a2b50;
          FUN__text__005dc04c(local_230,0x1404 - (ulong)*(uint *)(lVar8 + 0xf000a0),1);
          iVar3 = FUN__text__005dc198(local_230,lVar9 + 0x1454,2);
          *(int *)(lVar8 + 0x60) = iVar3;
          if (iVar3 == 0) {
            iVar3 = FUN__text__005dc198(local_230,lVar9 + 0x1456,2);
            *(int *)(lVar8 + 0x60) = iVar3;
            if (iVar3 == 0) {
              iVar3 = FUN__text__005dc198(local_230,lVar9 + 0x1458,4);
              *(int *)(lVar8 + 0x60) = iVar3;
              if (iVar3 == 0) {
                iVar3 = FUN__text__005dc198(local_230,lVar9 + 0x145c,4);
                *(int *)(lVar8 + 0x60) = iVar3;
                if (iVar3 == 0) goto LAB__text__0030dd38;
              }
            }
          }
          goto LAB__text__0030db18;
        }
LAB__text__0030dd38:
        bVar6 = true;
      }
    }
    else {
LAB__text__0030db18:
      bVar6 = false;
    }
    if (local_230 != 0) {
      (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
    }
    if (bVar6) {
LAB__text__0030dd54:
      if (*(int *)(lVar8 + 0x60) == 0) {
        if (*param_1 == '\0') {
          nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x78));
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x84));
          if (*(char *)(lVar8 + 0xf00090) != '\0') {
            *(char *)(lVar8 + 0xf00090) = '\0';
            goto joined_r0x0030dd74;
          }
        }
        uVar4 = FUN__text__005dd758(&local_a0);
        *(undefined4 *)(lVar8 + 0x60) = uVar4;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      local_230 = 0;
      if (*(long *)(lVar8 + 0xf00098) == 0x10015f008c54000) {
        iVar3 = FUN__text__00214dfc(&local_230,&local_120,0x50cdd8,0);
        *(int *)(lVar8 + 0x60) = iVar3;
      }
      else {
        iVar3 = FUN__text__0029f0e4(&local_230,&local_120,0);
        *(int *)(lVar8 + 0x60) = iVar3;
      }
      lVar9 = local_230;
      if (iVar3 == 0) {
        FUN__text__005dc04c(local_230,0,0);
        iVar3 = FUN__text__005dc198(local_230,lVar8 + 0x90,*(undefined4 *)(lVar8 + 0xf000a0));
        *(int *)(lVar8 + 0x60) = iVar3;
        lVar9 = local_230;
        if (iVar3 == 0) {
          uVar4 = FUN__text__005dc190(local_230);
          *(undefined4 *)(lVar8 + 0x60) = uVar4;
          if (local_230 != 0) {
            (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
          }
          goto LAB__text__0030dd54;
        }
      }
    }
    else {
      *(undefined4 *)(lVar8 + 0x60) = 1;
      uVar5 = nn::fs::IsSaveDataExisting(*(undefined8 *)(lVar8 + 0xf00098),lVar8 + 0x68);
      if (((uVar5 & 1) == 0) || (iVar3 = FUN__text__005dd2a0(&local_120), iVar3 == 0))
      goto joined_r0x0030dd74;
      local_190 = 0;
      uStack_188 = 0;
      local_198 = (code *)0x0;
      local_218 = (code *)0x0;
      local_210 = 0;
      local_230 = _DAT_0089f6e0 + 0x10;
      local_1a0 = 0;
      local_208 = 0;
      local_220 = 0;
      FUN__text__00113bb0(&local_38,*puVar1,0,&local_120,0,*(undefined8 *)(lVar8 + 0x50),0);
      local_228 = local_38;
      if (local_38 == 0) {
        local_230 = 0x867958;
        local_228 = 0;
      }
      else {
        plVar7 = (long *)(local_38 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN__text__005d8de0(local_38);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar9 = local_228;
        if ((int)*(size_t *)(local_228 + 0x180) < 0xf00001) {
          memcpy((void *)(lVar8 + 0x90),*(void **)(local_228 + 400),*(size_t *)(local_228 + 0x180));
          *(undefined4 *)(lVar8 + 0x60) = 0;
        }
        local_230 = _DAT_0089f718 + 0x10;
        FUN__text__005d9290(lVar9,&local_230);
        lVar8 = local_228;
        local_228 = 0;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
      }
      pcVar2 = local_198;
      if (local_198 != (code *)0x0) {
        local_190 = 0;
        uStack_188 = 0;
        local_1a0 = 0;
        local_198 = (code *)0x0;
        (*pcVar2)(auStack_180);
      }
      pcVar2 = local_218;
      bVar6 = local_218 != (code *)0x0;
      local_218 = (code *)0x0;
      lVar9 = local_228;
      if (bVar6) {
        local_210 = 0;
        local_208 = 0;
        local_220 = 0;
        local_218 = (code *)0x0;
        (*pcVar2)(auStack_200);
        lVar9 = local_228;
      }
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
  }
joined_r0x0030dd74:
  if ((local_108 != 0) && (local_120 != 0)) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
  }
  local_120 = 0;
  uStack_118 = 0xcbf29ce484222645;
  local_110 = 0x70f683;
  local_108 = 0;
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
  }
LAB__text__0030de54:
  FUN__text__005daa98(*puVar1,&local_a0);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return 1;
}


