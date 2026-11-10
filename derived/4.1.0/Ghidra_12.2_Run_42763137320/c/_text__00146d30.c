/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00146d30; name: FUN_.text__00146d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00146d30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  
  plVar5 = *(long **)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
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
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar6 = *(long *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  FUN__text__00147194(param_1 + 0x198);
  plVar5 = *(long **)(param_1 + 400);
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
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
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(long *)(param_1 + 0x30) = _DAT_0089f4a8 + 0x10;
  if (*(long *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = *(code **)(param_1 + 200);
  }
  else {
    FUN__text__005d9290();
    lVar6 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar7 = *(code **)(param_1 + 200);
  }
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    (*pcVar7)(param_1 + 0xe0);
  }
  pcVar7 = *(code **)(param_1 + 0x48);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*pcVar7)(param_1 + 0x60);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


