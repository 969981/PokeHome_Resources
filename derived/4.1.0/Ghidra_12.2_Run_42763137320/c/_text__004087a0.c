/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004087a0; name: FUN_.text__004087a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004087a0(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  long *local_120;
  long alStack_118 [2];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  ulong local_a0;
  long *local_98;
  undefined4 local_8c;
  uint uStack_88;
  undefined2 local_84;
  byte local_82;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_77;
  undefined2 local_73;
  long *local_70;
  long *local_68;
  
  lVar10 = param_1 + (ulong)param_2 * 0x90;
  uVar11 = (ulong)param_2;
  plVar1 = (long *)(lVar10 + 0x158);
  (**(code **)(*(long *)(lVar10 + 0x158) + 0x28))(plVar1);
  FUN__text__004085c0(&local_68,param_1,param_2);
  plVar7 = local_68;
  if (local_68 == (long *)0x0) {
    if ((*(int *)(param_1 + uVar11 * 4 + 0x10) == 0) &&
       ((*(long *)(param_1 + 0x430) == 0 ||
        (iVar9 = FUN__text__0042b0d0(*(long *)(param_1 + 0x430),param_2), iVar9 == 0)))) {
      return 1;
    }
    return 0xf;
  }
  if (param_2 == 0) {
LAB__text__00408858:
    FUN__text__004085c0(&local_120,param_1,1);
    if (local_120 != (long *)0x0) {
      if ((int)local_120[6] == (int)local_68[6]) goto LAB__text__00408944;
      piVar2 = (int *)((long)local_120 + 0x14);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        (**(code **)(*local_120 + 0x20))();
      }
    }
    if (param_2 == 2) {
LAB__text__00408918:
      FUN__text__004085c0(&local_120,param_1,3);
      if (local_120 != (long *)0x0) {
        if ((int)local_120[6] == (int)local_68[6]) goto LAB__text__00408944;
        piVar2 = (int *)((long)local_120 + 0x14);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          (**(code **)(*local_120 + 0x20))();
        }
      }
    }
    else {
LAB__text__004088b8:
      FUN__text__004085c0(&local_120,param_1,2);
      if (local_120 != (long *)0x0) {
        if ((int)local_120[6] == (int)local_68[6]) goto LAB__text__00408944;
        piVar2 = (int *)((long)local_120 + 0x14);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          (**(code **)(*local_120 + 0x20))();
        }
      }
      if (param_2 != 3) goto LAB__text__00408918;
    }
    local_70 = (long *)0x0;
    local_80[0] = 0;
    local_7c = 0;
    local_78 = 1;
    local_77 = 0;
    local_73 = 1;
    iVar8 = FUN__text__00425bc0((int)local_68[6],&local_70,local_80);
    lVar6 = _DAT_008a4830;
    iVar9 = iVar8;
    if (local_70 == (long *)0x0) {
      iVar9 = 0x34;
    }
    if ((iVar8 == 1) && (local_70 != (long *)0x0)) {
      if (local_77._3_1_ == '\0') {
        (**(code **)(*local_70 + 0x10))(local_70,_DAT_008a47f0);
        iVar9 = 4;
      }
      else {
        alStack_118[1] = 0;
        uStack_88 = *(uint *)(param_1 + 0x60);
        local_108 = 0;
        local_100 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_8c = *_DAT_008a4b68;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        uVar3 = (local_82 & 0xf8) << 0x10 | (uStack_88 & 0xff) << 8 | 0x50020;
        local_f8 = 0xff;
        local_f0 = 0xff;
        local_84 = (undefined2)uVar3;
        local_82 = (byte)(uVar3 >> 0x10);
        local_b8 = 0;
        uStack_b0 = 0;
        local_120 = (long *)(_DAT_008a4830 + 0x10);
        alStack_118[0] = _DAT_008a4830 + 0x58;
        local_98 = (long *)0x0;
        local_150 = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0xff;
        local_130 = 0xff;
        local_128 = 0;
        local_a8 = 0;
        local_a0 = 0;
        FUN__text__0042b69c(&local_120,local_68,&local_150,0,0);
        *(undefined8 *)(lVar10 + 0x1b0) = local_c8;
        local_98 = local_70;
        iVar9 = (**(code **)(*local_70 + 0x38))
                          (local_70,_DAT_008a47f0,param_1 + uVar11 * 0x20 + 0x398,local_d0,&local_8c
                           ,param_1 + 0x90);
        if (iVar9 == 1) {
          FUN__text__0042c860(plVar1,&local_120);
          (**(code **)(**(long **)(param_1 + uVar11 * 0x90 + 0x1e0) + 0x18))();
          iVar9 = 1;
          *(uint *)(param_1 + 0xc) =
               (*(uint *)(param_1 + 8) | *(uint *)(param_1 + 0xc)) & 1 << (ulong)(param_2 & 0x1f);
        }
        else {
          (**(code **)(*plVar1 + 0x28))(plVar1);
          FUN__text__0042c81c(&local_120);
          iVar9 = 2;
        }
        local_120 = (long *)(lVar6 + 0x10);
        alStack_118[0] = lVar6 + 0x58;
        (**(code **)(lVar6 + 0x38))(&local_120);
        local_120 = (long *)(_DAT_008a4820 + 0x10);
        alStack_118[0] = _DAT_008a4820 + 0x58;
        (**(code **)(_DAT_008a4820 + 0x38))(&local_120);
        if (local_a8 != 0) {
          local_a0 = local_a0 & 0xffffffff00000000;
          FUN__text__00400fc0(0);
          local_a8 = 0;
          local_a0 = local_a0 & 0xffffffff;
        }
        FUN__text__004335d0(alStack_118);
      }
    }
  }
  else {
    FUN__text__004085c0(&local_120,param_1,0);
    if (local_120 == (long *)0x0) {
LAB__text__00408850:
      if (param_2 != 1) goto LAB__text__00408858;
      goto LAB__text__004088b8;
    }
    if ((int)local_120[6] != (int)plVar7[6]) {
      piVar2 = (int *)((long)local_120 + 0x14);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        (**(code **)(*local_120 + 0x20))();
      }
      goto LAB__text__00408850;
    }
LAB__text__00408944:
    piVar2 = (int *)((long)local_120 + 0x14);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*local_120 + 0x20))();
    }
    iVar9 = 9;
    if (local_68 == (long *)0x0) {
      return 9;
    }
  }
  piVar2 = (int *)((long)local_68 + 0x14);
  do {
    iVar8 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 + -1 == 0) {
    (**(code **)(*local_68 + 0x20))(local_68);
  }
  return iVar9;
}


