/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004948b0; name: FUN_.text__004948b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004948b0(float param_1,long param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar14 = *(undefined8 **)(param_3 + 0x22);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (puVar14 == (undefined8 *)0x0) {
    local_60 = FUN__text__0049db9c();
    if (local_60 == 0) {
      uVar6 = 2;
      FUN__text__00458000(&local_50);
      goto joined_r0x004949e8;
    }
    puVar14 = &local_78;
    plVar7 = (long *)FUN__text__00494af0(puVar14,param_3,*(undefined4 *)(param_2 + 0x20));
  }
  else {
    plVar7 = (long *)FUN__text__00494af0(puVar14,param_3,*(undefined4 *)(param_2 + 0x20));
  }
  if (plVar7 == (long *)0x0) {
    uVar6 = 0x34;
    FUN__text__00458000(&local_50);
  }
  else {
    bVar3 = *(byte *)(param_3 + 0xc3);
    *(undefined4 *)(plVar7 + 0x19) = param_3[0xc2];
    *(byte *)((long)plVar7 + 0xcc) = bVar3 | 1;
    *(undefined4 *)(plVar7 + 0x1a) = *param_3;
    lVar9 = param_2;
    do {
      lVar8 = lVar9;
      if (*(long *)(lVar8 + 0x78) == 0) break;
      lVar9 = *(long *)(lVar8 + 0x78);
    } while (-1 < *(char *)(lVar8 + 0xd4));
    pbVar11 = *(byte **)(lVar8 + 0x90);
    iVar2 = _DAT_0073b240;
    if (pbVar11 != (byte *)0x0) {
      bVar3 = *pbVar11;
      uVar13 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar13 = 1;
      }
      uVar10 = (ulong)uVar13;
      pbVar12 = pbVar11 + ((ulong)bVar3 & 0xfc);
      do {
        pbVar12 = pbVar12 + 4;
        pbVar11 = pbVar11 + 1;
        if (*pbVar11 == 0x2e) {
          iVar2 = *(int *)pbVar12;
          break;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar2 == 2) {
      FUN__text__004b926c(plVar7,1,*(undefined8 *)(param_3 + 0x2a),param_3 + 0x26);
      lVar9 = *(long *)(param_3 + 0x22);
    }
    else {
      uVar10 = FUN__text__0046a490(param_2);
      uVar6 = 2;
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
      }
      FUN__text__004b926c(plVar7,uVar6,*(undefined8 *)(param_3 + 0x2a),param_3 + 0x26);
      lVar9 = *(long *)(param_3 + 0x22);
    }
    if (lVar9 != 0) {
      FUN__text__004b933c(plVar7,lVar9 + 0x28);
    }
    dVar15 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68);
    dVar16 = 0.5;
    if (dVar15 * (double)param_1 <= 0.0) {
      dVar16 = -0.5;
    }
    uVar6 = FUN__text__00494c60(puVar14,param_3,(int)(dVar16 + dVar15 * (double)param_1),plVar7);
    piVar1 = (int *)((long)plVar7 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    FUN__text__00458000(&local_50);
  }
joined_r0x004949e8:
  if (local_60 != 0) {
    FUN__text__0049dbf0();
  }
  return uVar6;
}


