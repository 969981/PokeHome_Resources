/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049cf20; name: FUN_.text__0049cf20
 */


undefined8 FUN__text__0049cf20(long param_1,long param_2,long param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined1 uStack_31;
  
  plVar11 = *(long **)(param_2 + 0x18);
  uVar14 = *(uint *)(plVar11 + 1);
  uVar2 = *(uint *)((long)plVar11 + 0xc);
  if (uVar2 <= uVar14) {
    iVar9 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar9 = 1;
    }
    uVar6 = FUN__text__0049d8c0(plVar11,iVar9);
    if (((uVar6 & 1) == 0) || (*(uint *)((long)plVar11 + 0xc) <= uVar14)) goto LAB__text__0049d068;
    uVar14 = *(uint *)(plVar11 + 1);
  }
  lVar13 = *plVar11;
  *(uint *)(plVar11 + 1) = uVar14 + 1;
  if (lVar13 != 0) {
    FUN__text__0049d9b0(lVar13 + (ulong)uVar14 * 0x28);
    lVar12 = *(long *)(param_3 + 0x88);
    if (*(long *)(lVar12 + 0x18) == 0) {
      uVar7 = FUN__text__0049db9c();
      lVar8 = *(long *)(lVar12 + 0x18);
      *(undefined8 *)(lVar12 + 0x18) = uVar7;
      if (lVar8 != 0) {
        FUN__text__0049dbf0();
      }
    }
    if (*(long *)(*(long *)(param_3 + 0x88) + 0x18) != 0) {
      lVar12 = lVar13 + (ulong)uVar14 * 0x28;
      piVar1 = (int *)(param_1 + 0x24);
      plVar10 = (long *)(lVar12 + 0x20);
      *plVar10 = *param_4;
      plVar11 = (long *)(lVar12 + 0x18);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar12 = *plVar11;
      *plVar11 = param_1;
      if (lVar12 != 0) {
        piVar1 = (int *)(lVar12 + 0x24);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          (**(code **)(*(long *)(lVar12 + 0x10) + 0x20))();
        }
      }
      plVar11 = *(long **)(*(long *)(param_3 + 0x88) + 0x18);
      if ((int)plVar11[1] == 0) {
        lVar13 = lVar13 + (ulong)uVar14 * 0x28;
        *(byte *)(lVar13 + 0x12) = *(byte *)(lVar13 + 0x12) & 0xfc;
        *(undefined2 *)(lVar13 + 0x10) = 1;
        lVar13 = *plVar10;
      }
      else {
        lVar12 = *plVar11;
        lVar13 = lVar13 + (ulong)uVar14 * 0x28;
        uVar3 = *(undefined2 *)(lVar12 + 0x10);
        *(undefined1 *)(lVar13 + 0x12) = *(undefined1 *)(lVar12 + 0x12);
        *(undefined2 *)(lVar13 + 0x10) = uVar3;
        lVar13 = *plVar10;
      }
      if ((lVar13 == 0) ||
         (lVar12 = FUN__text__0049d620(param_1 + 0x108,lVar13,&uStack_31), lVar12 == 0)) {
        return 1;
      }
      iVar9 = *(int *)(lVar12 + 8);
      if (iVar9 == 0) {
        FUN__text__0049dbd4(lVar13);
        iVar9 = *(int *)(lVar12 + 8);
      }
      *(int *)(lVar12 + 8) = iVar9 + 1;
      return 1;
    }
  }
LAB__text__0049d068:
  lVar13 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (lVar13 != 0) {
    FUN__text__0049dbf0();
  }
  return 0x34;
}


