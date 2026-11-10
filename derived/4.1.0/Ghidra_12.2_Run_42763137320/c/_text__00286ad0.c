/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00286ad0; name: FUN_.text__00286ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00286ad0(long param_1)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  char *pcVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong local_8a0;
  ulong local_898;
  undefined8 local_890;
  undefined8 local_888;
  long local_880;
  ulong local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  long local_858;
  long local_70 [2];
  
  lVar34 = *(long *)(param_1 + 0x2d0);
  if (lVar34 != 0) {
    plVar25 = (long *)(lVar34 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0);
  lVar27 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
  }
  local_860 = 0x1b;
  local_858 = 0;
  local_870 = 0xa7649e0ad180b01a;
  uStack_868 = 0x71a942;
  FUN__text__00115650(local_70,*(undefined8 *)(lVar27 + 0x4d8),&local_870,
                      *(undefined4 *)(param_1 + 0x880));
  if (local_858 != 0) {
    (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
  }
  lVar33 = *(long *)(local_70[0] + 0x60);
  if (lVar33 != 0) {
    (**(code **)(*(long *)(lVar33 + 0x48) + 0x10))();
  }
  local_860 = 0x1b;
  local_858 = 0;
  local_870 = 0xa7649e0ad180b01a;
  uStack_868 = 0x71a942;
  FUN__text__00115650(&local_898,uVar30,&local_870,0xb);
  lVar20 = *(long *)(local_898 + 0x60);
  if ((lVar20 == 0) || ((**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(), local_898 != 0)) {
    (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
    local_898 = 0;
  }
  if (local_858 != 0) {
    (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
  }
  local_870 = 0x4fdfff35e54a451f;
  uStack_868 = 0x70d0b8;
  local_860 = 0x17;
  local_858 = 0;
  FUN__text__00115650(&local_898,uVar30,&local_870,*(undefined4 *)(param_1 + 0x880));
  lVar32 = *(long *)(local_898 + 0x60);
  if ((lVar32 == 0) || ((**(code **)(*(long *)(lVar32 + 0x48) + 0x10))(), local_898 != 0)) {
    (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
    local_898 = 0;
  }
  if (local_858 != 0) {
    (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
  }
  local_870 = 0x4f4be795e6d28f41;
  uStack_868 = 0x71da35;
  local_860 = 0x17;
  local_858 = 0;
  FUN__text__00115650(&local_898,uVar30,&local_870,*(undefined4 *)(param_1 + 0x880));
  lVar26 = *(long *)(local_898 + 0x60);
  if ((lVar26 == 0) || ((**(code **)(*(long *)(lVar26 + 0x48) + 0x10))(), local_898 != 0)) {
    (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
    local_898 = 0;
  }
  if (local_858 != 0) {
    (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
  }
  local_870 = 0xb9f259a8b60d6582;
  uStack_868 = 0x71c2b2;
  local_860 = 0x19;
  local_858 = 0;
  FUN__text__00115650(&local_898,uVar30,&local_870,*(undefined4 *)(param_1 + 0x880));
  lVar29 = *(long *)(local_898 + 0x60);
  if ((lVar29 == 0) || ((**(code **)(*(long *)(lVar29 + 0x48) + 0x10))(), local_898 != 0)) {
    (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
    local_898 = 0;
  }
  if (local_858 != 0) {
    (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
  }
  local_870 = 0x1562fd8fa7f793a9;
  uStack_868 = 0x720ee5;
  local_860 = 0x19;
  local_858 = 0;
  FUN__text__00115650(&local_898,uVar30,&local_870,*(undefined4 *)(param_1 + 0x880));
  lVar21 = *(long *)(local_898 + 0x60);
  if ((lVar21 == 0) || ((**(code **)(*(long *)(lVar21 + 0x48) + 0x10))(), local_898 != 0)) {
    (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
    local_898 = 0;
  }
  if (local_858 != 0) {
    (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
  }
  lVar28 = *(long *)(param_1 + 0x640);
  uVar13 = *(uint *)(param_1 + 0x970);
  puVar14 = (ushort *)
            FUN__text__0027a640(lVar28,(ulong)uVar13,*(undefined4 *)(param_1 + 0x974),
                                *(undefined1 *)(param_1 + 0x978),*(undefined1 *)(param_1 + 0x979));
  uVar5 = *puVar14;
  bVar3 = (byte)puVar14[1];
  uVar23 = (uint)bVar3;
  if (uVar5 == 0x365) {
    uVar23 = (uint)bVar3 * 0x25 >> 8;
    uVar23 = uVar23 + ((bVar3 - uVar23 & 0xfe) >> 1) >> 2;
  }
  iVar9 = *(int *)(param_1 + 0x970);
  iVar8 = FUN__text__0028f1c0(param_1,uVar5);
  lVar15 = *(long *)(param_1 + 0x640);
  uVar31 = (uint)uVar5;
  if (*(int *)(lVar15 + 0x130) == 1) {
    uVar16 = FUN__text__0028f1a4(param_1,*(undefined1 *)(lVar15 + 0x92954),
                                 *(undefined4 *)(lVar15 + 0x92958),
                                 *(undefined1 *)(lVar15 + iVar9 + 0x92968),uVar31);
    lVar15 = *(long *)(param_1 + 0x640);
    iVar8 = 2;
    if ((uVar16 & 1) == 0) {
      iVar8 = 0;
    }
  }
  iVar9 = FUN__text__0027a5c0(lVar15,*(undefined4 *)(param_1 + 0x970));
  lVar15 = *(long *)(lVar34 + 0x2e8);
  local_870 = 0x4da3659b58e91d49;
  if (lVar15 == 0) {
    FUN__text__005f2d98(lVar33,&local_870,0);
    lVar15 = *(long *)(lVar34 + 0x2e0);
  }
  else {
    plVar25 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    FUN__text__005f2d98(lVar33,&local_870,lVar15);
    (**(code **)(*plVar25 + 0x18))(plVar25);
    lVar15 = *(long *)(lVar34 + 0x2e0);
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar2 = param_1 + 0x110;
  FUN__text__00166508(lVar15,0,uVar31,4,2,1);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  FUN__text__003c8c20(lVar34,0x730de0,*(undefined4 *)(param_1 + 0x880));
  if ((iVar8 == 0) || (iVar9 < 1)) {
    lVar15 = *(long *)(lVar34 + 0x2e8);
    local_870 = 0x4415b8488fbd04b9;
    if (lVar15 == 0) {
      FUN__text__005f2d98(lVar20,&local_870,0);
      lVar15 = *(long *)(lVar34 + 0x2e8);
    }
    else {
      plVar25 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar25 + 0x10))(plVar25);
      FUN__text__005f2d98(lVar20,&local_870,lVar15);
      (**(code **)(*plVar25 + 0x18))(plVar25);
      lVar15 = *(long *)(lVar34 + 0x2e8);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    uVar17 = FUN__text__005f3244(lVar15);
    FUN__text__005f3460(&local_870,uVar17,0x400);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    FUN__text__003c89e0(lVar34,0x730de8,&local_870,*(undefined4 *)(param_1 + 0x880));
    bVar6 = iVar8 == 2;
    bVar1 = (bVar6 && iVar9 != 0) && (iVar8 != 2 || -1 < iVar9);
    if (!(bVar6 && 0 < iVar9)) goto LAB__text__002870d4;
LAB__text__00287300:
    uVar16 = 0xcbf29ce484222645;
    FUN__text__003c7c60(lVar34,0x730df0,1);
    FUN__text__003c7c60(lVar34,0x730df8,1);
    FUN__text__003c7c60(lVar34,0x730e00,1);
    cVar4 = *(char *)((long)puVar14 + 5);
    FUN__text__003c7c60(lVar34,0x730df0,1);
    if (cVar4 == '\0') {
      snprintf((char *)&local_870,0x400,(char *)0x71abca,(ulong)uVar31,(ulong)uVar23);
      local_898 = 0x4fdfff35e54a451f;
      local_890 = 0x70d0b8;
      local_888 = 0x17;
      local_880 = 0;
      FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
      local_8a0 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_8a0 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      if (*(long *)(local_878 + 0x188) == 0) {
        uVar11 = 0;
LAB__text__00287a5c:
        (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
        local_878 = 0;
      }
      else {
        uVar11 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
        uVar11 = ~uVar11 >> 0x1f;
        if (local_878 != 0) goto LAB__text__00287a5c;
      }
      if (local_880 != 0) {
        (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
      }
      if (uVar11 == 0) {
        snprintf((char *)&local_870,0x400,(char *)0x71abca,1,0);
      }
      if (lVar32 != 0) {
        (**(code **)(*(long *)(lVar32 + 0x48) + 0x10))();
      }
      local_898 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_898 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_898 = (local_898 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      uVar10 = *(undefined4 *)(param_1 + 0x880);
      lVar15 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      FUN__text__005f2d98(lVar32,&local_898,lVar15);
      uVar17 = FUN__text__005f3244(lVar15);
      FUN__text__0012c9f0(lVar2,0x730df0,uVar17,uVar10);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      (**(code **)(*(long *)(lVar32 + 0x48) + 0x18))();
      uVar11 = FUN__text__005fe83c(uVar31,uVar23,0);
      uVar12 = FUN__text__005fe954(uVar31,uVar23,0);
      lVar15 = *(long *)(param_1 + 0x558);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      local_870 = 0x4906be4d67e9baf9;
      uVar17 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_870);
      FUN__text__003d3dac(lVar15,uVar11,1,uVar17,0,0);
      FUN__text__003c7c60(lVar34,&local_870,1);
      local_870 = 0x4906bd4d67e9b946;
      if ((uVar11 & 0xff) != (uVar12 & 0xff)) {
        uVar17 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_870);
        FUN__text__003d3dac(lVar15,uVar12,1,uVar17,0,0);
      }
      FUN__text__003c7c60(lVar34,&local_870,(uVar11 & 0xff) != (uVar12 & 0xff));
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      snprintf((char *)&local_870,0x400,(char *)0x71e620,(ulong)uVar31,(ulong)uVar23);
      local_898 = 0xb9f259a8b60d6582;
      local_890 = 0x71c2b2;
      local_888 = 0x19;
      local_880 = 0;
      FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
      local_8a0 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_8a0 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      if (*(long *)(local_878 + 0x188) == 0) {
        uVar11 = 0;
LAB__text__00287d18:
        (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
        local_878 = 0;
      }
      else {
        uVar11 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
        uVar11 = ~uVar11 >> 0x1f;
        if (local_878 != 0) goto LAB__text__00287d18;
      }
      if (local_880 != 0) {
        (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
      }
      if (uVar11 == 0) {
        snprintf((char *)&local_870,0x400,(char *)0x71e620,1,0);
      }
      if (lVar29 != 0) {
        (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
      }
      local_898 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_898 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_898 = (local_898 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      uVar10 = *(undefined4 *)(param_1 + 0x880);
      lVar15 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      FUN__text__005f2d98(lVar29,&local_898,lVar15);
      uVar17 = FUN__text__005f3244(lVar15);
      FUN__text__0012c9f0(lVar2,0x730e08,uVar17,uVar10);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
      snprintf((char *)&local_870,0x400,(char *)0x70e48d,(ulong)uVar31,(ulong)uVar23);
      local_898 = 0x1562fd8fa7f793a9;
      local_890 = 0x720ee5;
      local_888 = 0x19;
      local_880 = 0;
      FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
      local_8a0 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_8a0 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      if (*(long *)(local_878 + 0x188) == 0) {
        uVar11 = 0;
LAB__text__00287ed8:
        (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
        local_878 = 0;
      }
      else {
        uVar11 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
        uVar11 = ~uVar11 >> 0x1f;
        if (local_878 != 0) goto LAB__text__00287ed8;
      }
      if (local_880 != 0) {
        (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
      }
      if (uVar11 == 0) {
        snprintf((char *)&local_870,0x400,(char *)0x70e48d,1,0);
      }
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
      }
      local_898 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_898 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_898 = (local_898 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
    }
    else {
      uVar19 = (ulong)uVar31;
      bVar6 = uVar31 != 0x37c;
      bVar7 = uVar23 != 1;
      if (bVar6 || bVar7) {
        pcVar18 = (char *)0x70aecc;
      }
      else {
        pcVar18 = (char *)0x70eebf;
        uVar19 = 0x37c;
      }
      snprintf((char *)&local_870,0x400,pcVar18,uVar19);
      local_898 = 0x4fdfff35e54a451f;
      local_890 = 0x70d0b8;
      local_888 = 0x17;
      local_880 = 0;
      FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
      local_8a0 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_8a0 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      if (*(long *)(local_878 + 0x188) == 0) {
        uVar11 = 0;
LAB__text__002879fc:
        (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
      }
      else {
        uVar11 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
        uVar11 = ~uVar11 >> 0x1f;
        if (local_878 != 0) goto LAB__text__002879fc;
      }
      local_878 = 0;
      if (local_880 != 0) {
        (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
      }
      if (uVar11 == 0) {
        snprintf((char *)&local_870,0x400,(char *)0x71abca,1,0);
      }
      if (lVar32 != 0) {
        (**(code **)(*(long *)(lVar32 + 0x48) + 0x10))();
      }
      local_898 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_898 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_898 = (local_898 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      uVar10 = *(undefined4 *)(param_1 + 0x880);
      lVar15 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      FUN__text__005f2d98(lVar32,&local_898,lVar15);
      uVar17 = FUN__text__005f3244(lVar15);
      FUN__text__0012c9f0(lVar2,0x730df0,uVar17,uVar10);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      (**(code **)(*(long *)(lVar32 + 0x48) + 0x18))();
      uVar11 = FUN__text__005fe83c(uVar31,uVar23,0);
      uVar12 = FUN__text__005fe954(uVar31,uVar23,0);
      lVar15 = *(long *)(param_1 + 0x558);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      local_870 = 0x4906be4d67e9baf9;
      uVar17 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_870);
      FUN__text__003d3dac(lVar15,uVar11,1,uVar17,0,0);
      FUN__text__003c7c60(lVar34,&local_870,1);
      local_870 = 0x4906bd4d67e9b946;
      if ((uVar11 & 0xff) != (uVar12 & 0xff)) {
        uVar17 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_870);
        FUN__text__003d3dac(lVar15,uVar12,1,uVar17,0,0);
      }
      FUN__text__003c7c60(lVar34,&local_870,(uVar11 & 0xff) != (uVar12 & 0xff));
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      if (bVar6 || bVar7) {
        uVar19 = (ulong)uVar31;
        pcVar18 = (char *)0x70f93c;
      }
      else {
        pcVar18 = (char *)0x710575;
        uVar19 = 0x37c;
      }
      snprintf((char *)&local_870,0x400,pcVar18,uVar19);
      local_898 = 0xb9f259a8b60d6582;
      local_890 = 0x71c2b2;
      local_888 = 0x19;
      local_880 = 0;
      FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
      local_8a0 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_8a0 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      if (*(long *)(local_878 + 0x188) == 0) {
        uVar11 = 0;
LAB__text__00287a1c:
        (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
      }
      else {
        uVar11 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
        uVar11 = ~uVar11 >> 0x1f;
        if (local_878 != 0) goto LAB__text__00287a1c;
      }
      local_878 = 0;
      if (local_880 != 0) {
        (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
      }
      if (uVar11 == 0) {
        snprintf((char *)&local_870,0x400,(char *)0x71e620,1,0);
      }
      if (lVar29 != 0) {
        (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
      }
      local_898 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_898 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_898 = (local_898 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      uVar10 = *(undefined4 *)(param_1 + 0x880);
      lVar15 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      FUN__text__005f2d98(lVar29,&local_898,lVar15);
      uVar17 = FUN__text__005f3244(lVar15);
      FUN__text__0012c9f0(lVar2,0x730e08,uVar17,uVar10);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
      if (bVar6 || bVar7) {
        uVar19 = (ulong)uVar31;
        pcVar18 = (char *)0x717447;
      }
      else {
        pcVar18 = (char *)0x70e479;
        uVar19 = 0x37c;
      }
      snprintf((char *)&local_870,0x400,pcVar18,uVar19);
      local_898 = 0x1562fd8fa7f793a9;
      local_890 = 0x720ee5;
      local_888 = 0x19;
      local_880 = 0;
      FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
      local_8a0 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_8a0 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
      if (*(long *)(local_878 + 0x188) == 0) {
        uVar11 = 0;
LAB__text__00287a3c:
        (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
      }
      else {
        uVar11 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
        uVar11 = ~uVar11 >> 0x1f;
        if (local_878 != 0) goto LAB__text__00287a3c;
      }
      local_878 = 0;
      if (local_880 != 0) {
        (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
      }
      if (uVar11 == 0) {
        snprintf((char *)&local_870,0x400,(char *)0x70e48d,1,0);
      }
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
      }
      local_898 = 0xcbf29ce484222645;
      if ((byte)local_870 != 0) {
        local_898 = 0xcbf29ce484222645;
        pbVar22 = (byte *)((ulong)&local_870 | 1);
        bVar3 = (byte)local_870;
        do {
          local_898 = (local_898 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar3 != 0);
      }
    }
    uVar10 = *(undefined4 *)(param_1 + 0x880);
    lVar15 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar21,&local_898,lVar15);
    uVar17 = FUN__text__005f3244(lVar15);
    FUN__text__0012c9f0(lVar2,0x730e10,uVar17,uVar10);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
    if (!bVar1) goto LAB__text__00288060;
    FUN__text__003c7c60(lVar34,0x730e18,1);
    if (uVar31 < 0x225) {
      if (uVar31 < 0xc2) {
        if (uVar31 - 0x3a < 0x67) {
                    /* WARNING: Could not emulate address calculation at 0x00288038 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__00288044 +
                    (ulong)*(ushort *)((ulong)(uVar31 - 0x3a) * 2 + 0x7301fa) * 4))();
          return;
        }
      }
      else {
        if (uVar31 != 0xc2) {
          if (uVar31 == 199) {
            if (uVar23 != 1) goto LAB__text__00288618;
            lVar34 = 6;
            puVar24 = (uint *)&DAT_0073041c;
          }
          else {
            if ((uVar31 != 0x1eb) || (uVar23 != 1)) goto LAB__text__00288618;
            lVar34 = 0x1c;
            puVar24 = (uint *)&DAT_007304cc;
          }
          goto LAB__text__00288664;
        }
        if (uVar23 == 1) {
          lVar34 = 0x17;
          puVar24 = (uint *)&DAT_007304a4;
          goto LAB__text__00288664;
        }
      }
      goto LAB__text__00288618;
    }
    if (uVar31 < 0x2c1) {
      if (uVar31 - 0x225 < 0x17) {
                    /* WARNING: Could not emulate address calculation at 0x0028815c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__00288184 +
                  (ulong)*(ushort *)((ulong)(uVar31 - 0x225) * 2 + 0x7302c8) * 4))();
        return;
      }
      if (uVar31 == 0x274) {
        if (uVar23 != 1) goto LAB__text__00288618;
        lVar34 = 0x14;
        puVar24 = (uint *)&DAT_0073048c;
        goto LAB__text__00288664;
      }
      if ((uVar31 == 0x2a6) && (uVar23 == 2)) {
        lVar34 = 0x1d;
        puVar24 = (uint *)&DAT_007304d4;
        goto LAB__text__00288664;
      }
LAB__text__00288618:
      snprintf((char *)&local_870,0x400,(char *)0x71da5d,
               (ulong)*(uint *)(lVar28 + (ulong)uVar13 * 0x18 + 0x698d8));
    }
    else {
      if (uVar31 < 0x30c) {
        if (uVar31 == 0x2c1) {
          if (uVar23 != 1) goto LAB__text__00288618;
          lVar34 = 0x15;
          puVar24 = (uint *)&DAT_00730494;
        }
        else if (uVar31 == 0x2c2) {
          if (uVar23 != 1) goto LAB__text__00288618;
          lVar34 = 0x16;
          puVar24 = (uint *)&DAT_0073049c;
        }
        else {
          if ((uVar31 != 0x2d0) || (uVar23 != 1)) goto LAB__text__00288618;
          lVar34 = 4;
          puVar24 = (uint *)&DAT_0073040c;
        }
        goto LAB__text__00288664;
      }
      if (uVar31 < 0x3c4) {
        if (uVar31 == 0x30c) {
          if (uVar23 == 1) {
            lVar34 = 0x1b;
            puVar24 = (uint *)&DAT_007304c4;
            goto LAB__text__00288664;
          }
        }
        else if (uVar31 == 0x382) {
          if (uVar23 == 1) {
            lVar34 = 10;
            puVar24 = (uint *)&DAT_0073043c;
          }
          else {
            if (uVar23 != 2) goto LAB__text__00288618;
            lVar34 = 0xb;
            puVar24 = (uint *)&DAT_00730444;
          }
          goto LAB__text__00288664;
        }
        goto LAB__text__00288618;
      }
      if (uVar31 == 0x3c4) {
        if (uVar23 != 1) goto LAB__text__00288618;
        lVar34 = 0x19;
        puVar24 = (uint *)&DAT_007304b4;
      }
      else {
        if ((uVar31 != 999) || (uVar23 != 1)) goto LAB__text__00288618;
        lVar34 = 0x18;
        puVar24 = (uint *)&DAT_007304ac;
      }
LAB__text__00288664:
      snprintf((char *)&local_870,0x400,(char *)0x71745b,(ulong)*puVar24,
               (ulong)*(ushort *)(lVar34 * 8 + 0x7303f2));
    }
    local_888 = 0x17;
    local_880 = 0;
    local_898 = 0x4f4be795e6d28f41;
    local_890 = 0x71da35;
    FUN__text__00115650(&local_878,uVar30,&local_898,*(undefined4 *)(param_1 + 0x880));
    local_8a0 = 0xcbf29ce484222645;
    if ((byte)local_870 != 0) {
      local_8a0 = 0xcbf29ce484222645;
      pbVar22 = (byte *)((ulong)&local_870 | 1);
      bVar3 = (byte)local_870;
      do {
        local_8a0 = (local_8a0 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar22;
        pbVar22 = pbVar22 + 1;
      } while (bVar3 != 0);
    }
    if (*(long *)(local_878 + 0x188) == 0) {
      uVar13 = 0;
LAB__text__00288800:
      (**(code **)(*(long *)(local_878 + 0x48) + 0x18))();
    }
    else {
      uVar13 = FUN__text__005dc7a0(*(long *)(local_878 + 0x188),&local_8a0);
      uVar13 = ~uVar13 >> 0x1f;
      if (local_878 != 0) goto LAB__text__00288800;
    }
    local_878 = 0;
    if (local_880 != 0) {
      (**(code **)(*(long *)(local_880 + 0x48) + 0x18))();
    }
    if (uVar13 == 0) {
      snprintf((char *)&local_870,0x400,(char *)0x71da5d,1);
    }
    if (lVar26 != 0) {
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
    }
    if ((byte)local_870 != 0) {
      pbVar22 = (byte *)((ulong)&local_870 | 1);
      bVar3 = (byte)local_870;
      do {
        uVar16 = (uVar16 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar22;
        pbVar22 = pbVar22 + 1;
      } while (bVar3 != 0);
    }
    uVar10 = *(undefined4 *)(param_1 + 0x880);
    lVar34 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    local_898 = uVar16;
    if (lVar34 != 0) {
      (**(code **)(*(long *)(lVar34 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar26,&local_898,lVar34);
    uVar30 = FUN__text__005f3244(lVar34);
    FUN__text__0012c9f0(lVar2,0x730e18,uVar30,uVar10);
    (**(code **)(*(long *)(lVar34 + 0x48) + 0x18))((long *)(lVar34 + 0x48));
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))();
    if (lVar21 == 0) goto LAB__text__00288090;
  }
  else {
    lVar15 = *(long *)(lVar34 + 0x2e8);
    local_870 = 0x4426b6488fcb7486;
    if (lVar15 == 0) {
      FUN__text__005f2d98(lVar20,&local_870,0);
    }
    else {
      plVar25 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar25 + 0x10))(plVar25);
      FUN__text__005f2d98(lVar20,&local_870,lVar15);
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
    uVar10 = FUN__text__00601320(*(undefined8 *)(param_1 + 0x988),uVar31,
                                 *(undefined1 *)((long)*(int *)(param_1 + 0x880) + 0x7303e0));
    lVar15 = *(long *)(lVar34 + 0x2e0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__00165bc8(lVar15,0,*(undefined8 *)(param_1 + 0x988),uVar10);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    FUN__text__003c8c20(lVar34,0x730de8,*(undefined4 *)(param_1 + 0x880));
    bVar6 = iVar8 == 2;
    bVar1 = (bVar6 && iVar9 != 0) && (iVar8 != 2 || -1 < iVar9);
    if (!(!bVar6 || iVar9 < 1)) goto LAB__text__00287300;
LAB__text__002870d4:
    FUN__text__003c7c60(lVar34,0x730df0,0);
    FUN__text__003c7c60(lVar34,0x730df8,0);
    FUN__text__003c7c60(lVar34,0x730e00,0);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    uVar10 = *(undefined4 *)(param_1 + 0x880);
    local_870 = 0x62a702839530f26;
    lVar28 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar28 != 0) {
      (**(code **)(*(long *)(lVar28 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar29,&local_870,lVar28);
    uVar30 = FUN__text__005f3244(lVar28);
    FUN__text__0012c9f0(lVar2,0x730e08,uVar30,uVar10);
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x18))((long *)(lVar28 + 0x48));
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
    if (lVar21 != 0) {
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
    }
    uVar10 = *(undefined4 *)(param_1 + 0x880);
    local_870 = 0x3353839a2a0aa135;
    lVar28 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar28 != 0) {
      (**(code **)(*(long *)(lVar28 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar21,&local_870,lVar28);
    uVar30 = FUN__text__005f3244(lVar28);
    FUN__text__0012c9f0(lVar2,0x730e10,uVar30,uVar10);
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x18))((long *)(lVar28 + 0x48));
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
LAB__text__00288060:
    FUN__text__003c7c60(lVar34,0x730e18,0);
  }
  (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))();
LAB__text__00288090:
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
  }
  if (lVar32 != 0) {
    (**(code **)(*(long *)(lVar32 + 0x48) + 0x18))((long *)(lVar32 + 0x48));
  }
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar33 + 0x48) + 0x18))((long *)(lVar33 + 0x48));
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
  }
  return;
}


