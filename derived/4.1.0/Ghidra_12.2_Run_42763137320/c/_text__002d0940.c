/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d0940; name: FUN_.text__002d0940
 */


void FUN__text__002d0940(long param_1,short *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long local_170;
  short *local_168;
  uint *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  short local_e8;
  ushort local_e6;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined1 local_d8;
  uint local_d4;
  uint local_d0;
  ushort local_cc;
  byte local_ca;
  byte local_c9;
  uint local_c8;
  byte local_c4;
  byte local_c3;
  byte local_34 [4];
  
  if (DAT_008e52a8 == 0) {
    return;
  }
  plVar2 = *(long **)(DAT_008e5278 + 0x1e8);
  plVar3 = *(long **)(DAT_008e5278 + 0x1f0);
  while( true ) {
    if (plVar2 == plVar3) {
      return;
    }
    lVar15 = *plVar2;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))();
    plVar9 = (long *)FUN__text__002d29c4();
    if (plVar9 == plVar8) break;
    do {
      plVar8 = (long *)*plVar8;
    } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
    if (plVar8 != (long *)0x0) {
      if (lVar15 == 0) {
        return;
      }
      break;
    }
    plVar2 = plVar2 + 1;
  }
  uVar10 = FUN__text__002d4ec4(&local_d4,lVar15,*param_2);
  local_e8 = *param_2;
  local_e4 = *(undefined4 *)(param_2 + 2);
  local_df = 0;
  local_e6 = param_2[1];
  local_e0 = (undefined1)param_2[4];
  local_dc = *(undefined4 *)(param_2 + 8);
  uVar6 = 1 << (ulong)(local_e6 & 0x1f);
  local_d8 = *(undefined1 *)((long)param_2 + 0xb);
  FUN__text__002d0ee0(uVar10,&local_e8);
  FUN__text__002d4ec4(&local_170,lVar15,*param_2);
  memcpy(&local_d4,&local_170,0x82);
  if (local_d4 == 0) {
    local_ca = local_ca | (byte)(1 << (ulong)(*(uint *)(param_2 + 8) & 0x1f));
  }
  local_d4 = local_d4 | uVar6;
  local_d0 = local_d0 | uVar6;
  uVar11 = FUN__text__005fdad0(*param_2);
  uVar10 = FUN__text__002d1084(uVar11,&local_d4,uVar11 & 0xffffffff,param_2[1],1);
  FUN__text__002d1084(uVar10,&local_d4,uVar11 & 0xffffffff,param_2[1],0);
  local_c9 = local_c9 | (byte)(1 << (ulong)(*(uint *)(param_2 + 2) & 0x1f));
  local_cc = local_cc | (ushort)(1 << (ulong)(*(uint *)(param_2 + 6) & 0x1f));
  FUN__text__002f0b90();
  cVar5 = FUN__text__002c7584();
  if ((byte)(cVar5 - 1U) < 0xb) {
    uVar17 = (uint)*(ushort *)((long)(char)(cVar5 - 1U) * 2 + 0x7338c0);
  }
  else {
    uVar17 = 10;
  }
  local_cc = local_cc | (ushort)(1 << (ulong)(uVar17 & 0x1f));
  if ((char)param_2[4] != '\0') {
    local_c8 = local_c8 | uVar6;
    FUN__text__002d1380(param_1,&local_d4,uVar11 & 0xffffffff,param_2[1],1);
  }
  if (*(char *)((long)param_2 + 9) != '\0') {
    local_c3 = local_c3 | 1;
  }
  uVar6 = (uint)uVar11 & 0xffff;
  uVar12 = FUN__text__006006a0(uVar6,param_2[1]);
  if ((uVar12 & 1) != 0) goto LAB__text__002d0b70;
  if ((uVar6 != 0x3d2) && (uVar6 != 0x321)) {
    local_34[0] = 0;
    local_170 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = (short *)0x0;
    local_160 = (uint *)0x0;
    uVar11 = FUN__text__005ffbe4(&local_170,local_34,uVar6,7);
    uVar17 = (uint)local_34[0];
    if (uVar17 != 0) {
      uVar16 = 0;
      do {
        uVar11 = FUN__text__006006a0(uVar6,uVar16);
        if ((uVar11 & 1) != 0) {
          if ((uVar16 & 0xffff) != 0) {
            sVar4 = *param_2;
            uVar11 = FUN__text__002d45f0(*(undefined8 *)(param_1 + 0x90),sVar4,uVar16);
            if ((uVar11 & 1) != 0) goto LAB__text__002d0cb4;
            uVar11 = FUN__text__002f0f30();
            if (uVar11 != 0) {
              if (*(int **)(param_1 + 0x50) != *(int **)(param_1 + 0x58)) {
                piVar14 = *(int **)(param_1 + 0x50) + 1;
                goto LAB__text__002d0de4;
              }
            }
          }
          break;
        }
        uVar16 = uVar16 + 1;
      } while (uVar17 != uVar16);
    }
    goto LAB__text__002d0e10;
  }
  uVar6 = (uint)uVar11 & 0xffff;
  local_160 = &local_d4;
  local_170 = param_1;
  local_168 = param_2;
  if (uVar6 != 0x321) {
    if (uVar6 == 0x3d2) {
      sVar4 = param_2[1];
      if (sVar4 == 2) {
        FUN__text__002d1640(&local_170,5,2);
      }
      else if (sVar4 == 1) {
        FUN__text__002d1640(&local_170,4,1);
      }
      else if (sVar4 == 0) {
        FUN__text__002d1640(&local_170,3,0);
      }
    }
    goto LAB__text__002d0b70;
  }
  if (param_2[1] != 1) {
    if (param_2[1] == 0) {
      sVar4 = *param_2;
      uVar11 = FUN__text__002d45f0(*(undefined8 *)(param_1 + 0x90),sVar4,2);
      if ((uVar11 & 1) == 0) {
        lVar13 = FUN__text__002f0f30();
        if (lVar13 != 0) {
          if (*(int **)(param_1 + 0x50) != *(int **)(param_1 + 0x58)) {
            piVar14 = *(int **)(param_1 + 0x50) + 1;
            do {
              if ((short)piVar14[-1] == sVar4 && *(short *)((long)piVar14 + -2) == 2) {
                if ((*piVar14 != 0) && (iVar7 = FUN__text__002d5ea0(), iVar7 != 0))
                goto LAB__text__002d0c78;
                break;
              }
              piVar1 = piVar14 + 1;
              piVar14 = piVar14 + 2;
            } while (piVar1 != *(int **)(param_1 + 0x58));
          }
        }
      }
      else {
LAB__text__002d0c78:
        local_d0 = local_d0 | 4;
        local_d4 = local_d4 | 4;
        local_c4 = local_c4 | 1;
      }
    }
    goto LAB__text__002d0b70;
  }
  sVar4 = *param_2;
  uVar11 = FUN__text__002d45f0(*(undefined8 *)(param_1 + 0x90),sVar4,3);
  if ((uVar11 & 1) == 0) {
    lVar13 = FUN__text__002f0f30();
    if (lVar13 != 0) {
      if (*(int **)(param_1 + 0x50) != *(int **)(param_1 + 0x58)) {
        piVar14 = *(int **)(param_1 + 0x50) + 1;
        do {
          if ((short)piVar14[-1] == sVar4 && *(short *)((long)piVar14 + -2) == 3) {
            if ((*piVar14 != 0) && (iVar7 = FUN__text__002d5ea0(), iVar7 != 0))
            goto LAB__text__002d0cf4;
            break;
          }
          piVar1 = piVar14 + 1;
          piVar14 = piVar14 + 2;
        } while (piVar1 != *(int **)(param_1 + 0x58));
      }
    }
    goto LAB__text__002d0b70;
  }
LAB__text__002d0cf4:
  local_d0 = local_d0 | 8;
  local_d4 = local_d4 | 8;
  goto LAB__text__002d0e50;
  while (piVar1 = piVar14 + 1, piVar14 = piVar14 + 2, piVar1 != *(int **)(param_1 + 0x58)) {
LAB__text__002d0de4:
    if (((short)piVar14[-1] == sVar4) &&
       ((uint)*(ushort *)((long)piVar14 + -2) == (uVar16 & 0xffff))) {
      if ((*piVar14 != 0) && (uVar11 = FUN__text__002d5ea0(), (int)uVar11 != 0)) {
LAB__text__002d0cb4:
        uVar6 = 1 << (ulong)(uVar16 & 0x1f);
        local_d0 = local_d0 | uVar6;
        local_d4 = local_d4 | uVar6;
        local_c4 = local_c4 | 1;
      }
      break;
    }
  }
LAB__text__002d0e10:
  uVar6 = FUN__text__002d1740(uVar11,*param_2);
  if ((uVar6 & 0xffff) == 0) goto LAB__text__002d0b70;
  sVar4 = *param_2;
  uVar11 = FUN__text__002d45f0(*(undefined8 *)(param_1 + 0x90),sVar4,uVar6 & 0xffff);
  if ((uVar11 & 1) == 0) {
    lVar13 = FUN__text__002f0f30();
    if (lVar13 != 0) {
      if (*(int **)(param_1 + 0x50) != *(int **)(param_1 + 0x58)) {
        piVar14 = *(int **)(param_1 + 0x50) + 1;
        do {
          if ((short)piVar14[-1] == sVar4 &&
              (uint)*(ushort *)((long)piVar14 + -2) == (uVar6 & 0xffff)) {
            if ((*piVar14 != 0) && (iVar7 = FUN__text__002d5ea0(), iVar7 != 0))
            goto LAB__text__002d0e38;
            break;
          }
          piVar1 = piVar14 + 1;
          piVar14 = piVar14 + 2;
        } while (piVar1 != *(int **)(param_1 + 0x58));
      }
    }
    goto LAB__text__002d0b70;
  }
LAB__text__002d0e38:
  uVar6 = 1 << (ulong)(uVar6 & 0x1f);
  local_d0 = local_d0 | uVar6;
  local_d4 = local_d4 | uVar6;
LAB__text__002d0e50:
  local_c4 = local_c4 | 2;
LAB__text__002d0b70:
  FUN__text__002d4e94(lVar15,*param_2,&local_d4);
  return;
}


