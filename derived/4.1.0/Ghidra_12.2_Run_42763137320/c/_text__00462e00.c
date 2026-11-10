/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00462e00; name: FUN_.text__00462e00
 */


undefined8 FUN__text__00462e00(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  
  uVar8 = *(uint *)(param_1 + 0x148);
  uVar2 = *(int *)(param_1 + 0x14c) + param_2;
  lVar11 = param_1;
  if ((8 < uVar2) && (lVar11 = FUN__text__00400f90(0,(ulong)uVar2 * 0x28,1), lVar11 == 0)) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x140);
  if ((lVar13 != 0) && (lVar13 != lVar11)) {
    if (uVar8 != 0) {
      uVar15 = 0;
      do {
        lVar13 = uVar15 * 0x28;
        puVar3 = (undefined8 *)(lVar11 + lVar13);
        *(undefined4 *)(puVar3 + 2) = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x140) + lVar13);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[3] = puVar4[3];
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar4 + 4);
        *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)((long)puVar4 + 0x24);
        puVar4[3] = 0;
        puVar4[4] = 0;
        lVar16 = *(long *)(param_1 + 0x140);
        lVar13 = lVar16 + lVar13;
        plVar17 = (long *)(lVar13 + 0x18);
        plVar14 = (long *)*plVar17;
        puVar18 = (uint *)(lVar13 + 0x20);
        plVar12 = plVar14;
        if (*puVar18 != 0) {
          do {
            plVar12 = (long *)*plVar14;
            piVar1 = (int *)((long)plVar12 + 0x14);
            do {
              iVar5 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar5 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar5 + -1 == 0) {
              (**(code **)(*plVar12 + 0x20))();
            }
            plVar14 = plVar14 + 1;
            plVar12 = (long *)*plVar17;
          } while (plVar14 != (long *)*plVar17 + *puVar18);
        }
        if (plVar12 != (long *)0x0) {
          *puVar18 = 0;
          FUN__text__00400fc0(0,plVar12);
          *plVar17 = 0;
          *(undefined4 *)(lVar16 + uVar15 * 0x28 + 0x24) = 0;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar8);
      lVar13 = *(long *)(param_1 + 0x140);
    }
    if (lVar13 != param_1) {
      FUN__text__00400fc0(0);
    }
  }
  *(long *)(param_1 + 0x140) = lVar11;
  *(uint *)(param_1 + 0x14c) = uVar2;
  return 1;
}


