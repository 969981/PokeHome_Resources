/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00554cd0; name: FUN_.text__00554cd0
 */


undefined8
FUN__text__00554cd0(long *param_1,long *param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  *(uint *)(param_1 + 1) = param_3;
  pfVar2 = (float *)(**(code **)(*param_2 + 0x10))(param_2,(ulong)(param_3 >> 1) << 2,0x7203da,0x1e)
  ;
  *param_1 = (long)pfVar2;
  if (pfVar2 == (float *)0x0) {
    return 0x34;
  }
  if (param_4 == 1) {
    uVar1 = *(uint *)(param_1 + 1);
    dVar11 = 0.0;
    uVar3 = uVar1 >> 1;
    dVar10 = 3.141592653589793;
    if ((param_6 & 1) == 0) {
      dVar10 = 0.0;
    }
    dVar12 = 6.283185307179586 / ((double)uVar1 + -1.0);
    if ((param_5 & 1) == 0) {
      if (1 < uVar1) {
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        uVar6 = (ulong)uVar3;
        do {
          dVar8 = cos(dVar10);
          dVar10 = dVar10 + dVar12;
          uVar6 = uVar6 - 1;
          dVar8 = dVar8 * -0.46 + 0.54;
          dVar11 = dVar11 + dVar8 * dVar8;
          *pfVar2 = (float)dVar8;
          pfVar2 = pfVar2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (1 < uVar1) {
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar6 = (ulong)uVar3;
      do {
        dVar8 = cos(dVar10);
        dVar10 = dVar10 + dVar12;
        uVar6 = uVar6 - 1;
        dVar8 = dVar8 * -0.46 + 0.54;
        dVar11 = dVar8 + dVar11;
        *pfVar2 = (float)SQRT(dVar8);
        pfVar2 = pfVar2 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (param_4 == 2) {
    uVar1 = *(uint *)(param_1 + 1);
    dVar11 = 0.0;
    uVar3 = uVar1 >> 1;
    dVar10 = 3.141592653589793;
    if ((param_6 & 1) == 0) {
      dVar10 = 0.0;
    }
    dVar12 = 6.283185307179586 / ((double)uVar1 + -1.0);
    if ((param_5 & 1) == 0) {
      if (1 < uVar1) {
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        uVar6 = (ulong)uVar3;
        do {
          dVar8 = cos(dVar10);
          dVar8 = 0.5 - dVar8 * 0.5;
          dVar10 = dVar10 + dVar12;
          uVar6 = uVar6 - 1;
          dVar11 = dVar11 + dVar8 * dVar8;
          *pfVar2 = (float)dVar8;
          pfVar2 = pfVar2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (1 < uVar1) {
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar6 = (ulong)uVar3;
      do {
        dVar8 = cos(dVar10);
        dVar8 = 0.5 - dVar8 * 0.5;
        dVar10 = dVar10 + dVar12;
        uVar6 = uVar6 - 1;
        dVar11 = dVar8 + dVar11;
        *pfVar2 = (float)SQRT(dVar8);
        pfVar2 = pfVar2 + 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if (param_4 != 3) {
      uVar3 = *(uint *)(param_1 + 1);
      if (1 < uVar3) {
        uVar6 = (ulong)(uVar3 >> 1) & 3;
        if ((ulong)(uVar3 >> 1) - 1 < 3) {
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          pfVar5 = pfVar2 + 2;
          do {
            lVar4 = lVar4 + -4;
            pfVar5[-2] = 1.0;
            pfVar5[-1] = 1.0;
            pfVar5[0] = 1.0;
            pfVar5[1] = 1.0;
            pfVar5 = pfVar5 + 4;
          } while (-lVar4 != ((ulong)(uVar3 >> 1) & 0x7ffffffc));
          lVar4 = -lVar4;
        }
        if ((uVar3 >> 1 & 3) != 0) {
          pfVar2 = pfVar2 + lVar4;
          do {
            uVar6 = uVar6 - 1;
            *pfVar2 = 1.0;
            pfVar2 = pfVar2 + 1;
          } while (uVar6 != 0);
        }
        uVar3 = *(uint *)(param_1 + 1);
      }
      fVar7 = (float)uVar3;
      goto LAB__text__005550f4;
    }
    uVar1 = *(uint *)(param_1 + 1);
    dVar11 = 0.0;
    uVar3 = uVar1 >> 1;
    dVar10 = 3.141592653589793;
    if ((param_6 & 1) == 0) {
      dVar10 = 0.0;
    }
    dVar12 = 6.283185307179586 / ((double)uVar1 + -1.0);
    if ((param_5 & 1) == 0) {
      if (1 < uVar1) {
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        uVar6 = (ulong)uVar3;
        do {
          dVar8 = cos(dVar10);
          dVar9 = cos(dVar10 + dVar10);
          dVar10 = dVar10 + dVar12;
          uVar6 = uVar6 - 1;
          dVar8 = dVar8 * -0.5 + 0.42 + dVar9 * 0.08;
          dVar11 = dVar11 + dVar8 * dVar8;
          *pfVar2 = (float)dVar8;
          pfVar2 = pfVar2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (1 < uVar1) {
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar6 = (ulong)uVar3;
      do {
        dVar8 = cos(dVar10);
        dVar9 = cos(dVar10 + dVar10);
        dVar10 = dVar10 + dVar12;
        uVar6 = uVar6 - 1;
        dVar8 = dVar8 * -0.5 + 0.42 + dVar9 * 0.08;
        dVar11 = dVar8 + dVar11;
        *pfVar2 = (float)SQRT(dVar8);
        pfVar2 = pfVar2 + 1;
      } while (uVar6 != 0);
    }
  }
  fVar7 = (float)dVar11 + (float)dVar11;
LAB__text__005550f4:
  *(float *)((long)param_1 + 0xc) = fVar7;
  return 1;
}


