/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00500320; name: FUN_.text__00500320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00500320(long *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  char local_54 [4];
  long *local_50;
  ulong local_48;
  
  if ((int)param_1[4] != 0) {
    plVar11 = (long *)param_1[3];
    do {
      if (((long *)plVar11[2] != (long *)0x0) && ((*(uint *)(*plVar11 + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(*(long *)plVar11[2] + 0x10))();
      }
      plVar11[2] = 0;
      plVar11 = plVar11 + 3;
    } while (plVar11 != (long *)(param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((int)param_1[8] != 0) {
    lVar12 = param_1[7];
    do {
      (**(code **)(**(long **)(lVar12 + 8) + 0x10))();
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != param_1[7] + (ulong)*(uint *)(param_1 + 8) * 0x18);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    FUN__text__004ff750(param_1,param_3 + 8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  local_54[0] = '\0';
  local_50 = (long *)0x0;
  local_48 = 0;
  iVar4 = FUN__text__00500650(param_1,*param_1 + 0x138,param_2,&local_50,local_54);
  plVar11 = local_50;
  uVar5 = 2;
  if ((iVar4 == 1) && (local_54[0] != '\0')) {
    uVar13 = local_48 & 0xffffffff;
    if ((int)local_48 != 0) {
      plVar10 = (long *)*local_50;
      uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
      if ((uVar6 & 1) == 0) {
        plVar14 = plVar11;
        do {
          iVar4 = FUN__text__004ff89c(param_1,plVar10);
          if (iVar4 != 1) {
            FUN__text__004ffa40(param_1);
            uVar5 = 2;
            plVar11 = local_50;
            goto joined_r0x00500638;
          }
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar11 + uVar13) {
            uVar5 = FUN__text__005000a0(param_1);
            goto LAB__text__00500600;
          }
          lVar12 = *(long *)(*plVar14 + 8);
          if (*(uint *)(lVar12 + 0x30) < 2) {
            uVar1 = *(uint *)(lVar12 + 0x28);
            if (uVar1 == 0) {
              uVar7 = 0;
              lVar12 = *(long *)(param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18 + -8);
            }
            else {
              plVar10 = *(long **)(lVar12 + 0x20);
              uVar9 = 0;
              lVar12 = (ulong)uVar1 << 3;
              do {
                if (*plVar10 == *plVar14) goto LAB__text__005005b4;
                uVar9 = uVar9 + 1;
                plVar10 = plVar10 + 1;
                lVar12 = lVar12 + -8;
              } while (lVar12 != 0);
              uVar9 = uVar1;
LAB__text__005005b4:
              uVar7 = (undefined2)uVar9;
              lVar12 = *(long *)(param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18 + -8);
            }
            if (lVar12 != 0) {
              *(undefined2 *)(lVar12 + 10) = uVar7;
            }
          }
          else if (*(uint *)(lVar12 + 0x30) - 2 < 2) {
            FUN__text__00500ad0(param_1);
          }
          plVar10 = (long *)*plVar14;
          uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
        } while ((uVar6 & 1) == 0);
      }
      lVar12 = plVar10[4];
      *(int *)(param_1 + 5) = (int)lVar12;
      *(bool *)(param_1 + 6) = (int)lVar12 != 0;
      *(int *)((long)param_1 + 0x2c) = (int)plVar10[2];
      sVar8 = *(short *)((long)plVar10 + 0x14);
      if (sVar8 == 0) {
        sVar8 = 0;
      }
      else if (*(short *)((long)plVar10 + 0x16) != 0 || (short)plVar10[3] != 0) {
        iVar4 = (int)*(short *)((long)plVar10 + 0x16) + (int)sVar8;
        iVar2 = (int)(short)iVar4;
        iVar3 = (int)(short)((short)plVar10[3] + sVar8);
        if (iVar4 < 1) {
          iVar2 = 1;
        }
        if (iVar2 != iVar3) {
          iVar4 = (iVar3 - iVar2) + 1;
          lVar12 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar12;
          sVar8 = 0;
          uVar13 = (ulong)lVar12 >> 0x21;
          if (iVar4 != 0) {
            sVar8 = (short)((int)(uint)uVar13 / iVar4);
          }
          sVar8 = ((short)uVar13 - sVar8 * (short)iVar4) + (short)iVar2;
        }
      }
      uVar5 = 1;
      *(short *)((long)param_1 + 0x32) = sVar8;
      plVar11 = local_50;
    }
  }
joined_r0x00500638:
  local_50 = plVar11;
  if (plVar11 != (long *)0x0) {
LAB__text__00500600:
    FUN__text__00400fc0(0,plVar11);
  }
  return uVar5;
}


