/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00507f70; name: FUN_.text__00507f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00507f70(undefined8 param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  
  FUN__text__00411bc0();
  lVar10 = *(long *)(param_2 + 8);
  for (lVar9 = *(long *)(_DAT_008a3f68 + 0x10); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x10)) {
    FUN__text__005082c0(lVar9 + 0x20,lVar9);
  }
  puVar8 = &DAT_00aea8f8;
  while (puVar8 = *(undefined4 **)(puVar8 + 4), puVar8 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar8 + 0x31) = 0;
    *(undefined1 *)((long)puVar8 + 199) = 0;
    puVar8[0x2f] = puVar8[0x2f] + 1;
    if ((puVar8[0x30] != 0) && (uVar1 = puVar8[0x30] + 1, puVar8[0x30] = uVar1, 99 < uVar1)) {
      puVar8[0x30] = 0;
      puVar8[0x2e] = 0;
    }
  }
  if ((*(int *)(lVar10 + 0xb0) != 0) &&
     (plVar7 = (long *)FUN__text__00400f80(1,0x38), plVar7 != (long *)0x0)) {
    FUN__text__004b9a14(plVar7,0x4000);
    *plVar7 = _DAT_008a41c0 + 0x10;
    lVar9 = FUN__text__00400f80(0,0x48);
    if (lVar9 != 0) {
      FUN__text__004b7a40(lVar9,0);
      *(long **)(lVar9 + 8) = plVar7;
      FUN__text__004b2960(*_DAT_008a45c0,lVar9,_DAT_008ab03c,0);
    }
    piVar2 = (int *)((long)plVar7 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  *(undefined1 *)(lVar10 + 0xc4) = 0;
  lVar9 = DAT_00aea928;
  while (lVar9 != 0) {
    lVar4 = *(long *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x10);
    if (*(uint *)(lVar4 + 0x60) < 2 && *(char *)(lVar4 + 100) != '\0') {
      FUN__text__00447940(DAT_00ae9a50,*(undefined8 *)(lVar4 + 0x58));
    }
  }
  lVar9 = nn::os::GetSystemTick();
  *(float *)(lVar10 + 0xc0) = (float)(lVar9 - *(long *)(param_2 + 0x10)) / DAT_00ae9648;
  FUN__text__00413d04(param_1);
  FUN__text__00411bf0();
  return;
}


