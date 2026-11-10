/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016dc90; name: FUN_.text__0016dc90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016dc90(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  long local_48;
  undefined8 local_28;
  
  uVar8 = *(undefined8 *)(*_DAT_0089f3d8 + 0x68);
  local_28 = *(undefined8 *)(*_DAT_0089f3d8 + 0x48);
  lVar7 = *(long *)(*_DAT_0089f4f0 + 0x60);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__00178388(&local_48,lVar7,uVar8,&local_28);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = local_48;
  if ((local_48 == 0) || (*(int *)(local_48 + 0x54) == 0)) {
LAB__text__0016dd98:
    lVar7 = 0;
LAB__text__0016dd9c:
    *(long *)(lVar7 + 0xa60) = param_1 + 0x430;
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    return;
  }
  piVar1 = (int *)(local_48 + 0x54);
  iVar9 = *(int *)(local_48 + 0x54);
  do {
    plVar10 = *(long **)(lVar7 + 0x58);
    plVar5 = (long *)FUN__text__00178dbc();
    if (plVar5 != plVar10) {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10 != plVar5 && plVar10 != (long *)0x0);
      if (plVar10 == (long *)0x0) goto LAB__text__0016dd98;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar6 = *(long *)(lVar7 + 0x60);
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = lVar6 + -0x50;
        }
        goto LAB__text__0016dd9c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar2;
    if (iVar2 == 0) goto LAB__text__0016dd98;
  } while( true );
}


