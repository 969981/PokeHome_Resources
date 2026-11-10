/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fc3c0; name: FUN_.text__001fc3c0
 */


void FUN__text__001fc3c0(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 local_485c;
  undefined2 local_4854;
  uint local_4850;
  undefined1 local_484c [4];
  undefined8 local_4848 [2300];
  undefined1 auStack_68 [8];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar16 != (undefined8 *)0x0)) {
    plVar12 = (long *)(**(code **)*puVar16)(puVar16);
    plVar13 = (long *)FUN__text__0018d6a0();
    if (plVar13 != plVar12) {
      do {
        plVar12 = (long *)*plVar12;
      } while (plVar12 != plVar13 && plVar12 != (long *)0x0);
      if (plVar12 == (long *)0x0) goto LAB__text__001fc7ac;
    }
    lVar18 = puVar16[4];
    if ((lVar18 != 0) && (lVar17 = puVar16[0x48], lVar17 != 0)) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
      uVar6 = FUN__text__001933c8(lVar18);
      lVar18 = 0x398;
      local_4850 = 0;
      local_484c[0] = 0;
      local_485c = 0;
      local_4854 = 0;
      puVar16 = local_4848;
      do {
        *(undefined4 *)((long)puVar16 + 0xc) = 0;
        lVar18 = lVar18 + -2;
        *(undefined1 *)(puVar16 + 2) = 0;
        *puVar16 = 0;
        *(undefined2 *)(puVar16 + 1) = 0;
        *(undefined4 *)(puVar16 + 4) = 0;
        *(undefined1 *)((long)puVar16 + 0x24) = 0;
        *(undefined8 *)((long)puVar16 + 0x14) = 0;
        *(undefined2 *)((long)puVar16 + 0x1c) = 0;
        puVar16 = puVar16 + 5;
      } while (lVar18 != 0);
      puVar1 = (uint *)(param_1 + 0x2c2d4);
      if (*(int *)(param_1 + 0x2c2d4) != 0) {
        uVar19 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x2b470 + uVar19 * 4);
          *(int *)(local_484c + uVar19 * 0x14 + -0x10) = iVar2;
          uVar14 = FUN__text__00646fa0(iVar2);
          if ((uVar14 & 1) == 0) {
            bVar3 = FUN__text__0064af00(iVar2);
          }
          else {
            bVar3 = 1;
          }
          local_484c[uVar19 * 0x14 + -0xc] = bVar3 & 1;
          uVar15 = FUN__text__00306bc4(lVar17);
          iVar7 = FUN__text__00632ec8(uVar15,0);
          if (iVar7 == iVar2) {
LAB__text__001fc5c4:
            local_484c[uVar19 * 0x14 + -0xb] = 1;
            FUN__text__00306bc4(lVar17);
            iVar7 = FUN__text__00635278();
            if (iVar7 != iVar2) goto LAB__text__001fc5b4;
LAB__text__001fc5e4:
            local_484c[uVar19 * 0x14 + -10] = 1;
            cVar4 = FUN__text__00643de0();
          }
          else {
            uVar15 = FUN__text__00306bc4(lVar17);
            iVar7 = FUN__text__00632ec8(uVar15,1);
            if (iVar7 == iVar2) goto LAB__text__001fc5c4;
            uVar15 = FUN__text__00306bc4(lVar17);
            iVar7 = FUN__text__00632ec8(uVar15,2);
            if (iVar7 == iVar2) goto LAB__text__001fc5c4;
            uVar15 = FUN__text__00306bc4(lVar17);
            iVar7 = FUN__text__00632ec8(uVar15,3);
            if (iVar7 == iVar2) goto LAB__text__001fc5c4;
            FUN__text__00306bc4(lVar17);
            iVar7 = FUN__text__00635278();
            if (iVar7 == iVar2) goto LAB__text__001fc5e4;
LAB__text__001fc5b4:
            cVar4 = FUN__text__00643de0();
          }
          if (cVar4 != '\0') {
            uVar11 = 0;
            do {
              iVar7 = FUN__text__00643de8(uVar11);
              if (iVar7 == iVar2) {
                local_484c[uVar19 * 0x14 + -9] = 1;
                break;
              }
              uVar11 = uVar11 + 1;
              uVar8 = FUN__text__00643de0();
            } while (uVar11 < (uVar8 & 0xff));
          }
          uVar9 = FUN__text__003065f8(lVar17);
          uVar10 = FUN__text__00306600(lVar17);
          uVar5 = FUN__text__005ffc50(uVar9,uVar10,uVar6);
          if (uVar5 != 0) {
            uVar11 = 0;
            do {
              uVar9 = FUN__text__003065f8(lVar17);
              uVar10 = FUN__text__00306600(lVar17);
              iVar7 = FUN__text__00600044(uVar9,uVar10,uVar11,uVar6);
              if (iVar7 == iVar2) {
                uVar9 = FUN__text__003065f8(lVar17);
                uVar10 = FUN__text__00306600(lVar17);
                uVar11 = FUN__text__005ffce8(uVar9,uVar10,uVar11,uVar6);
                uVar11 = uVar11 & 0xffff;
                if (uVar11 == 0x65) {
                  local_484c[uVar19 * 0x14 + -7] = 1;
                }
                else if (uVar11 == 0) {
                  local_484c[uVar19 * 0x14 + -8] = 1;
                }
                else if (uVar11 - 2 < 99) {
                  *(uint *)(local_484c + uVar19 * 0x14 + -4) = uVar11;
                }
                else if (uVar11 == 1) {
                  local_484c[uVar19 * 0x14] = 1;
                }
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar5 != uVar11);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < *puVar1);
      }
      FUN__text__00201ac0(&local_485c,auStack_68,0x12,1);
      if (*puVar1 != 0) {
        uVar19 = 0;
        puVar16 = &local_485c;
        do {
          *(undefined4 *)(param_1 + 0x2b470 + uVar19 * 4) = *(undefined4 *)puVar16;
          uVar19 = uVar19 + 1;
          puVar16 = (undefined8 *)((long)puVar16 + 0x14);
        } while (uVar19 < *puVar1);
      }
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      return;
    }
  }
LAB__text__001fc7ac:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


