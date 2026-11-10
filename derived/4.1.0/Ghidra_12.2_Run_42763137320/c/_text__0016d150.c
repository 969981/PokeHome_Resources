/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016d150; name: FUN_.text__0016d150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016d150(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long local_48;
  undefined8 local_28;
  
  plVar5 = _DAT_0089f3d8;
  puVar7 = (undefined4 *)(param_1 + 0xa0);
  *puVar7 = 0;
  uVar9 = *(undefined8 *)(*plVar5 + 0x68);
  local_28 = *(undefined8 *)(*plVar5 + 0x48);
  lVar8 = *(long *)(*_DAT_0089f4f0 + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN__text__001731c4(&local_48,lVar8,uVar9,&local_28);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar8 = local_48;
  if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
    piVar1 = (int *)(local_48 + 0x54);
    iVar10 = *(int *)(local_48 + 0x54);
    do {
      plVar11 = *(long **)(lVar8 + 0x58);
      plVar5 = (long *)FUN__text__00173b78();
      if (plVar5 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar5 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar8 + 0x60);
          lVar8 = 0;
          if (lVar6 != 0) {
            lVar8 = lVar6 + -0x50;
          }
          *(undefined4 **)(lVar8 + 0xa40) = puVar7;
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          goto joined_r0x0016d26c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  puRam0000000000000a40 = puVar7;
  (**(code **)(_DAT_00000048 + 0x18))();
joined_r0x0016d26c:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


