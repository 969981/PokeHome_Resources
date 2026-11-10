/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a0a40; name: FUN_.text__004a0a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__004a0a40(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ushort uVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  
  plVar14 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
  uVar16 = *(uint *)(plVar14 + 1);
  uVar3 = *(uint *)((long)plVar14 + 0xc);
  if (uVar3 <= uVar16) {
    iVar2 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar2 = 1;
    }
    uVar7 = FUN__text__0049d8c0(plVar14,iVar2);
    if ((uVar7 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(uint *)((long)plVar14 + 0xc) <= uVar16) {
      return (long *)0x0;
    }
    uVar16 = *(uint *)(plVar14 + 1);
  }
  lVar15 = *plVar14;
  *(uint *)(plVar14 + 1) = uVar16 + 1;
  if (lVar15 == 0) {
    return (long *)0x0;
  }
  plVar14 = (long *)(lVar15 + (ulong)uVar16 * 0x28);
  FUN__text__0049d9b0(plVar14);
  piVar1 = (int *)(param_1 + 0x24);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar8 = *plVar14;
  *plVar14 = param_1;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x24);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))();
    }
  }
  lVar15 = lVar15 + (ulong)uVar16 * 0x28;
  pbVar9 = (byte *)(lVar15 + 0x12);
  if (*(short *)(param_1 + 0x134) == 0) {
    bVar11 = *pbVar9 | 3;
    uVar10 = 1;
  }
  else {
    bVar11 = *pbVar9 & 0xfd;
    *pbVar9 = bVar11;
    uVar10 = *(ushort *)(param_1 + 0x136);
    sVar4 = *(short *)(param_1 + 0x134);
    iVar2 = (uint)*(ushort *)(param_1 + 0x138) - (uint)uVar10;
    sVar13 = 0;
    uVar12 = *(ushort *)(param_1 + 0x138);
    if (iVar2 != 0) {
      lVar8 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar8;
      bVar11 = *pbVar9;
      sVar13 = (short)(int)((double)(uint)((ulong)lVar8 >> 0x21) *
                            (double)(int)(short)iVar2 * 4.656612875245797e-10 + 0.5);
      uVar12 = uVar10;
    }
    uVar10 = uVar12 + sVar13 + sVar4;
    if ((short)uVar10 < 2) {
      uVar10 = 1;
    }
    bVar11 = bVar11 & 0xfe | 1 < uVar10;
  }
  *pbVar9 = bVar11;
  *(ushort *)(lVar15 + 0x10) = uVar10;
  return plVar14;
}


