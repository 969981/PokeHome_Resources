/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028aca0; name: FUN_.text__0028aca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028aca0(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  int iStack_6c;
  uint local_68;
  
  lVar19 = *(long *)(param_1 + 0x2d0);
  if (lVar19 != 0) {
    plVar17 = (long *)(lVar19 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  local_b0 = 0xa7649e0ad180b01a;
  uStack_a8 = 0x71a942;
  local_a0 = 0x1b;
  local_98 = 0;
  FUN__text__00115650(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_b0,0xb);
  lVar18 = *(long *)(local_80 + 0x60);
  if ((lVar18 == 0) || ((**(code **)(*(long *)(lVar18 + 0x48) + 0x10))(), local_80 != 0)) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  puVar11 = (ushort *)
            FUN__text__0027a640(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970),
                                *(undefined4 *)(param_1 + 0x974),*(undefined1 *)(param_1 + 0x978),
                                *(undefined1 *)(param_1 + 0x979));
  uVar6 = puVar11[2];
  cVar3 = *(char *)((long)puVar11 + 5);
  uVar4 = *puVar11;
  bVar5 = (byte)puVar11[1];
  uVar21 = (uint)bVar5;
  if (uVar4 == 0x365) {
    uVar21 = (uint)bVar5 * 0x25 >> 8;
    uVar21 = uVar21 + ((bVar5 - uVar21 & 0xfe) >> 1) >> 2;
    local_c8 = (uint)bVar5 + uVar21 * -7 & 0xff;
  }
  else {
    local_c8 = 0xffffffff;
  }
  iVar10 = *(int *)(param_1 + 0x970);
  lVar1 = param_1 + 0x110;
  uVar15 = (uint)*(byte *)((long)puVar11 + 3);
  iVar9 = FUN__text__0028f1c0(param_1,uVar4);
  lVar12 = *(long *)(param_1 + 0x640);
  uVar20 = (uint)uVar4;
  if (*(int *)(lVar12 + 0x130) == 1) {
    uVar13 = FUN__text__0028f1a4(param_1,*(undefined1 *)(lVar12 + 0x92954),
                                 *(undefined4 *)(lVar12 + 0x92958),
                                 *(undefined1 *)(lVar12 + iVar10 + 0x92968),uVar20);
    lVar12 = *(long *)(param_1 + 0x640);
    iVar9 = 2;
    if ((uVar13 & 1) == 0) {
      iVar9 = 0;
    }
  }
  iVar10 = FUN__text__0027a5c0(lVar12,*(undefined4 *)(param_1 + 0x970));
  bVar7 = iVar9 != 0;
  FUN__text__003c7c60(lVar19,0x730d50,(bVar7 && 0 < iVar10) && (char)uVar6 != '\0');
  if (bVar7 && 0 < iVar10) {
    FUN__text__003c7c60(lVar19,0x730d58,1);
    uVar2 = 3;
    if ((uVar21 & 0xfe) != 2 || uVar20 != 0x2a6) {
      uVar2 = uVar15;
    }
    if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0028aeec */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__0028aef8 + (ulong)*(byte *)((ulong)uVar2 + 0x7302fc) * 4))();
      return;
    }
  }
  else {
    FUN__text__003c7c60(lVar19,0x730d58,0);
  }
  if ((iVar9 == 0) || (iVar10 < 2)) {
    FUN__text__003c7c60(lVar19,0x730d68,0);
    FUN__text__003c7c60(lVar19,0x730d70,0);
    FUN__text__003c7c60(lVar19,0x730d78,0);
  }
  else {
    FUN__text__003c7c60(lVar19,0x730d68,1);
    FUN__text__003c7c60(lVar19,0x730d70,1);
    FUN__text__003c7c60(lVar19,0x730d78,1);
    iVar9 = *(int *)(param_1 + 0x974);
    lVar12 = *(long *)(lVar19 + 0x2e8);
    local_b0 = 0x4db0fc9b58f4a83a;
    if (lVar12 == 0) {
      FUN__text__005f2d98(lVar18,&local_b0,0);
      lVar12 = *(long *)(lVar19 + 0x2e0);
    }
    else {
      plVar17 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN__text__005f2d98(lVar18,&local_b0,lVar12);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      lVar12 = *(long *)(lVar19 + 0x2e0);
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar12,0,iVar9 + 1U & 0xff,2,0,1);
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    lVar12 = *(long *)(lVar19 + 0x2e0);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar12,1,iVar10,2,0,1);
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    FUN__text__003c8c20(lVar19,0x730d68,0xb);
  }
  local_80._0_6_ = CONCAT24((short)uVar21,uVar20);
  local_73 = 0;
  local_70 = 0;
  local_78 = uVar15;
  if (uVar15 == 3) {
    local_78 = 0;
  }
  if ((iVar10 < 1) && (lVar19 = *(long *)(param_1 + 0x640), *(int *)(lVar19 + 0x130) == 1)) {
    lVar19 = *(long *)(lVar19 + 0x92960) + (ulong)*(byte *)(lVar19 + 0x92954) * 0x78b8 +
             (ulong)*(uint *)(lVar19 + 0x92958) * 0x138 +
             (ulong)*(byte *)(lVar19 + (ulong)*(uint *)(param_1 + 0x970) + 0x92968) * 4;
    local_80._0_6_ = CONCAT24((short)*(undefined4 *)(lVar19 + 0x54),uVar20);
    uVar21 = *(uint *)(lVar19 + 0x78);
    local_78 = 0;
    if (uVar21 != 3) {
      local_78 = uVar21;
    }
  }
  local_74 = (char)uVar6 != '\0';
  iStack_6c = (uint)(cVar3 != '\0') << 1;
  local_68 = local_c8;
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7304e0);
  lVar12 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7304e8);
  if (bVar7 && 0 < iVar10) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
    bVar7 = (char)puVar11[3] != '\0';
    FUN__text__003d2848(param_1 + 0x990,&local_80,bVar7);
    FUN__text__003d2848(param_1 + 0xff0,&local_80,bVar7);
    lVar19 = *(long *)(DAT_008e15a0 + 0x80);
  }
  else {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    lVar19 = *(long *)(DAT_008e15a0 + 0x80);
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar19 + 0x2e8);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  puVar16 = (undefined8 *)(_DAT_008a20a8 + (ulong)*(uint *)(param_1 + 0x1654) * 0x30);
  local_a0 = puVar16[2];
  local_98 = puVar16[3];
  local_90 = puVar16[4];
  uStack_88 = puVar16[5];
  local_b0 = *puVar16;
  uStack_a8 = puVar16[1];
  uVar14 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_a0);
  FUN__text__003c3378(lVar12,&local_80,0,uVar14,0,0);
  uVar14 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  FUN__text__003c3378(lVar12,&local_80,0,uVar14,0,0);
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  bVar8 = FUN__text__0027a6e0(*(long *)(param_1 + 0x640),
                              *(undefined4 *)
                               (*(long *)(param_1 + 0x640) +
                                (ulong)*(uint *)(param_1 + 0x970) * 0x18 + 0x698d8),
                              *(undefined4 *)(param_1 + 0x974));
  cVar3 = (char)puVar11[3];
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730d80);
  bVar5 = bVar8 & 1;
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar8 & 1;
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730d88);
  if (cVar3 == '\0') {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    uVar14 = FUN__text__0012cb14(lVar1,0x730610);
    FUN__text__003a14e8(uVar14,1);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730d90);
    bVar8 = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    uVar14 = FUN__text__0012cb14(lVar1,0x730610);
    FUN__text__003a14e8(uVar14,0);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730d90);
    bVar8 = *(byte *)(lVar19 + 0x58) | 1;
  }
  *(byte *)(lVar19 + 0x58) = bVar8;
  uVar14 = FUN__text__0012cb14(lVar1,0x730618);
  FUN__text__003a14e8(uVar14,cVar3 != '\0');
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730d98);
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar5;
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730da0);
  if (cVar3 == '\0') {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    uVar14 = FUN__text__0012cb14(lVar1,0x730638);
    FUN__text__003a14e8(uVar14,1);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730da8);
    bVar8 = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    uVar14 = FUN__text__0012cb14(lVar1,0x730638);
    FUN__text__003a14e8(uVar14,0);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730da8);
    bVar8 = *(byte *)(lVar19 + 0x58) | 1;
  }
  *(byte *)(lVar19 + 0x58) = bVar8;
  uVar14 = FUN__text__0012cb14(lVar1,0x730640);
  FUN__text__003a14e8(uVar14,cVar3 != '\0');
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730db0);
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar5;
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730db8);
  if (cVar3 == '\0') {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    uVar14 = FUN__text__0012cb14(lVar1,0x730660);
    FUN__text__003a14e8(uVar14,1);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730dc0);
    bVar8 = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    uVar14 = FUN__text__0012cb14(lVar1,0x730660);
    FUN__text__003a14e8(uVar14,0);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730dc0);
    bVar8 = *(byte *)(lVar19 + 0x58) | 1;
  }
  *(byte *)(lVar19 + 0x58) = bVar8;
  uVar14 = FUN__text__0012cb14(lVar1,0x730668);
  FUN__text__003a14e8(uVar14,cVar3 != '\0');
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730dc8);
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar5;
  lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730dd0);
  if (cVar3 == '\0') {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    uVar14 = FUN__text__0012cb14(lVar1,0x730688);
    FUN__text__003a14e8(uVar14,1);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730dd8);
    bVar5 = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    uVar14 = FUN__text__0012cb14(lVar1,0x730688);
    FUN__text__003a14e8(uVar14,0);
    lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730dd8);
    bVar5 = *(byte *)(lVar19 + 0x58) | 1;
  }
  *(byte *)(lVar19 + 0x58) = bVar5;
  uVar14 = FUN__text__0012cb14(lVar1,0x730690);
  FUN__text__003a14e8(uVar14,cVar3 != '\0');
  FUN__text__002862c4(param_1);
  FUN__text__00286ad0(param_1);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  return;
}


