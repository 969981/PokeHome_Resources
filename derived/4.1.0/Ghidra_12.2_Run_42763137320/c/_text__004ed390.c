/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed390; name: FUN_.text__004ed390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ed390(long param_1,long param_2,int param_3,undefined4 param_4,
                        undefined8 *param_5)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ushort *puVar14;
  long *plVar15;
  
  if (*(int *)(param_2 + 0x60) != 0) {
    puVar14 = *(ushort **)(param_2 + 0x58);
    lVar1 = _DAT_008a5100 + 0x10;
    do {
      plVar12 = *(long **)(param_1 + 0x70);
      uVar9 = (uint)*puVar14;
      if (plVar12 != (long *)0x0) {
        plVar10 = (long *)0x0;
        do {
          while (((iVar7 = (**(code **)(*plVar12 + 0x10))(plVar12), iVar7 == 0 &&
                  (plVar12[3] == *(long *)(param_2 + 0x50))) && (*(uint *)(plVar12 + 4) == uVar9)))
          {
            if ((int)plVar12[2] <= param_3) goto LAB__text__004ed3f0;
            plVar15 = (long *)plVar12[1];
            plVar3 = (long *)(param_1 + 0x70);
            if (*(long **)(param_1 + 0x70) != plVar12) {
              plVar3 = plVar10 + 1;
            }
            *plVar3 = (long)plVar15;
            if (*(long **)(param_1 + 0x68) == plVar12) {
              *(long **)(param_1 + 0x68) = plVar10;
            }
            (**(code **)*plVar12)(plVar12);
            FUN__text__00400fc0(0,plVar12);
            plVar12 = plVar15;
            if (plVar15 == (long *)0x0) goto LAB__text__004ed4c0;
          }
          plVar3 = plVar12 + 1;
          plVar10 = plVar12;
          plVar12 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
LAB__text__004ed4c0:
      lVar11 = *(long *)(param_2 + 0x50);
      lVar13 = *(long *)(param_1 + 0x30);
      if (lVar13 == 0) {
        plVar12 = (long *)FUN__text__00400f80(0,0x38);
      }
      else {
        do {
          if (((*(long *)(lVar13 + 0x80) == lVar11) && (*(uint *)(lVar13 + 0x88) == uVar9)) &&
             (((*(byte *)(lVar13 + 0x5a) & 0xe) == 0 &&
              (uVar8 = FUN__text__004ec380(lVar13), (uVar8 & 1) == 0)))) goto LAB__text__004ed3f0;
          lVar13 = *(long *)(lVar13 + 8);
        } while (lVar13 != 0);
        lVar11 = *(long *)(param_2 + 0x50);
        plVar12 = (long *)FUN__text__00400f80(0,0x38);
      }
      if (plVar12 != (long *)0x0) {
        *(int *)(plVar12 + 2) = param_3;
        plVar12[3] = lVar11;
        *(uint *)(plVar12 + 4) = uVar9;
        *plVar12 = lVar1;
        uVar4 = *(undefined4 *)(param_5 + 1);
        *(undefined8 *)((long)plVar12 + 0x24) = *param_5;
        piVar2 = (int *)(lVar11 + 0x24);
        *(undefined4 *)((long)plVar12 + 0x2c) = uVar4;
        *(undefined4 *)(plVar12 + 6) = param_4;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        FUN__text__004ed750(param_1 + 0x60,plVar12);
      }
LAB__text__004ed3f0:
      puVar14 = puVar14 + 1;
    } while (puVar14 != (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(uint *)(param_2 + 0x60) * 2)
            );
  }
  return;
}


