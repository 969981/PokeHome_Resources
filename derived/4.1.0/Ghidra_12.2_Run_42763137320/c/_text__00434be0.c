/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434be0; name: FUN_.text__00434be0
 */


undefined4
FUN__text__00434be0(long param_1,ulong param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  if ((param_2 & 0xff00000000) == 0x400000000) {
    FUN__text__00434440(&local_68);
    plVar12 = (long *)CONCAT44(uStack_64,local_68);
    if (plVar12 == (long *)0x0) {
      uVar11 = 0xf;
    }
    else {
      if (param_5 == (long *)0x0) {
        local_50 = param_3[2];
        lStack_48 = param_3[3];
        param_5 = &local_60;
        local_40 = param_3[4];
        lStack_38 = param_3[5];
        local_60 = *param_3;
        lStack_58 = param_3[1];
      }
      else if (param_5 != param_3) {
        lVar13 = param_3[1];
        *param_5 = *param_3;
        param_5[1] = lVar13;
        lVar13 = param_3[2];
        lVar3 = param_3[3];
        lVar4 = param_3[5];
        param_5[4] = param_3[4];
        param_5[5] = lVar4;
        param_5[2] = lVar13;
        param_5[3] = lVar3;
      }
      uVar9 = FUN__text__0043e5c4(plVar12,param_5,param_4);
      uVar11 = 3;
      if ((uVar9 & 1) != 0) {
        uVar11 = 1;
      }
      piVar1 = (int *)((long)plVar12 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
        return uVar11;
      }
    }
    return uVar11;
  }
  plVar12 = (long *)(param_1 + (param_2 >> 0x20 & 0xff) * 0x18);
  uVar5 = *(uint *)(plVar12 + 1);
  if (uVar5 == 0) {
    return 0xf;
  }
  uVar8 = 0;
  uVar10 = (uint)param_2;
  if (uVar5 != 0) {
    uVar8 = uVar10 / uVar5;
  }
  plVar12 = (long *)(*plVar12 + (ulong)(uVar10 - uVar8 * uVar5) * 8);
  do {
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      return 0xf;
    }
  } while (*(uint *)(plVar12 + 1) != uVar10);
  lVar13 = plVar12[4];
  if (*(int *)((long)plVar12 + 0x1c) == 0) {
    if (lVar13 != 0) goto LAB__text__00434d88;
  }
  else {
    if (lVar13 != 0) {
LAB__text__00434d88:
      FUN__text__00434be0(param_1,*(undefined8 *)(lVar13 + 0x28),param_3,param_4,param_5);
      lVar13 = plVar12[4];
      local_68 = 0;
      uVar11 = 0;
      if (*(long *)(lVar13 + 8) != 0) {
        local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar13 + 0x18));
        FUN__text__0041a060(*param_4,(long *)(lVar13 + 8),&local_60,&local_68);
        *(undefined4 *)(lVar13 + 0x18) = (undefined4)local_60;
        uVar11 = local_68;
      }
      *param_4 = uVar11;
      return 1;
    }
    if (*param_3 == 0) {
      return 0xf;
    }
    FUN__text__0044a714();
  }
  if (param_5 == (long *)0x0) {
    local_50 = param_3[2];
    lStack_48 = param_3[3];
    param_5 = &local_60;
    local_40 = param_3[4];
    lStack_38 = param_3[5];
    local_60 = *param_3;
    lStack_58 = param_3[1];
  }
  else if (param_5 != param_3) {
    lVar13 = param_3[1];
    *param_5 = *param_3;
    param_5[1] = lVar13;
    lVar13 = param_3[2];
    lVar3 = param_3[3];
    lVar4 = param_3[5];
    param_5[4] = param_3[4];
    param_5[5] = lVar4;
    param_5[2] = lVar13;
    param_5[3] = lVar3;
  }
  uVar9 = FUN__text__00437018(plVar12,param_5,param_4);
  uVar11 = 3;
  if ((uVar9 & 1) != 0) {
    uVar11 = 1;
  }
  return uVar11;
}


