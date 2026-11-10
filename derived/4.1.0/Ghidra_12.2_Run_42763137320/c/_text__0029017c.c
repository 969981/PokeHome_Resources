/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029017c; name: FUN_.text__0029017c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0029017c(long param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_38;
  
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0);
  FUN__text__00139e64(param_4,param_3);
  uVar3 = FUN__text__0027aea4(*(undefined8 *)(param_1 + 0x640),param_2);
  uVar5 = (ulong)uVar3;
  if (param_2 == 3) {
    if (uVar3 != 10) {
      FUN__text__0013a1b8(param_4,7,param_3);
      FUN__text__0013a4b0(param_4,param_3,uVar5);
      local_70 = -0x589b61f52e7f4fe6;
      uStack_68 = 0x71a942;
      local_60 = 0x1b;
      local_58 = 0;
      FUN__text__00115650(&local_38,uVar9,&local_70,0xb);
      lVar6 = *(long *)(local_38 + 0x60);
      if ((lVar6 == 0) || ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(), local_38 != 0)) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      local_88 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      FUN__text__0013a3a0(param_4,8,param_3,&local_88,*(undefined8 *)(uVar5 * 8 + 0x731070));
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (lVar6 == 0) {
        return;
      }
      plVar8 = (long *)(lVar6 + 0x48);
      lVar6 = *plVar8;
      goto LAB__text__00290944;
    }
    FUN__text__0013a1b8(param_4,0,param_3);
    local_70 = -0x589b61f52e7f4fe6;
    uStack_68 = 0x71a942;
    local_60 = 0x1b;
    local_58 = 0;
    FUN__text__00115650(&local_38,uVar9,&local_70,0xb);
    lVar6 = *(long *)(local_38 + 0x60);
    if ((lVar6 == 0) || ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    local_90 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__0013a3a0(param_4,0,param_3,&local_90,0xa45fe5b062a9f284);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
  }
  else if (param_2 == 6) {
    if (uVar3 != 0x14) {
      FUN__text__0013a1b8(param_4,2,param_3);
      local_70 = -0x52d974e61b9ba0a7;
      uStack_68 = 0x71ced0;
      local_60 = 0x16;
      local_58 = 0;
      lVar6 = FUN__text__00137c10(*(undefined8 *)(param_1 + 0x60),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      FUN__text__0013a4e8(lVar6,param_3,1);
      lVar7 = *(long *)(param_1 + 0x570);
      uVar1 = *_DAT_008a20d0;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      uVar2 = *(undefined4 *)(uVar5 * 4 + 0x730f88);
      uVar9 = FUN__text__00139c48(lVar6,uVar1,param_3);
      FUN__text__003d5154(lVar7,uVar2,uVar9,0,0);
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      plVar8 = (long *)(lVar6 + 0x48);
      lVar6 = *plVar8;
      goto LAB__text__00290944;
    }
    FUN__text__0013a1b8(param_4,0,param_3);
    local_70 = -0x589b61f52e7f4fe6;
    uStack_68 = 0x71a942;
    local_60 = 0x1b;
    local_58 = 0;
    FUN__text__00115650(&local_38,uVar9,&local_70,0xb);
    lVar6 = *(long *)(local_38 + 0x60);
    if ((lVar6 == 0) || ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    local_80 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__0013a3a0(param_4,0,param_3,&local_80,0xa45fe5b062a9f284);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
  }
  else if (param_2 == 4) {
    if (uVar3 != 0xe) {
      FUN__text__0013a1b8(param_4,1,param_3);
      local_70 = -0x52d974e61b9ba0a7;
      uStack_68 = 0x71ced0;
      local_60 = 0x16;
      local_58 = 0;
      uVar9 = FUN__text__00137c10(*(undefined8 *)(param_1 + 0x60),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      uVar10 = *(undefined8 *)(param_1 + 0x1550);
      uVar9 = FUN__text__00139c48(uVar9,4,param_3);
      FUN__text__002826e8(uVar10,uVar3,uVar9,0,0);
      return;
    }
    FUN__text__0013a1b8(param_4,0,param_3);
    local_70 = -0x589b61f52e7f4fe6;
    uStack_68 = 0x71a942;
    local_60 = 0x1b;
    local_58 = 0;
    FUN__text__00115650(&local_38,uVar9,&local_70,0xb);
    lVar6 = *(long *)(local_38 + 0x60);
    if ((lVar6 == 0) || ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    local_78 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__0013a3a0(param_4,0,param_3,&local_78,0xa45fe5b062a9f284);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
  }
  else {
    FUN__text__0013a1b8(param_4,0,param_3);
    if (param_2 == 0) {
      uVar4 = FUN__text__0016ae08(DAT_008e1560);
      if (uVar4 < 10) {
        plVar8 = (long *)((long)(int)uVar4 * 8 + 0x8781b8);
        goto LAB__text__00290774;
      }
      lVar6 = 0x7314b8;
    }
    else {
      plVar8 = (long *)((ulong)param_2 * 8 + 0x878010);
LAB__text__00290774:
      lVar6 = *plVar8;
    }
    uVar10 = *(undefined8 *)(lVar6 + uVar5 * 8);
    local_70 = -0x589b61f52e7f4fe6;
    uStack_68 = 0x71a942;
    local_60 = 0x1b;
    local_58 = 0;
    FUN__text__00115650(&local_38,uVar9,&local_70,0xb);
    lVar6 = *(long *)(local_38 + 0x60);
    if ((lVar6 == 0) || ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    if (param_2 - 1 < 2) {
      if (uVar3 != 0x12) {
        local_70 = 0x1d6021ebfcbdd9ae;
        uStack_68 = 0x720c77;
        local_60 = 0x17;
LAB__text__0029085c:
        local_58 = 0;
        FUN__text__00115650(&local_38,uVar9,&local_70,0xb);
        lVar7 = *(long *)(local_38 + 0x60);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        lVar6 = lVar7;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
      }
    }
    else if ((param_2 == 0) && (uVar3 != 0)) {
      local_70 = 0x153e92b540c06ce1;
      uStack_68 = 0x71ccbf;
      local_60 = 0x16;
      goto LAB__text__0029085c;
    }
    local_98 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__0013a3a0(param_4,0,param_3,&local_98,uVar10);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
  plVar8 = (long *)(lVar6 + 0x48);
  lVar6 = *plVar8;
LAB__text__00290944:
  (**(code **)(lVar6 + 0x18))(plVar8);
  return;
}


