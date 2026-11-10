/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e7310; name: FUN_.text__004e7310
 */


void FUN__text__004e7310(long param_1,undefined8 *param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar13 = *param_3;
  plVar9 = *(long **)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x18);
  plVar15 = plVar9;
  if (uVar4 == 0) {
LAB__text__004e73a8:
    if ((plVar15 != plVar9 + (ulong)uVar4 * 6) && (*(long *)(param_1 + 8) != 0)) {
      lVar13 = *(long *)(param_1 + 8);
      do {
        lVar12 = *(long *)(lVar13 + 8);
        if ((((*(byte *)(lVar13 + 0x194) >> 1 & 1) != 0) && (lVar10 = *param_3, lVar13 != lVar10))
           && ((*(long *)(lVar10 + 0x40) == *(long *)(lVar13 + 0x40) &&
               *(long *)(lVar10 + 0x10) == *(long *)(lVar13 + 0x10)) &&
               *(int *)(lVar10 + 0x2c) == *(int *)(lVar13 + 0x2c))) {
          FUN__text__004470f0(lVar13);
          plVar9 = (long *)param_2[1];
          if (plVar9 != (long *)0x0) {
            plVar16 = (long *)0x0;
            do {
              while( true ) {
                plVar14 = plVar9;
                plVar9 = (long *)plVar14[4];
                if (*plVar14 == lVar13) break;
                plVar16 = plVar14;
                if (plVar9 == (long *)0x0) goto LAB__text__004e748c;
              }
              plVar3 = param_2 + 1;
              if ((long *)param_2[1] != plVar14) {
                plVar3 = plVar16 + 4;
              }
              *plVar3 = (long)plVar9;
              if ((long *)*param_2 == plVar14) {
                *param_2 = plVar16;
              }
              FUN__text__00447104(*plVar14);
              FUN__text__00400fc0(0,plVar14);
            } while (plVar9 != (long *)0x0);
          }
LAB__text__004e748c:
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x1b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x2b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x3b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x4b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x5b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x6b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x7b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x8b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x9b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xab0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xbb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xcb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xdb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xeb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xfb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          plVar9 = (long *)plVar15[4];
          *(undefined2 *)(plVar15 + 5) = 0;
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if ((((plVar9[3] == lVar13) && (*(char *)(plVar9 + 5) == -0x70)) &&
                (*(char *)((long)plVar9 + 0x2d) != '\0')) && ((*(byte *)(plVar9 + 7) >> 2 & 1) == 0)
               ) {
              uVar5 = (ulong)local_68 >> 0x20;
              local_68 = (undefined8 *)CONCAT44((int)uVar5,*(undefined4 *)(plVar9 + 6));
              local_70 = CONCAT71((int7)((ulong)plVar9[5] >> 8),0x80);
              FUN__text__004c20f0(param_1,lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),1,1
                                 );
            }
          }
          FUN__text__00447104(lVar13);
        }
        lVar13 = lVar12;
      } while (lVar12 != 0);
      lVar13 = *param_3;
    }
  }
  else {
    lVar12 = (ulong)uVar4 * 0x30;
    do {
      if (((*(long *)(lVar13 + 0x40) == *plVar15) && (*(long *)(lVar13 + 0x10) == plVar15[1])) &&
         (*(int *)(lVar13 + 0x2c) == (int)plVar15[2])) goto LAB__text__004e73a8;
      plVar15 = plVar15 + 6;
      lVar12 = lVar12 + -0x30;
    } while (lVar12 != 0);
  }
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  FUN__text__004e61f0(lVar13,&local_70,*(undefined4 *)((long)param_3 + 0x14),
                      *(uint *)(param_3 + 3) & 0x3fffffff);
  do {
    puVar8 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      return;
    }
    puVar11 = (undefined8 *)local_68[4];
    if (puVar11 == (undefined8 *)0x0) {
      local_70 = 0;
      local_68[4] = 0;
      if ((char)param_3[1] == -0x50) goto LAB__text__004e7824;
LAB__text__004e77b0:
      puVar1 = (undefined4 *)((long)local_68 + 0x14);
      puVar2 = local_68 + 1;
      local_68 = puVar11;
      FUN__text__004c20f0(param_1,lVar13,puVar2,*puVar1,0,1);
      puVar11 = local_68;
    }
    else {
      local_68[4] = 0;
      if ((char)param_3[1] != -0x50) goto LAB__text__004e77b0;
LAB__text__004e7824:
      if (((*(char *)((long)param_3 + 9) != *(char *)((long)local_68 + 9)) ||
          (*(char *)(local_68 + 1) != -0x50)) ||
         (*(char *)((long)param_3 + 0xc) != *(char *)((long)local_68 + 0xc)))
      goto LAB__text__004e77b0;
    }
    local_68 = puVar11;
    FUN__text__00447104(*puVar8);
    FUN__text__00400fc0(0,puVar8);
  } while( true );
}


