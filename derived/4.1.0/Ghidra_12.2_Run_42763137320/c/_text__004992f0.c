/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004992f0; name: FUN_.text__004992f0
 */


void FUN__text__004992f0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  plVar6 = *(long **)(param_1 + 0x78);
  uVar7 = (ulong)*(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x80) != 0) {
    plVar10 = plVar6;
    do {
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        FUN__text__00496ad0(lVar8);
        FUN__text__00400fc0(0x10,lVar8);
        plVar6 = *(long **)(param_1 + 0x78);
        uVar7 = (ulong)*(uint *)(param_1 + 0x80);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar6 + uVar7);
  }
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x130) != '\0') {
      FUN__text__0048e190(DAT_00ae9a80,*(undefined4 *)(param_1 + 0x54));
      lVar8 = *(long *)(param_1 + 8);
    }
    piVar1 = (int *)(lVar8 + 0x24);
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
      (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN__text__00458d30(param_1 + 0x60);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar9 + 0xc);
    iVar5 = iVar2 + -1;
    *(int *)(puVar9 + 0xc) = iVar5;
    if (((iVar5 == 0) ||
        (((iVar5 == 1 && (iVar2 != 0 || *(char *)((long)puVar9 + 100) == '\0')) &&
         (*(char *)((long)puVar9 + 100) != '\0')))) &&
       (FUN__text__004473f0(puVar9), *(int *)(puVar9 + 0xc) == 0)) {
      (**(code **)*puVar9)(puVar9);
      FUN__text__00400fc0(4,puVar9);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


