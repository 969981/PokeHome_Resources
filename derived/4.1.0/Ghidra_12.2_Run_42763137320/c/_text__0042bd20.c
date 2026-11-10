/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042bd20; name: FUN_.text__0042bd20
 */


void FUN__text__0042bd20(float param_1,long param_2,int param_3,int param_4,uint param_5,
                        char param_6)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float local_44;
  
  plVar3 = *(long **)(param_2 + 0x50);
  if (plVar3 == (long *)0x0) {
    return;
  }
  local_44 = param_1;
  if (param_6 == '\x01') {
    lVar5 = *plVar3;
    pfVar4 = &local_44;
    goto LAB__text__0042bf00;
  }
  fVar12 = 1.0;
  piVar6 = *(int **)(param_2 + 0x60);
  uVar10 = (ulong)*(uint *)(param_2 + 0x68);
  local_48 = 1.0;
  if (param_6 != '\x03') {
    local_48 = 0.0;
  }
  uVar9 = 0;
  piVar8 = piVar6;
  if (*(uint *)(param_2 + 0x68) == 0) {
LAB__text__0042be84:
    uVar2 = *(uint *)(param_2 + 0x6c);
    if (uVar2 <= uVar9) {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar10 = FUN__text__0042cd80((undefined8 *)(param_2 + 0x60),iVar1);
      if (((uVar10 & 1) == 0) || (*(uint *)(param_2 + 0x6c) <= uVar9)) goto LAB__text__0042bef4;
      uVar9 = *(uint *)(param_2 + 0x68);
      piVar8 = *(int **)(param_2 + 0x60);
    }
    *(uint *)(param_2 + 0x68) = uVar9 + 1;
    if (piVar8 != (int *)0x0) {
      piVar8 = piVar8 + (ulong)uVar9 * 4;
      *piVar8 = param_3;
      piVar8[1] = param_4;
      *(short *)(piVar8 + 2) = (short)param_5;
      piVar8[3] = (int)param_1;
      fVar12 = local_48 + local_44;
      local_48 = local_48 * local_44;
      if (param_6 != '\x03') {
        local_48 = fVar12;
      }
    }
  }
  else {
    piVar7 = piVar6 + uVar10 * 4;
    fVar11 = local_48;
    if (param_6 == '\x04') {
      do {
        if (*(ushort *)(piVar6 + 2) == param_5) {
          if ((*piVar6 == param_3) && (piVar6[1] == param_4)) {
            piVar6[3] = (int)param_1;
            piVar7 = piVar6;
          }
          if (*piVar6 != 0) {
            local_48 = fVar11 + (float)piVar6[3];
            fVar11 = local_48;
          }
        }
        piVar8 = *(int **)(param_2 + 0x60);
        piVar6 = piVar6 + 4;
        uVar9 = *(uint *)(param_2 + 0x68);
      } while (piVar6 != piVar8 + (ulong)uVar9 * 4);
    }
    else if (param_6 == '\x03') {
      do {
        if (*(ushort *)(piVar6 + 2) == param_5) {
          if ((*piVar6 == param_3) && (piVar6[1] == param_4)) {
            piVar6[3] = (int)param_1;
            piVar8 = *(int **)(param_2 + 0x60);
            uVar10 = (ulong)*(uint *)(param_2 + 0x68);
            piVar7 = piVar6;
            local_48 = param_1;
          }
          else {
            local_48 = (float)piVar6[3];
          }
          local_48 = fVar12 * local_48;
          fVar12 = local_48;
        }
        uVar9 = (uint)uVar10;
        piVar6 = piVar6 + 4;
      } while (piVar6 != piVar8 + uVar10 * 4);
    }
    else {
      fVar12 = 0.0;
      do {
        if (*(ushort *)(piVar6 + 2) == param_5) {
          if ((*piVar6 == param_3) && (piVar6[1] == param_4)) {
            piVar6[3] = (int)param_1;
            piVar8 = *(int **)(param_2 + 0x60);
            uVar10 = (ulong)*(uint *)(param_2 + 0x68);
            piVar7 = piVar6;
            local_48 = param_1;
          }
          else {
            local_48 = (float)piVar6[3];
          }
          local_48 = fVar12 + local_48;
          fVar12 = local_48;
        }
        uVar9 = (uint)uVar10;
        piVar6 = piVar6 + 4;
      } while (piVar6 != piVar8 + uVar10 * 4);
    }
    if (piVar7 == piVar6) goto LAB__text__0042be84;
  }
LAB__text__0042bef4:
  plVar3 = *(long **)(param_2 + 0x50);
  pfVar4 = &local_48;
  lVar5 = *plVar3;
LAB__text__0042bf00:
  (**(code **)(lVar5 + 0x10))(plVar3,param_5,pfVar4,4);
  return;
}


