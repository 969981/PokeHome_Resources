/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00291ef4; name: FUN_.text__00291ef4
 */


void FUN__text__00291ef4(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 local_88 [8];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar13 = *(long *)(param_1 + 0x2d0);
  *(undefined1 *)(param_1 + 0x87c) = 1;
  lVar9 = *(long *)(param_1 + 0x640);
  *(uint *)(param_1 + 0x878) = param_2;
  if (lVar13 != 0) {
    plVar10 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  puVar1 = (undefined4 *)(lVar9 + (ulong)param_2 * 0x18 + 0x698d8);
  local_88 = (undefined1  [8])0xa7649e0ad180b01a;
  local_80 = 0x71a942;
  local_78 = 0x1b;
  local_70 = 0;
  FUN__text__00115650(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),local_88,0xb);
  lVar9 = *(long *)(local_68 + 0x60);
  if ((lVar9 == 0) || ((**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  iVar6 = FUN__text__0028f1c0(param_1,*puVar1);
  lVar11 = *(long *)(lVar13 + 0x2e8);
  if (lVar11 == 0) {
    FUN__text__005f2d98(lVar9,0x731e00,0);
    lVar11 = *(long *)(lVar13 + 0x2e0);
  }
  else {
    plVar10 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN__text__005f2d98(lVar9,0x731e00,lVar11);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar11 = *(long *)(lVar13 + 0x2e0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar12 = param_1 + 0x110;
  FUN__text__00166508(lVar11,0,*puVar1,4,2,1);
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  FUN__text__003c8c20(lVar13,0x731e08,0xb);
  if (iVar6 == 0) {
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_88 = (undefined1  [8])0x4415b8488fbd04b9;
    lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar9,local_88,lVar13);
    uVar8 = FUN__text__005f3244(lVar13);
    FUN__text__0012c9f0(lVar12,0x731e10,uVar8,0xb);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    if (lVar9 == 0) goto LAB__text__0029220c;
  }
  else {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    uVar2 = *puVar1;
    lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar13 == 0) {
      FUN__text__005f2d98(lVar9,0x731e18,0);
      lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e0);
    }
    else {
      plVar10 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN__text__005f2d98(lVar9,0x731e18,lVar13);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e0);
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN__text__00165904(lVar13,0,uVar2);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x2d0),0x731e10,0xb);
  }
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
LAB__text__0029220c:
  lVar13 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730fe0);
  lVar11 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730fe8);
  if (iVar6 == 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_88 = (undefined1  [8])0x4415b8488fbd04b9;
    lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar9,local_88,lVar13);
    uVar8 = FUN__text__005f3244(lVar13);
    FUN__text__0012c9f0(lVar12,0x731e20,uVar8,0xb);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  else {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
    puVar7 = (ushort *)FUN__text__0027a570(*(undefined8 *)(param_1 + 0x640),puVar1);
    uVar5 = local_80 >> 0x28;
    local_70 = CONCAT44(local_70._4_4_,0xffffffff);
    local_80._0_5_ = CONCAT14((char)puVar7[2] != '\0',(uint)*(byte *)((long)puVar7 + 3));
    uVar5 = CONCAT35((int3)uVar5,(undefined5)local_80);
    local_80 = uVar5 & 0xffff00ffffffffff;
    local_78 = (ulong)(*(char *)((long)puVar7 + 5) != '\0') << 0x21;
    local_88[4] = (char)puVar7[1];
    local_88._0_4_ = CONCAT22(0,*puVar7);
    local_88[5] = 0;
    if (*(byte *)((long)puVar7 + 3) == 3) {
      local_80 = uVar5 & 0xffff00ff00000000;
    }
    if (CONCAT22(0,*puVar7) == 0x365) {
      uVar4 = (uint)(byte)puVar7[1] * 0x25 >> 8;
      local_88._4_2_ = (short)(uVar4 + (((byte)puVar7[1] - uVar4 & 0xfe) >> 1) >> 2);
      local_88._0_4_ = 0x365;
      bVar3 = (byte)puVar7[1];
      uVar4 = (uint)bVar3 * 0x25 >> 8;
      local_70 = CONCAT44(local_70._4_4_,
                          (uint)bVar3 + (uVar4 + ((bVar3 - uVar4 & 0xfe) >> 1) >> 2) * -7) &
                 0xffffffff000000ff;
    }
    FUN__text__003d2848(param_1 + 0x890,local_88,0);
    FUN__text__003d2848(param_1 + 0xef0,local_88,0);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    uVar2 = *puVar1;
    lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar13 == 0) {
      FUN__text__005f2d98(lVar9,0x731e28,0);
      lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e0);
    }
    else {
      plVar10 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN__text__005f2d98(lVar9,0x731e28,lVar13);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e0);
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN__text__00165904(lVar13,0,uVar2);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x2d0),0x731e20,0xb);
  }
  plVar10 = (long *)(lVar9 + 0x48);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  FUN__text__0012c8d0((float)(param_2 & 7),lVar12,0x71b858);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  return;
}


