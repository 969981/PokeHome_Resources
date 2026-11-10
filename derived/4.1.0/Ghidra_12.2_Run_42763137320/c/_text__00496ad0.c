/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496ad0; name: FUN_.text__00496ad0
 */


void FUN__text__00496ad0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  
  lVar6 = *(long *)(param_1 + 0x50);
  if (*(char *)(lVar6 + 0x4c) != '\b' && *(int *)(lVar6 + 0x48) != 0) {
    FUN__text__00433930(param_1,*(undefined8 *)(lVar6 + 0x48));
  }
  lVar6 = *(long *)(param_1 + 0x58);
  uVar9 = (ulong)*(uint *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 0x60) == 0) {
    if (lVar6 == 0) goto LAB__text__00496bfc;
  }
  else {
    lVar11 = lVar6;
    do {
      lVar7 = lVar11;
      uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
      if ((*(uint *)(lVar7 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 0x28) != 0)) {
        plVar10 = *(long **)(lVar7 + 0x10);
        plVar5 = plVar10;
        do {
          lVar11 = *(long *)(param_1 + 0x50);
          lVar6 = 0;
          if (*plVar5 != 0) {
            lVar6 = *plVar5 + 0x18;
          }
          if (*(int *)(lVar11 + 0x28) != 0) {
            puVar12 = *(undefined8 **)(lVar11 + 0x20);
            do {
              puVar13 = puVar12 + 1;
              FUN__text__0046c63c(lVar6,*puVar12);
              puVar12 = puVar13;
            } while (puVar13 !=
                     (undefined8 *)(*(long *)(lVar11 + 0x20) + (ulong)*(uint *)(lVar11 + 0x28) * 8))
            ;
            plVar10 = *(long **)(lVar7 + 0x10);
            uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar10 + uVar8);
        lVar6 = *(long *)(param_1 + 0x58);
        uVar9 = (ulong)*(uint *)(param_1 + 0x60);
      }
      lVar11 = lVar7 + 0x20;
    } while (lVar7 + 0x20 != lVar6 + uVar9 * 0x20);
    if (lVar6 == 0) goto LAB__text__00496bfc;
    if (uVar9 != 0) {
      do {
        FUN__text__00497500(lVar6);
        bVar4 = lVar6 != lVar7;
        lVar6 = lVar6 + 0x20;
      } while (bVar4);
      lVar6 = *(long *)(param_1 + 0x58);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN__text__00400fc0(0,lVar6);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
LAB__text__00496bfc:
  plVar5 = *(long **)(param_1 + 0x50);
  piVar1 = (int *)((long)plVar5 + 0x14);
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
    (**(code **)(*plVar5 + 0x20))();
  }
  FUN__text__004335d0(param_1);
  return;
}


