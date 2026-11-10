/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00214448; name: FUN_.text__00214448
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00214448(long *param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long local_1a0;
  long local_198;
  long local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [96];
  long local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [104];
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_58;
  
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar7 = *param_1;
  uVar5 = *(uint *)(param_1 + 1);
  if ((uVar5 & 1) == 0) goto LAB__text__0021467c;
  *(byte *)(lVar7 + 0x15) = *(byte *)(lVar7 + 0x15) & 0xfe;
  FUN__text__00213f70(lVar7 + 0x18);
  FUN__text__002148dc(&local_88,&DAT_008aa4e0,param_2);
  iVar3 = FUN__text__005dd2a0(&local_88);
  if (iVar3 != 0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    local_190 = 0;
    local_188 = (code *)0x0;
    local_1a0 = _DAT_0089f6e0 + 0x10;
    local_180 = 0;
    local_178 = 0;
    local_198 = 0;
    FUN__text__00113bb0(&local_58,*_DAT_0089f550,0,&local_88,0,param_1[2],0);
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    }
    lVar2 = local_58;
    lVar4 = _DAT_0089f718;
    local_198 = local_58;
    if (local_58 == 0) {
      local_1a0 = _DAT_0089f718 + 0x10;
LAB__text__002145d4:
      local_198 = 0;
      pcVar1 = local_108;
    }
    else {
      plVar6 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if (local_190 != 0 || local_110 != 0) {
        FUN__text__005d9010(lVar2,&local_1a0,1);
      }
      FUN__text__005d8de0(lVar2);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar6);
      FUN__text__00213f7c(lVar7 + 0x18,*(undefined8 *)(local_198 + 400));
      *(byte *)(lVar7 + 0x15) = *(byte *)(lVar7 + 0x15) | 1;
      local_1a0 = lVar4 + 0x10;
      if (local_198 == 0) {
        local_198 = 0;
        pcVar1 = local_108;
      }
      else {
        FUN__text__005d9290(local_198,&local_1a0);
        lVar4 = local_198;
        local_198 = 0;
        if (lVar4 == 0) goto LAB__text__002145d4;
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        pcVar1 = local_108;
      }
    }
    local_108 = pcVar1;
    if (pcVar1 != (code *)0x0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar1)(auStack_f0);
    }
    pcVar1 = local_188;
    if (local_188 != (code *)0x0) {
      local_180 = 0;
      local_178 = 0;
      local_190 = 0;
      local_188 = (code *)0x0;
      (*pcVar1)(auStack_170);
    }
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    }
  }
  if ((local_70 != 0) && (local_88 != 0)) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  local_88 = 0;
  uStack_80 = 0xcbf29ce484222645;
  local_78 = 0x70f683;
  local_70 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  uVar5 = *(uint *)(param_1 + 1);
LAB__text__0021467c:
  if ((uVar5 >> 1 & 1) != 0) {
    lVar4 = *(long *)(lVar7 + 0x418);
    *(undefined8 *)(lVar7 + 0x418) = 0;
    *(byte *)(lVar7 + 0x15) = *(byte *)(lVar7 + 0x15) & 0xfd;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar4 = param_1[3];
    local_1a0 = lVar4 + 9;
    if ((*(byte *)(lVar4 + 8) & 1) != 0) {
      local_1a0 = *(long *)(lVar4 + 0x18);
    }
    FUN__text__002148dc(&local_88,&local_1a0,param_2);
    iVar3 = FUN__text__005dd2a0(&local_88);
    if (iVar3 != 0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_108 = (code *)0x0;
      local_188 = (code *)0x0;
      local_180 = 0;
      local_1a0 = _DAT_0089f6e0 + 0x10;
      local_110 = 0;
      local_178 = 0;
      local_190 = 0;
      FUN__text__00113bb0(&local_58,*_DAT_0089f550,0,&local_88,0,param_1[2],0);
      lVar4 = local_58;
      local_198 = local_58;
      if (local_58 == 0) {
        local_1a0 = _DAT_0089f718 + 0x10;
        local_198 = 0;
        pcVar1 = local_108;
      }
      else {
        plVar6 = (long *)(local_58 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN__text__005d8de0(lVar4);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        FUN__text__00215790(&local_58,param_1[2],*(undefined8 *)(lVar4 + 400),
                            *(undefined4 *)(lVar4 + 0x180),*(undefined4 *)param_1[3],
                            *(undefined1 *)((undefined4 *)param_1[3] + 1));
        if (*(long *)(lVar7 + 0x418) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar7 + 0x418) + 0x48) + 0x18))();
        }
        *(long *)(lVar7 + 0x418) = local_58;
        if (local_58 != 0) {
          *(byte *)(lVar7 + 0x15) = *(byte *)(lVar7 + 0x15) | 2;
        }
        local_1a0 = _DAT_0089f718 + 0x10;
        FUN__text__005d9290(lVar4,&local_1a0);
        lVar7 = local_198;
        local_198 = 0;
        pcVar1 = local_108;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          pcVar1 = local_108;
        }
      }
      local_108 = pcVar1;
      if (pcVar1 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        local_108 = (code *)0x0;
        (*pcVar1)(auStack_f0);
      }
      pcVar1 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = 0;
        local_178 = 0;
        local_190 = 0;
        local_188 = (code *)0x0;
        (*pcVar1)(auStack_170);
      }
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
      }
    }
    if ((local_70 != 0) && (local_88 != 0)) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    }
    local_88 = 0;
    uStack_80 = 0xcbf29ce484222645;
    local_78 = 0x70f683;
    local_70 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  return 1;
}


