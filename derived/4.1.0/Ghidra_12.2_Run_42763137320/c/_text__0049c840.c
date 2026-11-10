/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049c840; name: FUN_.text__0049c840
 */


undefined8 FUN__text__0049c840(long param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  
  uVar4 = *(uint *)(param_1 + 0x148);
  uVar12 = (ulong)uVar4;
  uVar10 = (ulong)param_2;
  if (param_2 < uVar4) {
    do {
      lVar13 = *(long *)(param_1 + 0x140);
      lVar14 = lVar13 + uVar10 * 0x28;
      plVar15 = (long *)(lVar14 + 0x18);
      plVar11 = (long *)*plVar15;
      puVar16 = (uint *)(lVar14 + 0x20);
      plVar7 = plVar11;
      if (*puVar16 != 0) {
        do {
          plVar7 = (long *)*plVar11;
          piVar1 = (int *)((long)plVar7 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          plVar11 = plVar11 + 1;
          plVar7 = (long *)*plVar15;
        } while (plVar11 != (long *)*plVar15 + *puVar16);
      }
      if (plVar7 != (long *)0x0) {
        *puVar16 = 0;
        FUN__text__00400fc0(0,plVar7);
        *plVar15 = 0;
        *(undefined4 *)(lVar13 + uVar10 * 0x28 + 0x24) = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar12);
  }
  else {
    iVar3 = param_2 - *(uint *)(param_1 + 0x14c);
    if ((*(uint *)(param_1 + 0x14c) <= param_2 && iVar3 != 0) &&
       (uVar8 = FUN__text__00462e00(param_1,iVar3), (uVar8 & 1) == 0)) {
      return 0;
    }
    if ((uVar4 < param_2) && (lVar13 = *(long *)(param_1 + 0x140), lVar13 != 0)) {
      lVar9 = ~uVar12 + uVar10;
      lVar14 = uVar12 * 0x28;
      while( true ) {
        if (lVar13 != 0) {
          puVar2 = (undefined8 *)(lVar13 + lVar14);
          *(undefined4 *)(puVar2 + 2) = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
        }
        if (lVar9 == 0) break;
        lVar13 = *(long *)(param_1 + 0x140);
        lVar9 = lVar9 + -1;
        lVar14 = lVar14 + 0x28;
      }
    }
  }
  *(uint *)(param_1 + 0x148) = param_2;
  return 1;
}


