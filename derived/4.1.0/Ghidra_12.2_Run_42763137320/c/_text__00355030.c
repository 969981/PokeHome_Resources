/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00355030; name: FUN_.text__00355030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00355030(undefined8 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long local_78;
  long local_70;
  long local_68;
  
  FUN__text__0030d5a0(&local_68);
  lVar14 = *(long *)(local_68 + 0x78);
  if ((lVar14 == 0) || ((**(code **)(*(long *)(lVar14 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  }
  FUN__text__0030d5a0(&local_68);
  lVar16 = *(long *)(local_68 + 0x80);
  if ((lVar16 == 0) || ((**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  }
  FUN__text__0030d5a0(&local_68);
  lVar18 = *(long *)(local_68 + 0x88);
  if ((lVar18 == 0) || ((**(code **)(*(long *)(lVar18 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  }
  FUN__text__0030d5a0(&local_68);
  lVar20 = *(long *)(local_68 + 0xb8);
  if ((lVar20 == 0) || ((**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  }
  FUN__text__0030d5a0(&local_68);
  lVar22 = *(long *)(local_68 + 0x98);
  if ((lVar22 == 0) || ((**(code **)(*(long *)(lVar22 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  }
  *(undefined1 *)((long)param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar9 = FUN__text__0064c260();
  local_68 = CONCAT44(local_68._4_4_,0xd);
  FUN__text__002ca07c(&local_70,uVar9,&local_68);
  FUN__text__0030c050(lVar14,local_70);
  puVar10 = (undefined8 *)FUN__text__005f3244(local_70);
  uVar9 = puVar10[1];
  uVar13 = *puVar10;
  param_1[2] = puVar10[2];
  *param_1 = uVar13;
  param_1[1] = uVar9;
  bVar1 = FUN__text__0030ae18(lVar16,0x711644f9ed6e814d);
  *(byte *)((long)param_1 + 0x34) = bVar1 & 1;
  *(byte *)((long)param_1 + 0x36) = bVar1 & 1;
  FUN__text__003110f8(lVar22);
  uVar2 = FUN__text__0016a6f8();
  *(undefined1 *)((long)param_1 + 0x49) = uVar2;
  iVar5 = FUN__text__00311c28(lVar20);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff000 | iVar5 + 0x76cU & 0xfff;
  iVar5 = FUN__text__00311c34(lVar20);
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xffff0000 |
       *(uint *)(param_1 + 5) & 0xfff | (iVar5 * 0x1000 + 0x1000U >> 0xc & 0xf) << 0xc;
  uVar6 = FUN__text__00311c40(lVar20);
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xffe00000 |
       *(uint *)(param_1 + 5) & 0xffff | (uVar6 & 0x1f) << 0x10;
  uVar6 = FUN__text__00311c4c(lVar20);
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xfc000000 |
       *(uint *)(param_1 + 5) & 0x1fffff | (uVar6 & 0x1f) << 0x15;
  iVar5 = FUN__text__00311c58(lVar20);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0x3ffffff | iVar5 << 0x1a;
  uVar3 = FUN__text__00311c10(lVar20);
  *(undefined2 *)((long)param_1 + 0x1a) = uVar3;
  uVar2 = FUN__text__00311c18(lVar20);
  *(undefined1 *)((long)param_1 + 0x1c) = uVar2;
  uVar2 = FUN__text__00311c20(lVar20);
  *(undefined1 *)((long)param_1 + 0x1d) = uVar2;
  uVar2 = FUN__text__0030c060(lVar14);
  *(undefined1 *)(param_1 + 9) = uVar2;
  uVar7 = FUN__text__0030c12c(lVar14);
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  uVar6 = FUN__text__00312cb0(lVar18);
  *(uint *)((long)param_1 + 0x24) = uVar6 & 0xffff;
  uVar7 = FUN__text__0030c134(lVar14);
  *(undefined4 *)((long)param_1 + 0x44) = uVar7;
  lVar11 = FUN__text__0030d5f0();
  *(undefined1 *)(lVar11 + 0xa3d) = 1;
  FUN__text__0030d5a0(&local_68);
  lVar11 = *(long *)(local_68 + 0xb0);
  if ((lVar11 == 0) || ((**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  }
  FUN__text__0030d5a0(&local_68);
  lVar15 = *(long *)(local_68 + 0xa8);
  if (lVar15 == 0) {
    *(undefined8 *)(lVar11 + 0x7ef98) = 0;
  }
  else {
    plVar17 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    *(long *)(lVar11 + 0x7ef98) = lVar15;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    if (local_68 == 0) {
      FUN__text__003118a0(lVar11);
      uVar4 = FUN__text__00311620(lVar11);
      goto joined_r0x0035539c;
    }
  }
  (**(code **)(*(long *)(local_68 + 0x50) + 0x18))();
  FUN__text__003118a0(lVar11);
  uVar4 = FUN__text__00311620(lVar11);
joined_r0x0035539c:
  if (uVar4 != 0) {
    uVar6 = 0;
    uVar21 = tpidr_el0;
    uVar21 = uVar21 & 0xffffffffffffe000;
    plVar17 = *(long **)(*_DAT_0089f3d8 + 0x2a8);
    do {
      FUN__text__003115d0(&local_78,lVar11,uVar6);
      if (*(long *)(uVar21 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar21 + *(long *)(uVar21 + 0x98) * 8 + 0x18) = plVar17;
      *(long *)(uVar21 + 0x98) = *(long *)(uVar21 + 0x98) + 1;
      lVar15 = (**(code **)(*plVar17 + 0x10))(plVar17,0xb0,8);
      if (lVar15 == 0) {
        (**(code **)(*plVar17 + 0xb8))(plVar17);
      }
      local_68 = local_78;
      local_78 = 0;
      FUN__text__003064a4(lVar15,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      *(long **)(lVar15 + 8) = plVar17;
      *(long *)(lVar15 + 0x10) = lVar15;
      *(undefined8 *)(lVar15 + 0x18) = 0xb0;
      *(undefined8 *)(lVar15 + 0x20) = 8;
      *(long *)(uVar21 + 0x98) = *(long *)(uVar21 + 0x98) + -1;
      plVar19 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
      uVar12 = FUN__text__00306588(lVar15);
      if (((uVar12 & 1) == 0) && (uVar12 = FUN__text__00306a08(lVar15,2), (uVar12 & 1) == 0)) {
        uVar7 = FUN__text__003065f8(lVar15);
        uVar8 = FUN__text__00306600(lVar15);
        uVar12 = FUN__text__005fe794(uVar7,uVar8,0);
        if ((uVar12 & 1) == 0) {
          *(undefined1 *)((long)param_1 + 0x3c) = 1;
          *(uint *)(param_1 + 0xd) = uVar6 / 6 + 1;
          *(uint *)((long)param_1 + 0x6c) = uVar6 % 6 + 1;
          (**(code **)(*plVar19 + 0x18))(plVar19);
          break;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19);
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
  (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  return;
}


