/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496950; name: FUN_.text__00496950
 */


void FUN__text__00496950(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  *(undefined1 *)(param_1 + 4) = 0xff;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0xc] = 0;
  *param_1 = 0x88a1e8;
  puVar10 = param_1 + 0xb;
  *puVar10 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  memmove(param_1 + 1,(void *)(param_2 + 0x10),0x30);
  piVar1 = (int *)(param_3 + 0x14);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar8 = param_1[10];
  if (*(char *)(lVar8 + 0x4c) != '\b' && *(int *)(lVar8 + 0x48) != 0) {
    FUN__text__00433670(param_1,*(undefined8 *)(lVar8 + 0x48));
    lVar8 = param_1[10];
  }
  uVar9 = *(uint *)(lVar8 + 0x38);
  iVar6 = uVar9 - *(uint *)((long)param_1 + 100);
  if (*(uint *)((long)param_1 + 100) <= uVar9 && iVar6 != 0) {
    uVar7 = FUN__text__00498cb0(puVar10,iVar6);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar8 = param_1[10];
    uVar9 = *(uint *)(lVar8 + 0x38);
  }
  if (uVar9 != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    do {
      uVar9 = *(uint *)(param_1 + 0xc);
      uVar3 = *(uint *)((long)param_1 + 100);
      lVar11 = *(long *)(lVar8 + 8);
      if (uVar3 <= uVar9) {
        iVar6 = uVar3 + (uVar3 >> 1);
        if (uVar3 == 0) {
          iVar6 = 1;
        }
        FUN__text__00498cb0(puVar10,iVar6);
        uVar9 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar9 + 1;
      plVar2 = (long *)(param_1[0xb] + (ulong)uVar9 * 0x20);
      *(undefined4 *)(plVar2 + 1) = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *plVar2 = lVar11;
      lVar11 = *(long *)(lVar11 + 8);
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 0x24);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != *(long *)(param_1[10] + 0x30) + (ulong)*(uint *)(param_1[10] + 0x38) * 0x10);
  }
  return;
}


