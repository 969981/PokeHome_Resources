/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028a344; name: FUN_.text__0028a344
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028a344(long param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_188 [4];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  code *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  lVar13 = *(long *)(param_1 + 0x2d0);
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_d0 = (code *)0xa7649e0ad180b01a;
  local_c8 = (code *)0x71a942;
  lVar9 = param_1 + 0x110;
  local_c0 = (undefined1 *)0x1b;
  local_b8 = (undefined1 *)0x0;
  FUN__text__00115650(local_188,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_d0,0xb);
  lVar12 = *(long *)(local_188[0] + 0x60);
  if ((lVar12 == 0) || ((**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(), local_188[0] != 0)) {
    (**(code **)(*(long *)(local_188[0] + 0x48) + 0x18))();
    local_188[0] = 0;
  }
  if (local_b8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_b8 + 0x48) + 0x18))();
  }
  local_d0 = FUN__text__0028dd90;
  local_c8 = FUN__text__0028ddb8;
  local_c0 = &LAB__text__0028ddbc;
  local_140 = &LAB__text__0028ddbc;
  local_b8 = &LAB__text__0028ddc8;
  local_138 = &LAB__text__0028ddc8;
  local_150 = FUN__text__0028dd90;
  local_148 = FUN__text__0028ddb8;
  alStack_130[0] = param_1;
  alStack_b0[0] = param_1;
  FUN__text__0012c3b0(lVar9,0x71028b,&local_150);
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (code *)0x0;
    local_148 = (code *)0x0;
    (*pcVar3)(alStack_130);
  }
  iVar5 = FUN__text__0015ab30();
  *(int *)(param_1 + 0x880) = iVar5;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  piVar10 = (int *)(_DAT_008a1760 + (long)iVar5 * 0x2c);
  *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)((long)*piVar10 * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x918) = *(undefined8 *)((long)piVar10[1] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)((long)piVar10[2] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)((long)piVar10[3] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x930) = *(undefined8 *)((long)piVar10[4] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)((long)piVar10[5] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)((long)piVar10[6] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)((long)piVar10[7] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)((long)piVar10[8] * 8 + 0x730b48);
  *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)((long)piVar10[9] * 8 + 0x730b48);
  iVar5 = piVar10[10];
  *(undefined4 *)(param_1 + 0x968) = 0xb;
  *(undefined4 *)(param_1 + 0x970) = param_2;
  *(undefined8 *)(param_1 + 0x960) = *(undefined8 *)((long)iVar5 * 8 + 0x730b48);
  FUN__text__00288c10(param_1);
  *(undefined4 *)(param_1 + 0x878) = 0;
  FUN__text__002862c4(param_1);
  iVar5 = *(int *)(param_1 + 0x878);
  lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307d0);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar5 == 0;
  iVar5 = *(int *)(param_1 + 0x878);
  lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307d8);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar5 == 1;
  *(undefined1 *)(param_1 + 0x97a) = 0;
  bVar4 = *(int *)(param_1 + 0x878) != 1;
  uVar8 = FUN__text__0012cb14(lVar9,0x7305f0);
  FUN__text__003a14e8(uVar8,bVar4);
  uVar8 = FUN__text__0012cb14(lVar9,0x7305f8);
  FUN__text__003a14e8(uVar8,bVar4);
  FUN__text__00286570(param_1);
  if (*(char *)(param_1 + 0x1660) == '\0') {
    FUN__text__0028dfc0(*(undefined8 *)(param_1 + 0x1658));
    *(char *)(param_1 + 0x1660) = '\x01';
    iVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130);
  }
  else {
    iVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130);
  }
  if (iVar5 == 0) {
    FUN__text__0028f1e4(param_1,0xd97eb1d03e9613d6);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x640) + 0x134);
  }
  else {
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_188[0] = 0x531a9f8dfb41f4f7;
    lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar12,local_188,lVar7);
    uVar8 = FUN__text__005f3244(lVar7);
    FUN__text__0012c9f0(lVar9,0x730ba0,uVar8,0xb);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    uVar1 = *(uint *)(*(long *)(param_1 + 0x640) + 0x134);
  }
  if (uVar1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0028a708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0028a70c + (ulong)*(byte *)((ulong)uVar1 + 0x7302f6) * 4))();
    return;
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130);
  if (iVar5 == 1) {
    lVar9 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730bb0);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    lVar9 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730bc0);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    lVar9 = *(long *)(lVar13 + 0x2e8);
    local_168 = _DAT_007303c8;
    uStack_160 = _DAT_007303d0;
    local_158 = _DAT_007303d8;
    local_188[0] = _DAT_007303a8;
    local_188[1] = _DAT_007303b0;
    local_188[2] = _DAT_007303b8;
    local_188[3] = _DAT_007303c0;
    bVar2 = *(byte *)(*(long *)(param_1 + 0x640) + 0x92954);
    if (lVar9 == 0) {
      FUN__text__005f2d98(lVar12,local_188 + bVar2,0);
    }
    else {
      plVar11 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN__text__005f2d98(lVar12,local_188 + bVar2,lVar9);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    lVar9 = *(long *)(lVar13 + 0x2e0);
    iVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x92958);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar9,0,iVar5 + 1,2,2,1);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    FUN__text__003c8c20(lVar13,0x730bc8,0xb);
    pcVar3 = local_c8;
  }
  else {
    pcVar3 = local_c8;
    if (iVar5 == 0) {
      lVar9 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730bb0);
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      uVar6 = FUN__text__0027ac90(*(long *)(param_1 + 0x640),
                                  *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x68),0);
      lVar9 = *(long *)(lVar13 + 0x2e8);
      local_188[0] = 0x1faeb22ef3462c92;
      if (lVar9 == 0) {
        FUN__text__005f2d98(lVar12,local_188,0);
        lVar9 = *(long *)(lVar13 + 0x2e0);
      }
      else {
        plVar11 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN__text__005f2d98(lVar12,local_188,lVar9);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar9 = *(long *)(lVar13 + 0x2e0);
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar9,0,uVar6,4,0,1);
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      FUN__text__003c8c20(lVar13,0x730bb8,0xb);
      lVar13 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730bc0);
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
      pcVar3 = local_c8;
    }
  }
  local_c8 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(alStack_b0);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


