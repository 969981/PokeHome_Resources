/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a53e0; name: FUN_.text__002a53e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a53e0(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long local_80;
  ushort local_78;
  byte local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  undefined8 local_70;
  long local_68;
  
  lVar14 = *(long *)(*_DAT_0089f5b0 + 0x60);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(lVar14 + 0xc0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar14 + 200);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar17 = *(long *)(lVar14 + 0xe0);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  lVar19 = *(long *)(lVar14 + 0xd8);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  uVar7 = FUN__text__002a3f04(lVar19);
  *(undefined4 *)(param_1 + 6) = uVar7;
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  *(undefined1 *)((long)param_1 + 0x37) = 1;
  uVar9 = FUN__text__0064c260();
  local_70 = CONCAT44(local_70._4_4_,0xd);
  FUN__text__002ca07c(&local_68,uVar9,&local_70);
  FUN__text__0029dd28(lVar15,local_68);
  puVar10 = (undefined8 *)FUN__text__005f3244(local_68);
  uVar9 = *puVar10;
  uVar12 = puVar10[2];
  param_1[1] = puVar10[1];
  param_1[2] = uVar12;
  *param_1 = uVar9;
  bVar4 = *(int *)(lVar16 + 0x3104) != 0;
  *(bool *)((long)param_1 + 0x34) = bVar4;
  *(bool *)((long)param_1 + 0x36) = bVar4;
  uVar5 = FUN__text__0029dd44(lVar15);
  *(undefined1 *)((long)param_1 + 0x49) = uVar5;
  local_70 = FUN__text__002a3fb8(lVar17);
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,(PosixTime *)&local_70);
  *(uint *)(param_1 + 5) =
       local_78 & 0xfff | (local_76 & 0xf) << 0xc | (local_75 & 0x1f) << 0x10 |
       (local_74 & 0x1f) << 0x15 | (uint)local_73 << 0x1a;
  uVar6 = FUN__text__0029de30(lVar15);
  *(undefined2 *)((long)param_1 + 0x1a) = uVar6;
  uVar5 = FUN__text__0029de38(lVar15);
  *(undefined1 *)((long)param_1 + 0x1c) = uVar5;
  uVar5 = FUN__text__0029de40(lVar15);
  *(undefined1 *)((long)param_1 + 0x1d) = uVar5;
  uVar5 = FUN__text__0029dd38(lVar15);
  *(undefined1 *)(param_1 + 9) = uVar5;
  uVar7 = FUN__text__0029dd54(lVar15);
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  uVar7 = FUN__text__002a22a0(lVar16);
  *(undefined4 *)((long)param_1 + 0x24) = uVar7;
  uVar7 = FUN__text__0029dd5c(lVar15);
  *(undefined4 *)((long)param_1 + 0x44) = uVar7;
  lVar19 = FUN__text__0030d5f0();
  *(undefined1 *)(lVar19 + 0xa3f) = 1;
  iVar18 = 0;
  uVar9 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  do {
    uVar20 = 0;
    bVar1 = 1;
    do {
      lVar19 = *(long *)(lVar14 + 0xb8);
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      }
      FUN__text__002a31d4(&local_80,lVar19,iVar18,uVar20,uVar9);
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
      uVar11 = FUN__text__00306588(local_80);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN__text__00306a08(local_80,2);
        if ((uVar11 & 1) == 0) {
          uVar7 = FUN__text__003065f8(local_80);
          uVar8 = FUN__text__00306600(local_80);
          uVar11 = FUN__text__005fe794(uVar7,uVar8,0);
          if ((uVar11 & 1) == 0) {
            *(undefined1 *)((long)param_1 + 0x3d) = 1;
            uVar3 = (uVar20 & 0xff) / 6;
            *(uint *)(param_1 + 0xd) = uVar3 + 1;
            *(uint *)((long)param_1 + 0x6c) = uVar20 + uVar3 * -6 + 1 & 0xff;
            lVar19 = *(long *)(lVar14 + 0xb0);
            if (lVar19 != 0) {
              (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
            }
            puVar10 = (undefined8 *)FUN__text__002a2c00(lVar19,iVar18);
            param_1[0xe] = *puVar10;
            uVar12 = puVar10[2];
            uVar2 = puVar10[3];
            uVar13 = puVar10[1];
            *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar10 + 4);
            param_1[0x10] = uVar12;
            param_1[0x11] = uVar2;
            param_1[0xf] = uVar13;
            (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
            uVar12 = FUN__text__0029dd4c(lVar15);
            uVar7 = FUN__text__0016ad94(uVar12,0);
            bVar1 = 0;
            iVar21 = 5;
            *(undefined4 *)((long)param_1 + 0x94) = uVar7;
          }
          else {
            iVar21 = 0;
            bVar1 = 1;
          }
        }
        else {
          iVar21 = 7;
        }
      }
      else {
        iVar21 = 0;
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      }
    } while (((iVar21 == 7) || (iVar21 == 0)) && (uVar20 = uVar20 + 1, uVar20 != 0x1e));
    iVar18 = iVar18 + 1;
  } while ((bool)(bVar1 & iVar18 != 0x28));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return;
}


