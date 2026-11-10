/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c6ef0; name: FUN_.text__002c6ef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c6ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  uVar16 = *_DAT_0089f510;
  FUN__text__002b1f94(&local_68,uVar16);
  FUN__text__002b2020(&local_70,uVar16);
  FUN__text__002b1fb0(&local_78,uVar16);
  *(undefined1 *)((long)param_1 + 0x37) = 1;
  FUN__text__002b2058(&local_98,uVar16);
  uVar6 = FUN__text__002c2d4c(local_98);
  *(undefined4 *)(param_1 + 6) = uVar6;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  local_98 = -0x39c474b693938610;
  uStack_90 = 0x71f3f8;
  local_88 = 0x19;
  local_80 = 0;
  bVar3 = FUN__text__002a7aa0(local_78,&local_98);
  bVar3 = (bVar3 ^ 0xff) & 1;
  *(byte *)((long)param_1 + 0x34) = bVar3;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    bVar3 = *(byte *)((long)param_1 + 0x34);
  }
  *(byte *)((long)param_1 + 0x36) = bVar3;
  uVar4 = FUN__text__002afa54(local_70);
  *(undefined1 *)((long)param_1 + 0x49) = uVar4;
  iVar7 = FUN__text__002b8924(local_68);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff000 | iVar7 + 0x76cU & 0xfff;
  iVar7 = FUN__text__002b8930(local_68);
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xffff0000 |
       *(uint *)(param_1 + 5) & 0xfff | (iVar7 * 0x1000 + 0x1000U >> 0xc & 0xf) << 0xc;
  uVar8 = FUN__text__002b893c(local_68);
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xffe00000 |
       *(uint *)(param_1 + 5) & 0xffff | (uVar8 & 0x1f) << 0x10;
  uVar8 = FUN__text__002b8948(local_68);
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xfc000000 |
       *(uint *)(param_1 + 5) & 0x1fffff | (uVar8 & 0x1f) << 0x15;
  iVar7 = FUN__text__002b8954(local_68);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0x3ffffff | iVar7 << 0x1a;
  uVar5 = FUN__text__002b890c(local_68);
  *(undefined2 *)((long)param_1 + 0x1a) = uVar5;
  uVar4 = FUN__text__002b8914(local_68);
  *(undefined1 *)((long)param_1 + 0x1c) = uVar4;
  uVar4 = FUN__text__002b891c(local_68);
  *(undefined1 *)((long)param_1 + 0x1d) = uVar4;
  uVar4 = FUN__text__002afa4c(local_70);
  *(undefined1 *)(param_1 + 9) = uVar4;
  uVar6 = FUN__text__002afb28(local_70);
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  FUN__text__002b203c(&local_98,uVar16);
  uVar6 = FUN__text__002c1030(local_98);
  *(undefined4 *)((long)param_1 + 0x24) = uVar6;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  uVar6 = FUN__text__002afb30(local_70);
  *(undefined4 *)((long)param_1 + 0x44) = uVar6;
  uVar11 = FUN__text__0064c260();
  local_a0 = 0xd;
  FUN__text__002ca07c(&local_98,uVar11,&local_a0);
  FUN__text__002afa3c(local_70,local_98);
  puVar12 = (undefined8 *)FUN__text__005f3244(local_98);
  uVar11 = puVar12[1];
  uVar1 = puVar12[2];
  *param_1 = *puVar12;
  param_1[1] = uVar11;
  param_1[2] = uVar1;
  lVar13 = FUN__text__0030d5f0();
  iVar7 = 0;
  *(undefined1 *)(lVar13 + 0xa40) = 1;
  uVar11 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  do {
    uVar8 = 0;
    bVar3 = 1;
    do {
      FUN__text__002b1fcc(&local_a8,uVar16);
      FUN__text__002bb258(&local_a0,local_a8,iVar7,uVar8,uVar11);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      }
      uVar14 = FUN__text__00631174(CONCAT44(uStack_9c,local_a0));
      if ((uVar14 & 1) == 0) {
        uVar14 = FUN__text__00633b34(CONCAT44(uStack_9c,local_a0),2);
        if ((uVar14 & 1) == 0) {
          uVar6 = FUN__text__00631008(CONCAT44(uStack_9c,local_a0));
          uVar9 = FUN__text__00631010(CONCAT44(uStack_9c,local_a0));
          uVar14 = FUN__text__005fe794(uVar6,uVar9,0);
          if ((uVar14 & 1) == 0) {
            *(undefined1 *)((long)param_1 + 0x3e) = 1;
            uVar10 = (uVar8 & 0xff) / 6;
            *(uint *)(param_1 + 0xd) = uVar10 + 1;
            *(uint *)((long)param_1 + 0x6c) = uVar8 + uVar10 * -6 + 1 & 0xff;
            FUN__text__002b1fe8(&local_a8,uVar16);
            puVar12 = (undefined8 *)FUN__text__002bde54(local_a8,iVar7);
            param_1[0xe] = *puVar12;
            uVar1 = puVar12[2];
            uVar2 = puVar12[3];
            uVar15 = puVar12[1];
            *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar12 + 4);
            param_1[0xf] = uVar15;
            param_1[0x10] = uVar1;
            param_1[0x11] = uVar2;
            if (local_a8 != 0) {
              (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
            }
            uVar10 = FUN__text__002afa54(local_70);
            bVar3 = 0;
            *(uint *)((long)param_1 + 0x94) = uVar10 & 0xff;
            iVar17 = 5;
            lVar13 = CONCAT44(uStack_9c,local_a0);
          }
          else {
            iVar17 = 0;
            bVar3 = 1;
            lVar13 = CONCAT44(uStack_9c,local_a0);
          }
        }
        else {
          iVar17 = 7;
          lVar13 = CONCAT44(uStack_9c,local_a0);
        }
      }
      else {
        iVar17 = 0;
        lVar13 = CONCAT44(uStack_9c,local_a0);
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
      }
    } while (((iVar17 == 7) || (iVar17 == 0)) && (uVar8 = uVar8 + 1, uVar8 != 0x1e));
    iVar7 = iVar7 + 1;
  } while ((bool)(bVar3 & iVar7 != 0x20));
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


