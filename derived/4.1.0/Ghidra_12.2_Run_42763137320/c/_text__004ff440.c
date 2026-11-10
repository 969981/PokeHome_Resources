/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ff440; name: FUN_.text__004ff440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004ff440(long *param_1,long param_2,undefined4 param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  short sVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  char cVar14;
  long lVar15;
  char local_54 [4];
  int local_38;
  uint uStack_34;
  
  if ((param_5 != 0) && (*(int *)(param_5 + 0x10) != 0)) {
    FUN__text__004ff750(param_1,param_5 + 8);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  plVar13 = (long *)(param_2 + 0x138);
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  puVar5 = _DAT_008a45d8;
  *(undefined1 *)(param_1 + 6) = 1;
  do {
    uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if ((uVar9 & 1) != 0) {
      lVar11 = plVar13[4];
      *(int *)(param_1 + 5) = (int)lVar11;
      *(bool *)(param_1 + 6) = (int)lVar11 != 0;
      *(int *)((long)param_1 + 0x2c) = (int)plVar13[2];
      sVar10 = *(short *)((long)plVar13 + 0x14);
      if (sVar10 == 0) {
        sVar10 = 0;
      }
      else if (*(short *)((long)plVar13 + 0x16) != 0 || (short)plVar13[3] != 0) {
        iVar8 = (int)*(short *)((long)plVar13 + 0x16) + (int)sVar10;
        iVar3 = (int)(short)iVar8;
        iVar4 = (int)(short)((short)plVar13[3] + sVar10);
        if (iVar8 < 1) {
          iVar3 = 1;
        }
        if (iVar3 != iVar4) {
          iVar8 = (iVar4 - iVar3) + 1;
          lVar11 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar11;
          sVar10 = 0;
          uVar9 = (ulong)lVar11 >> 0x21;
          if (iVar8 != 0) {
            sVar10 = (short)((int)(uint)uVar9 / iVar8);
          }
          sVar10 = ((short)uVar9 - sVar10 * (short)iVar8) + (short)iVar3;
        }
      }
      *(short *)((long)param_1 + 0x32) = sVar10;
      return 1;
    }
    if (((int)plVar13[5] == 0) || (*(char *)((long)plVar13 + 0x36) == '\0')) {
      plVar13 = (long *)plVar13[1];
      if (plVar13 == (long *)0x0) {
        return 2;
      }
    }
    else {
      iVar8 = FUN__text__004ff89c(param_1,plVar13);
      if (iVar8 != 1) {
        FUN__text__004ffa40(param_1);
        return 2;
      }
    }
    cVar14 = '\0';
    local_54[0] = '\0';
    do {
      lVar11 = param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18;
      lVar15 = *(long *)(lVar11 + -0x18);
      if (*(uint *)(lVar15 + 0x30) < 2) {
        lVar12 = *(long *)(lVar11 + -8);
        if (lVar12 == 0) {
LAB__text__004ff5a8:
          cVar14 = '\x01';
          local_54[0] = '\x01';
        }
        else {
          if (*(short *)(lVar12 + 10) + 1 == *(int *)(lVar15 + 0x28)) {
            *(undefined2 *)(lVar12 + 10) = 0;
            if ((*(byte *)(lVar11 + -0xe) & 1) == 0) goto LAB__text__004ff5a8;
            if ((*(byte *)(lVar11 + -0xe) >> 1 & 1) == 0) {
              sVar10 = *(short *)(lVar11 + -0x10) + -1;
              *(short *)(lVar11 + -0x10) = sVar10;
              if (sVar10 == 0) goto LAB__text__004ff5a8;
              uVar7 = *(ushort *)(lVar12 + 10);
            }
            else {
              uVar7 = 0;
            }
          }
          else {
            uVar7 = *(short *)(lVar12 + 10) + 1;
            *(ushort *)(lVar12 + 10) = uVar7;
          }
LAB__text__004ff5f4:
          uVar2 = *(uint *)(lVar15 + 0x28);
          local_38 = 0;
          uStack_34 = (uint)uVar7;
          FUN__text__0048d5c0(*puVar5,(int)param_1[1],*(undefined4 *)(lVar15 + 0x10),uVar2,
                              &uStack_34,&local_38);
          local_54[0] = local_38 != 0;
          if (local_38 == 0) {
            uVar1 = uStack_34;
            if (uVar2 <= uStack_34) {
              uVar1 = (uint)uVar7;
            }
            plVar6 = *(long **)(plVar13[4] + (ulong)(uVar1 & 0xffff) * 8);
            break;
          }
          cVar14 = '\x01';
        }
      }
      else {
        if (*(uint *)(lVar15 + 0x30) - 2 < 2) {
          uVar7 = FUN__text__00500870(param_1,(long *)(lVar11 + -0x18),local_54);
          cVar14 = local_54[0];
        }
        else {
          uVar7 = 0;
        }
        if (cVar14 == '\0') goto LAB__text__004ff5f4;
      }
      lVar15 = param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18;
      lVar11 = plVar13[1];
      if ((*(long **)(lVar15 + -8) != (long *)0x0) &&
         ((*(uint *)(*(long *)(lVar15 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(**(long **)(lVar15 + -8) + 0x10))();
      }
      *(undefined8 *)(lVar15 + -8) = 0;
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      plVar6 = (long *)0x0;
    } while (lVar11 != 0);
    plVar13 = plVar6;
    if (plVar13 == (long *)0x0) {
      return 2;
    }
  } while( true );
}


