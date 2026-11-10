/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016ce60; name: FUN_.text__0016ce60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016ce60(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long local_48;
  undefined8 local_28;
  
  lVar1 = param_1 + 0x438;
  FUN__text__00247e3c(lVar1);
  plVar6 = _DAT_0089f3d8;
  *(undefined1 *)(param_1 + 0x438) = 1;
  uVar9 = *(undefined8 *)(*plVar6 + 0x68);
  local_28 = *(undefined8 *)(*plVar6 + 0x48);
  lVar8 = *(long *)(*_DAT_0089f4f0 + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN__text__00171ac4(&local_48,lVar8,uVar9,&local_28);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar8 = local_48;
  if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
    piVar2 = (int *)(local_48 + 0x54);
    iVar10 = *(int *)(local_48 + 0x54);
    do {
      plVar11 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__001724fc();
      if (plVar6 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar6 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar3 = *piVar2;
      if (iVar3 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar7 = *(long *)(lVar8 + 0x60);
          lVar8 = 0;
          if (lVar7 != 0) {
            lVar8 = lVar7 + -0x50;
          }
          *(long *)(lVar8 + 0xa60) = lVar1;
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          goto joined_r0x0016cf8c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar3;
    } while (iVar3 != 0);
  }
  lRam0000000000000a60 = lVar1;
  (**(code **)(_DAT_00000048 + 0x18))();
joined_r0x0016cf8c:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


