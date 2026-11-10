/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00598e80; name: FUN_.text__00598e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00598e80(long *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_3c;
  long *local_38;
  long *local_18;
  
  local_3c = param_2;
  FUN__text__005df7f0();
  lVar8 = _DAT_008a5538;
  param_1[0x31] = 0;
  *param_1 = lVar8 + 0x10;
  param_1[9] = lVar8 + 0x160;
  param_1[10] = lVar8 + 0x1a0;
  param_1[0x2d] = lVar8 + 0x1c8;
  param_1[0x2e] = lVar8 + 0x290;
  param_1[0x2f] = lVar8 + 0x3a0;
  param_1[0x30] = lVar8 + 0x480;
  FUN__text__0059a7b0(&local_18,param_1[1],&local_3c);
  plVar5 = local_18;
  local_18 = (long *)0x0;
  local_38 = plVar5;
  FUN__text__005e0540(param_1,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(local_38[9] + 0x18))();
    local_38 = (long *)0x0;
  }
  if (local_18 != (long *)0x0) {
    lVar8 = local_18[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*local_18 + 0x18))();
    }
  }
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    if (*(long *)(lVar8 + 0x58) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
      *(undefined8 *)(lVar8 + 0x58) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x31];
  param_1[0x31] = (long)plVar5;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  return;
}


