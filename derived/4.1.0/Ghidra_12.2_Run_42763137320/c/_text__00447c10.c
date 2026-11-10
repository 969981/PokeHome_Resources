/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447c10; name: FUN_.text__00447c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00447c10(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  float fVar16;
  
  uVar7 = *(uint *)(param_1 + 0x38);
  uVar14 = (uint)param_2;
  if (uVar7 == 0) {
LAB__text__00447c70:
    puVar15 = (undefined8 *)FUN__text__00400f80(4,0x78);
    if (puVar15 == (undefined8 *)0x0) {
      return 2;
    }
    FUN__text__00447174(puVar15,param_2);
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    *puVar15 = 0x888868;
    uVar7 = *(uint *)(param_1 + 0x38);
    if ((uVar7 == 0) ||
       (fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40)), 0.9 < fVar16 / (float)uVar7)) {
      FUN__text__00449ad0(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x38);
      if (uVar7 == 0) {
LAB__text__00447e40:
        FUN__text__0044a450(puVar15);
        FUN__text__00400fc0(4,puVar15);
        return 2;
      }
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar14 / uVar7;
    }
    uVar13 = (ulong)(uVar14 - uVar2 * uVar7);
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + uVar13 * 8);
    do {
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        puVar6 = (undefined8 *)FUN__text__00400f80(0,0x18);
        if (puVar6 == (undefined8 *)0x0) goto LAB__text__00447e40;
        lVar11 = uVar13 * 8;
        *puVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar11);
        puVar6[1] = param_2;
        *(undefined8 **)(*(long *)(param_1 + 0x30) + lVar11) = puVar6;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        puVar6[2] = puVar15;
        goto joined_r0x00447d44;
      }
    } while (plVar10[1] != param_2);
    plVar10[2] = (long)puVar15;
  }
  else {
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar14 / uVar7;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + (ulong)(uVar14 - uVar2 * uVar7) * 8);
    do {
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB__text__00447c70;
    } while (plVar10[1] != param_2);
    puVar15 = (undefined8 *)plVar10[2];
  }
joined_r0x00447d44:
  if (puVar15 != (undefined8 *)0x0) {
    if (puVar15[1] == 0) {
      plVar10 = (long *)FUN__text__00400f80(4,0x80);
      if (plVar10 == (long *)0x0) {
        bVar3 = false;
        bVar9 = true;
      }
      else {
        FUN__text__0044ad10();
        puVar15[1] = plVar10;
        plVar10[1] = (long)puVar15;
        iVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar15[0xb]);
        puVar6 = _DAT_008a4af0;
        if (iVar5 == 1) {
          *(undefined4 *)(_DAT_008a4af0 + 1) = 0x3f800000;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[3] = 0;
          *puVar6 = 0;
          *(undefined8 *)((long)puVar6 + 0xc) = 0x3f80000000000000;
          bVar3 = true;
          *(undefined4 *)((long)puVar6 + 0x14) = 0;
          *(undefined4 *)(puVar6 + 6) = 0x3ff3f;
          FUN__text__0044af20(plVar10,puVar6,1,0);
          bVar9 = false;
        }
        else {
          (**(code **)*plVar10)(plVar10);
          FUN__text__00400fc0(4,plVar10);
          bVar3 = false;
          puVar15[1] = 0;
          bVar9 = true;
        }
      }
    }
    else {
      bVar9 = false;
      bVar3 = true;
    }
    lVar11 = DAT_00ae96a0;
    if (DAT_00ae96a0 == 0) {
      if (!bVar9) {
        return 1;
      }
    }
    else {
      do {
        uVar7 = *(uint *)(lVar11 + 0xd8);
        if (uVar7 != 0) {
          iVar5 = 0;
          do {
            iVar1 = iVar5 + (uVar7 >> 1);
            uVar13 = *(ulong *)(*(long *)(lVar11 + 0xd0) + (long)iVar1 * 8);
            if (uVar13 == param_2) {
              plVar10 = (long *)puVar15[4];
              if ((plVar10 == (long *)0x0) &&
                 (plVar10 = (long *)FUN__text__00400f80(4,0xa0), plVar10 != (long *)0x0)) {
                FUN__text__0047d448(plVar10);
                puVar15[4] = plVar10;
                plVar10[1] = (long)puVar15;
                iVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar15[0xb]);
                if (iVar5 != 1) {
                  (**(code **)*plVar10)(plVar10);
                  FUN__text__00400fc0(4,plVar10);
                  plVar10 = (long *)0x0;
                  puVar15[4] = 0;
                }
              }
              if (plVar10 != (long *)0x0) {
                bVar3 = true;
              }
              break;
            }
            if (uVar13 < param_2) {
              iVar5 = iVar1 + 1;
            }
            uVar2 = uVar7 - (uVar13 < param_2);
            uVar7 = uVar2 >> 1;
          } while (1 < uVar2);
        }
        plVar10 = (long *)(lVar11 + 0x10);
        lVar11 = *plVar10;
      } while (*plVar10 != 0);
      if (bVar3) {
        return 1;
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB__text__00447efc;
    }
    FUN__text__0044a450(puVar15);
    FUN__text__00400fc0(4,puVar15);
  }
LAB__text__00447efc:
  uVar7 = *(uint *)(param_1 + 0x38);
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar14 / uVar7;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + (ulong)(uVar14 - uVar2 * uVar7) * 8);
    plVar8 = plVar10;
    plVar4 = (long *)0x0;
    do {
      plVar12 = plVar4;
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return 2;
      }
      plVar4 = plVar8;
    } while (plVar8[1] != param_2);
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12;
    }
    *plVar10 = *plVar8;
    FUN__text__00400fc0(0);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  return 2;
}


