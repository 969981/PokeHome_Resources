/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d1070; name: FUN_.text__004d1070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d1070(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 local_4c;
  int iStack_48;
  ushort local_44;
  undefined1 local_42;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  long *local_30 [2];
  
  plVar5 = *(long **)(param_1 + 400);
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)plVar5[0x11];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,_DAT_008a47f0);
      *(undefined8 *)(*(long *)(param_1 + 400) + 0x88) = 0;
      plVar5 = *(long **)(param_1 + 400);
    }
    (**(code **)(*plVar5 + 0x28))();
    *(undefined4 *)(*(long *)(param_1 + 400) + 0x90) = 0xffffffff;
  }
  local_30[0] = (long *)0x0;
  FUN__text__0045cfa0(param_1 + 0x68,local_30);
  if (local_30[0] == (long *)0x0) {
    return;
  }
  *(int *)(*(long *)(param_1 + 400) + 0x90) = (int)local_30[0][6];
  if (local_30[0][7] == 0) goto LAB__text__004d1288;
  local_38 = 1;
  local_33 = 1;
  local_40[0] = 0;
  local_3c = 0;
  local_37 = 0;
  lVar6 = FUN__text__0042b69c(*(undefined8 *)(param_1 + 400),local_30[0],*(long *)(param_1 + 8) + 8,
                              *(long *)(param_1 + 8) + 0x78,1);
  if ((lVar6 == 0) ||
     (iVar4 = FUN__text__00425bc0(*(undefined4 *)(*(long *)(param_1 + 400) + 0x90),
                                  *(long *)(param_1 + 400) + 0x88,local_40), iVar4 != 1)) {
LAB__text__004d1234:
    plVar5 = *(long **)(param_1 + 400);
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[0x11];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,_DAT_008a47f0);
        *(undefined8 *)(*(long *)(param_1 + 400) + 0x88) = 0;
        plVar5 = *(long **)(param_1 + 400);
      }
      (**(code **)(*plVar5 + 0x28))();
      *(undefined4 *)(*(long *)(param_1 + 400) + 0x90) = 0xffffffff;
    }
  }
  else {
    iVar4 = FUN__text__00425f3c(*(undefined4 *)(*(long *)(param_1 + 400) + 0x90),6,local_40);
    if (iVar4 != 0) {
      if (iVar4 == 0x2c) {
        lVar6 = *(long *)(param_1 + 400);
        if (((*(uint *)(lVar6 + 0x90) & 0xfff0) == 0x10a0) &&
           (puVar8 = *(undefined8 **)(lVar6 + 0x88), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)(puVar8);
          (**(code **)(*_DAT_008a47f0 + 0x18))(_DAT_008a47f0,puVar8);
          lVar6 = *(long *)(param_1 + 400);
        }
        *(undefined8 *)(lVar6 + 0x88) = 0;
      }
      goto LAB__text__004d1234;
    }
    iStack_48 = *(int *)(param_1 + 0x160);
    local_4c = *_DAT_008a4b68;
    local_44 = (ushort)(iStack_48 << 8) | 0x20;
    local_42 = 5;
    plVar5 = *(long **)(*(long *)(param_1 + 400) + 0x88);
    iVar4 = (**(code **)(*plVar5 + 0x38))
                      (plVar5,_DAT_008a47f0,param_1 + 0x98,
                       *(undefined8 *)(*(long *)(param_1 + 400) + 0x50),&local_4c);
    if ((iVar4 != 1) ||
       (iVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 400) + 0x88) + 0x18))(), iVar4 != 1))
    goto LAB__text__004d1234;
  }
  if (local_30[0] == (long *)0x0) {
    return;
  }
LAB__text__004d1288:
  piVar1 = (int *)((long)local_30[0] + 0x14);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 + -1 == 0) {
    (**(code **)(*local_30[0] + 0x20))(local_30[0]);
  }
  return;
}


