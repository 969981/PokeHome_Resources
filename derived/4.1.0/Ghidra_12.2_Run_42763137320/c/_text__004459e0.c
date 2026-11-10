/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004459e0; name: FUN_.text__004459e0
 */


void FUN__text__004459e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar10 = (long *)(param_1 + 0x20);
  plVar11 = (long *)*plVar10;
  if (plVar11 != (long *)0x0) {
    do {
      lVar6 = plVar11[2];
      piVar1 = (int *)(lVar6 + 0x24);
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
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
    plVar11 = (long *)*plVar10;
    if ((long *)*plVar10 != (long *)0x0) {
      do {
        plVar7 = plVar11;
        *(long *)(param_1 + 0x20) = *plVar7;
        if (*(long **)(param_1 + 0x28) == plVar7) {
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        *plVar7 = *(long *)(param_1 + 0x30);
        *(long **)(param_1 + 0x30) = plVar7;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
        plVar11 = *(long **)(param_1 + 0x20);
        if (*(long **)(param_1 + 0x20) == (long *)0x0) goto LAB__text__00445b3c;
      } while( true );
    }
  }
  plVar7 = (long *)*(long *)(param_1 + 0x30);
  while (plVar7 != (long *)0x0) {
LAB__text__00445b3c:
    plVar11 = (long *)*plVar7;
    bVar4 = plVar7 < *(long **)(param_1 + 0x38);
    bVar5 = *(long **)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 4 <= plVar7;
    plVar7 = plVar11;
    if (bVar4 || bVar5) {
      FUN__text__00400fc0(0);
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *plVar10 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar10 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      plVar11 = plVar10;
      *(long *)(param_1 + 0x48) = *plVar11;
      if (*(long **)(param_1 + 0x50) == plVar11) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      *plVar11 = *(long *)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar11;
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      plVar10 = *(long **)(param_1 + 0x48);
      if (*(long **)(param_1 + 0x48) == (long *)0x0) goto LAB__text__00445a8c;
    } while( true );
  }
  plVar11 = (long *)*(long *)(param_1 + 0x58);
  while (plVar11 != (long *)0x0) {
LAB__text__00445a8c:
    plVar10 = (long *)*plVar11;
    bVar4 = plVar11 < *(long **)(param_1 + 0x60);
    bVar5 = *(long **)(param_1 + 0x60) + (ulong)*(uint *)(param_1 + 0x68) * 3 <= plVar11;
    plVar11 = plVar10;
    if (bVar4 || bVar5) {
      FUN__text__00400fc0(0);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar9 = *(ulong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (puVar9 == (ulong *)0x0) {
    puVar8 = *(ulong **)(param_1 + 0x80);
    if (puVar8 == (ulong *)0x0) goto LAB__text__00445c10;
  }
  else {
    do {
      puVar8 = puVar9;
      *(ulong *)(param_1 + 0x70) = *puVar8;
      if (*(ulong **)(param_1 + 0x78) == puVar8) {
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      *puVar8 = *(ulong *)(param_1 + 0x80);
      *(ulong **)(param_1 + 0x80) = puVar8;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
      puVar9 = *(ulong **)(param_1 + 0x70);
    } while (*(ulong **)(param_1 + 0x70) != (ulong *)0x0);
  }
  do {
    uVar12 = *puVar8;
    if (puVar8 < *(ulong *)(param_1 + 0x88) ||
        *(ulong *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90) * 0x18 <= puVar8) {
      FUN__text__00400fc0(0);
    }
    puVar8 = (ulong *)uVar12;
  } while (uVar12 != 0);
LAB__text__00445c10:
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}


