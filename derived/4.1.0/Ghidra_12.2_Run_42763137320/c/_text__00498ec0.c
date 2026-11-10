/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498ec0; name: FUN_.text__00498ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00498ec0(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  
  *(long *)(param_1 + 8) = param_2;
  piVar11 = (int *)(param_2 + 0x24);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar4) {
      *piVar11 = *piVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar2 = *(byte *)(param_3 + 0x98);
  uVar10 = (uint)bVar2;
  uVar5 = bVar2 - 0x80;
  if (uVar5 < 0x21 && (1L << ((ulong)uVar5 & 0x3f) & 0x100010001U) != 0) {
    uVar7 = *(undefined4 *)(param_3 + 0x34);
    uVar9 = *(undefined1 *)(param_3 + 0x9c);
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar7 = *(undefined4 *)(param_3 + 0x34);
    uVar9 = 0xff;
    lVar8 = *(long *)(param_3 + 0x10);
    if (bVar2 == 0) goto LAB__text__00498f50;
  }
  uVar10 = 0;
  if (*(long *)(param_3 + 8) != 0) {
    uVar10 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  }
LAB__text__00498f50:
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_3 + 0x99);
  *(long *)(param_1 + 0x10) = lVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(uint *)(param_1 + 0x20) = uVar10;
  *(undefined1 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x29) = (undefined4)local_b0;
  *(undefined4 *)(param_1 + 0x2c) = local_b0._3_4_;
  *(undefined4 *)(param_1 + 0x31) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x34) = local_78._3_4_;
  iVar1 = *(int *)(lVar8 + 0x60);
  *(int *)(lVar8 + 0x60) = iVar1 + 1;
  if ((iVar1 == 1) && (*(char *)(lVar8 + 100) != '\0')) {
    FUN__text__004473d0();
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x30);
  piVar11 = *(int **)(param_3 + 0x20);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN__text__0040c060();
  }
  if (piVar11 != (int *)0x0) {
    *piVar11 = *piVar11 + 1;
  }
  *(int **)(param_1 + 0x40) = piVar11;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x80);
  local_78 = *(long *)(param_1 + 8);
  if (*(char *)(local_78 + 0x130) != '\0') {
    FUN__text__0048e100(DAT_00ae9a80,*(undefined4 *)(param_1 + 0x54));
    local_78 = *(long *)(param_1 + 8);
  }
  puVar6 = _DAT_008a4640;
  if (*(int *)(local_78 + 0x120) != 0) {
    plVar12 = *(long **)(local_78 + 0x118);
    do {
      local_a8 = *(undefined8 *)(param_3 + 0x98);
      local_68 = 0;
      local_a0 = *(undefined4 *)(param_3 + 0xa0);
      local_90 = 0;
      local_88 = 0;
      local_84 = 1;
      local_70 = 0;
      if (*plVar12 != 0) {
        local_70 = *plVar12 + 0x18;
      }
      local_80 = 0;
      local_b0 = 0;
      local_98 = *(undefined8 *)(param_3 + 0xa8);
      uVar7 = FUN__text__00477138(param_3);
      local_80 = 0;
      local_b0 = *(undefined8 *)(param_3 + 0x10);
      local_90 = CONCAT44(*(undefined4 *)(param_3 + 0x34),uVar7);
      local_88 = *(undefined4 *)(param_3 + 0x84);
      local_84 = *(byte *)(param_3 + 0x310) >> 1 & 1;
      FUN__text__0046cff0(*puVar6,&local_78,*plVar12 + 0x20,&local_b0,param_1 + 0x60);
      lVar8 = *plVar12;
      if (*(char *)(lVar8 + 0x4c) == '\x04') {
        FUN__text__0046d170(*puVar6,&local_78,*(undefined4 *)(lVar8 + 0x48),&local_b0,param_1 + 0x60
                           );
        lVar8 = *plVar12;
      }
      FUN__text__00499170(param_1,lVar8);
      local_78 = *(long *)(param_1 + 8);
      plVar12 = plVar12 + 1;
    } while (plVar12 !=
             (long *)(*(long *)(local_78 + 0x118) + (ulong)*(uint *)(local_78 + 0x120) * 8));
  }
  return;
}


