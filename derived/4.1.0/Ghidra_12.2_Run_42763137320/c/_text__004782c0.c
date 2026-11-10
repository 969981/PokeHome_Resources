/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004782c0; name: FUN_.text__004782c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004782c0(long param_1)

{
  long lVar1;
  int *piVar2;
  long **pplVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  long **__s;
  long *local_70 [2];
  
  local_70[0] = (long *)0x0;
  FUN__text__00466990(*(undefined8 *)(param_1 + 0x1d0),local_70);
  uVar9 = FUN__text__004654f0(*(undefined8 *)(param_1 + 0x1d0));
  if ((uVar9 == 0) && (local_70[0] == (long *)0x0)) {
    return 1;
  }
  lVar1 = param_1 + 0x1f8;
  uVar13 = uVar9;
  if (local_70[0] != (long *)0x0) {
    uVar13 = uVar9 + 1;
  }
  iVar7 = uVar13 - *(uint *)(param_1 + 0x204);
  if ((uVar13 < *(uint *)(param_1 + 0x204) || iVar7 == 0) ||
     (uVar10 = FUN__text__0047b240(lVar1,iVar7), (uVar10 & 1) != 0)) {
    lVar8 = _DAT_008a4820;
    if (local_70[0] == (long *)0x0) {
      if (uVar9 == 0) {
        return 1;
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x200);
      uVar4 = *(uint *)(param_1 + 0x204);
      if (uVar4 <= uVar13) {
        iVar7 = uVar4 + (uVar4 >> 1);
        if (uVar4 == 0) {
          iVar7 = 1;
        }
        FUN__text__0047b240(lVar1,iVar7);
        uVar13 = *(uint *)(param_1 + 0x200);
      }
      *(uint *)(param_1 + 0x200) = uVar13 + 1;
      plVar11 = (long *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar13 * 0x88);
      *(undefined1 *)(plVar11 + 5) = 0xff;
      *(undefined1 *)(plVar11 + 6) = 0xff;
      *(undefined4 *)(plVar11 + 3) = 0;
      *(undefined4 *)(plVar11 + 4) = 0;
      plVar11[7] = 0;
      plVar11[8] = 0;
      *plVar11 = lVar8 + 0x10;
      plVar11[1] = lVar8 + 0x58;
      plVar11[2] = 0;
      plVar11[9] = 0;
      plVar11[10] = 0;
      plVar11[0xb] = 0;
      plVar11[0xc] = 0;
      plVar11[0xd] = 0;
      plVar11[0xe] = 0;
      plVar11[0xf] = 0;
      plVar11[0x10] = 0;
      lVar12 = FUN__text__0042b3dc(plVar11,local_70[0],param_1);
      uVar14 = 1;
      if (lVar12 == 0) {
        uVar14 = 2;
      }
      if ((uVar9 == 0) || (lVar12 == 0)) goto LAB__text__0047852c;
    }
    __s = local_70 + (ulong)uVar9 * -2;
    memset(__s,0,(ulong)uVar9 * 0x10 & 0xfffffff0);
    FUN__text__00465914(*(undefined8 *)(param_1 + 0x1d0),__s);
    uVar10 = 0;
    uVar14 = 1;
    do {
      pplVar3 = __s + uVar10 * 2;
      if (*pplVar3 != (long *)0x0) {
        uVar13 = *(uint *)(param_1 + 0x200);
        uVar4 = *(uint *)(param_1 + 0x204);
        if (uVar4 <= uVar13) {
          iVar7 = uVar4 + (uVar4 >> 1);
          if (uVar4 == 0) {
            iVar7 = 1;
          }
          FUN__text__0047b240(lVar1,iVar7);
          uVar13 = *(uint *)(param_1 + 0x200);
        }
        *(uint *)(param_1 + 0x200) = uVar13 + 1;
        plVar11 = (long *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar13 * 0x88);
        *(undefined4 *)(plVar11 + 3) = 0;
        *(undefined4 *)(plVar11 + 4) = 0;
        *(undefined1 *)(plVar11 + 5) = 0xff;
        *(undefined1 *)(plVar11 + 6) = 0xff;
        *plVar11 = lVar8 + 0x10;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[1] = lVar8 + 0x58;
        plVar11[2] = 0;
        plVar11[9] = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        plVar11[0xc] = 0;
        plVar11[0xd] = 0;
        plVar11[0xe] = 0;
        plVar11[0xf] = 0;
        plVar11[0x10] = 0;
        lVar12 = FUN__text__0042b3dc(plVar11,*pplVar3,param_1);
        if (lVar12 == 0) {
          (*(code *)**(undefined8 **)
                      (*(long *)(param_1 + 0x1f8) + (ulong)*(uint *)(param_1 + 0x200) * 0x88 + -0x88
                      ))();
          uVar14 = 2;
          *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + -1;
          plVar11 = *pplVar3;
        }
        else {
          plVar11 = *pplVar3;
        }
        if (plVar11 != (long *)0x0) {
          piVar2 = (int *)((long)plVar11 + 0x14);
          do {
            iVar7 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 + -1 == 0) {
            (**(code **)(*plVar11 + 0x20))();
          }
          *pplVar3 = (long *)0x0;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  else {
    uVar14 = 2;
  }
LAB__text__0047852c:
  if (local_70[0] != (long *)0x0) {
    piVar2 = (int *)((long)local_70[0] + 0x14);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  return uVar14;
}


