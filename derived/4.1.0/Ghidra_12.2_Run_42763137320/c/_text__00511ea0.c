/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00511ea0; name: FUN_.text__00511ea0
 */


void FUN__text__00511ea0(long param_1,ushort *param_2,long param_3,long param_4,undefined8 param_5,
                        undefined8 *param_6)

{
  long *plVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  lVar4 = *(long *)(param_1 + 0x10);
  pfVar3 = (float *)(lVar4 + (ulong)*param_2 * 0xc);
  fVar8 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar14 = pfVar3[2];
  pfVar3 = (float *)(lVar4 + (ulong)param_2[1] * 0xc);
  fVar12 = *pfVar3;
  fVar13 = pfVar3[1];
  fVar16 = pfVar3[2];
  pfVar3 = (float *)(lVar4 + (ulong)param_2[2] * 0xc);
  fVar19 = pfVar3[2];
  fVar18 = *pfVar3;
  fVar17 = pfVar3[1];
  local_58 = param_3;
  if (*(long *)(param_4 + 8) != 0) {
    local_4c = 1;
    fStack_34 = fVar14;
    if (fVar14 <= -3.4028235e+38) {
      fStack_34 = -3.4028235e+38;
    }
    local_38 = fVar10;
    if (fVar10 <= -3.4028235e+38) {
      local_38 = -3.4028235e+38;
    }
    uVar11 = NEON_fminnm(fVar10,0x7f7fffff);
    uVar9 = NEON_fminnm(fVar8,0x7f7fffff);
    uVar15 = NEON_fminnm(fVar14,0x7f7fffff);
    if (fStack_34 <= fVar16) {
      fStack_34 = fVar16;
    }
    if (local_38 <= fVar13) {
      local_38 = fVar13;
    }
    if (fVar8 <= fVar12) {
      fVar8 = fVar12;
    }
    uVar11 = NEON_fminnm(uVar11,fVar13);
    uVar9 = NEON_fminnm(uVar9,fVar12);
    uVar15 = NEON_fminnm(uVar15,fVar16);
    if (fStack_34 <= fVar19) {
      fStack_34 = fVar19;
    }
    fStack_3c = fVar8;
    if (fVar8 <= fVar18) {
      fStack_3c = fVar18;
    }
    uStack_44 = NEON_fminnm(uVar11,fVar17);
    local_48 = NEON_fminnm(uVar9,fVar18);
    local_40 = NEON_fminnm(uVar15,fVar19);
    if (local_38 <= fVar17) {
      local_38 = fVar17;
    }
    FUN__text__00515460(param_4,&local_48,&local_58,(long *)(param_4 + 8),&local_4c);
  }
  lVar4 = *(long *)(param_3 + 0x38);
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x20);
    if (uVar2 == 0) {
LAB__text__0051200c:
      uVar2 = *(uint *)(param_6 + 1);
      if (uVar2 != 0) {
        lVar7 = (ulong)uVar2 << 3;
        plVar1 = (long *)*param_6;
        do {
          if (*plVar1 == lVar4) {
            plVar6 = (long *)*param_6 + ((ulong)uVar2 - 1);
            if (plVar1 < plVar6) {
              *plVar1 = *plVar6;
              uVar2 = *(uint *)(param_6 + 1);
            }
            *(uint *)(param_6 + 1) = uVar2 - 1;
            break;
          }
          plVar1 = plVar1 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      FUN__text__00512080(param_5,lVar4);
      return;
    }
    lVar7 = (ulong)uVar2 << 3;
    uVar5 = (ulong)(uVar2 - 1) << 3;
    plVar1 = *(long **)(lVar4 + 0x18);
    do {
      if (*plVar1 == param_3) {
        uVar2 = uVar2 - 1;
        if (plVar1 < *(long **)(lVar4 + 0x18) + uVar2) {
          memmove(plVar1,plVar1 + 1,uVar5 & 0xfffffff8);
          uVar2 = *(int *)(lVar4 + 0x20) - 1;
        }
        *(uint *)(lVar4 + 0x20) = uVar2;
        if (uVar2 != 0) {
          return;
        }
        goto LAB__text__0051200c;
      }
      plVar1 = plVar1 + 1;
      uVar5 = uVar5 - 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return;
}


