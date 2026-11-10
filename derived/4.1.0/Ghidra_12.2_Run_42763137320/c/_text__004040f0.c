/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004040f0; name: thunk_FUN_.text__004036d0
 */


ulong * thunk_FUN__text__004036d0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uStack_68;
  
  iVar5 = (int)param_1;
  if (param_3 < 0x11) {
    if (0x400 < param_4) {
      uVar9 = param_4;
      if (param_4 <= *(ulong *)(&DAT_00ae8e58 + (long)iVar5 * 0x638)) {
LAB__text__00403b58:
        puVar8 = (ulong *)FUN__text__00404da0(param_1,param_2,uVar9);
        return puVar8;
      }
      if (param_4 <= (&DAT_00ae8a40)[(long)iVar5 * 199] * 0x20 - 0x80U) {
LAB__text__00403bf4:
        puVar8 = (ulong *)FUN__text__00404df0(param_1,param_2,uVar9);
        return puVar8;
      }
LAB__text__00403b30:
      puVar8 = (ulong *)FUN__text__00404f90();
      return puVar8;
    }
    puVar7 = (ulong *)(param_2 + (param_4 + 0xf >> 4) * 0x18 + 8);
    puVar8 = (ulong *)*puVar7;
joined_r0x0040371c:
    if (puVar8 == (ulong *)0x0) {
      puVar8 = (ulong *)FUN__text__00405120(param_1,param_2);
      return puVar8;
    }
    *puVar7 = *puVar8;
  }
  else {
    if ((param_3 < 0x81) && (param_4 + 0x80 < *(ulong *)(&DAT_00ae8e58 + (long)iVar5 * 0x638))) {
      uVar9 = 0x80;
      if (param_4 != 0) {
        uVar9 = param_4 + 0x7f & 0xffffffffffffff80;
      }
      if (uVar9 <= param_4 + param_3) {
        if (0x400 < uVar9) {
          if (uVar9 <= *(ulong *)(&DAT_00ae8e58 + (long)iVar5 * 0x638)) goto LAB__text__00403b58;
          if (uVar9 <= (&DAT_00ae8a40)[(long)iVar5 * 199] * 0x20 - 0x80U) goto LAB__text__00403bf4;
          goto LAB__text__00403b30;
        }
        puVar7 = (ulong *)(param_2 + (uVar9 >> 4) * 0x18 + 8);
        puVar8 = (ulong *)*puVar7;
        goto joined_r0x0040371c;
      }
    }
    uVar16 = param_3 - 1;
    uVar9 = *(ulong *)(&DAT_00ae8a28 + (long)iVar5 * 0x638);
    if (uVar9 < param_3) {
      if ((param_3 & uVar16) == 0) {
        puVar8 = &DAT_00ae8a40 + (long)iVar5 * 199;
        if (param_3 < *puVar8) {
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar17 = param_4 / uVar9;
          }
          lVar2 = 1;
          if ((uVar9 - 1 & param_4) != 0) {
            lVar2 = 2;
          }
          uVar17 = uVar17 + lVar2;
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = param_3 / uVar9;
          }
          if (uVar17 < uVar10) {
            uVar17 = uVar10 + 1;
          }
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = *puVar8 / uVar9;
          }
          uVar9 = uVar10 * 2;
          if (uVar10 * 2 <= uVar17 * 2) {
            uVar9 = uVar17 * 2;
          }
          lVar2 = (long)iVar5 * 0x638;
LAB__text__00403890:
          uStack_68 = 0;
          uVar15 = *(ulong *)(&DAT_00ae8a28 + (long)iVar5 * 0x638) * uVar17;
          uVar10 = *puVar8;
          uVar11 = 0;
          if (uVar10 <= uVar15) {
            if (uVar10 <= *(ulong *)(&DAT_00ae8a38 + lVar2)) {
              uVar10 = 0;
            }
            uVar11 = uVar10;
          }
          while( true ) {
            uVar13 = DAT_00ae89d0;
            uVar10 = DAT_00ae89d0 + uVar11 + uVar15;
            if (!(DAT_00ae89c8 == 0 || uVar10 <= DAT_00ae89c8)) break;
            while (DAT_00ae89d0 == uVar13) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
              if (bVar4) {
                cVar3 = ExclusiveMonitorsStatus();
                DAT_00ae89d0 = uVar10;
              }
              if (cVar3 == '\0') {
                uVar10 = (**(code **)(&DAT_00ae89e0 + lVar2))(uVar11 + uVar15,&uStack_68);
                uVar13 = 0;
                if ((uVar11 != 0) && (uVar10 != 0)) {
                  uVar11 = uVar11 - (uVar10 & (*(ulong *)(&DAT_00ae8a50 + lVar2) ^
                                              0xffffffffffffffff));
                  uVar10 = uVar10 + uVar11;
                  uVar13 = uVar11 >> 3;
                }
                if (uVar10 == 0) goto LAB__text__00403a9c;
                puVar7 = (ulong *)(uVar10 + 0x80);
                if ((uVar16 & (ulong)puVar7) != 0) {
                  puVar7 = (ulong *)(((ulong)puVar7 & -param_3) + param_3);
                }
                uVar11 = *puVar8;
                if ((((long)puVar7 - uVar10 < uVar11) && ((long)puVar7 + param_4 <= uVar10 + uVar15)
                    ) && ((*(ulong *)(&DAT_00ae8a50 + lVar2) & (ulong)puVar7) == uVar10)) {
                  *(int *)(uVar10 + 0x3c) = (int)uVar13;
                  *(undefined4 *)(uVar10 + 0xc) = 0xffffffff;
                  *(int *)(uVar10 + 0x2c) = (int)uVar17;
                  *(long *)(uVar10 + 0x40) = param_2;
                  *(undefined8 *)(uVar10 + 0x58) = uStack_68;
                  uVar14 = 0;
                  if (*(long *)(param_2 + 0x3110) != 0) {
                    *(ulong *)(*(long *)(param_2 + 0x3110) + 0x50) = uVar10;
                    uVar14 = *(undefined8 *)(param_2 + 0x3110);
                  }
                  *(undefined8 *)(uVar10 + 0x48) = uVar14;
                  *(ulong *)(param_2 + 0x3110) = uVar10;
                  *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
                  return puVar7;
                }
                lVar12 = (long)-(uVar13 << 0x23) >> 0x20;
                if (uVar15 == 0 || uVar13 == 0) {
                  lVar12 = 0;
                  uVar11 = 0;
                }
                lVar1 = uVar11 + uVar15;
                (**(code **)(&DAT_00ae89e8 + lVar2))(uVar10 + lVar12,uVar15,uStack_68,lVar1);
                if (lVar1 == 0) goto LAB__text__00403880;
                goto LAB__text__004039e4;
              }
            }
            ClearExclusiveLocal();
          }
LAB__text__00403a9c:
          piVar6 = __errno_location();
          iVar5 = 0xc;
          goto LAB__text__00403a70;
        }
      }
LAB__text__00403a68:
      piVar6 = __errno_location();
      iVar5 = 0x16;
LAB__text__00403a70:
      puVar8 = (ulong *)0x0;
      *piVar6 = iVar5;
    }
    else {
      param_4 = param_4 + param_3;
      if (param_4 < 0x401) {
        puVar7 = (ulong *)(param_2 + (param_4 + 0xf >> 4) * 0x18 + 8);
        puVar8 = (ulong *)*puVar7;
        if (puVar8 == (ulong *)0x0) {
          puVar8 = (ulong *)FUN__text__00405120(param_1,param_2);
        }
        else {
          *puVar7 = *puVar8;
        }
      }
      else if (*(ulong *)(&DAT_00ae8e58 + (long)iVar5 * 0x638) < param_4) {
        if ((&DAT_00ae8a40)[(long)iVar5 * 199] * 0x20 - 0x80U < param_4) {
          puVar8 = (ulong *)FUN__text__00404f90();
        }
        else {
          puVar8 = (ulong *)FUN__text__00404df0(param_1,param_2);
        }
      }
      else {
        puVar8 = (ulong *)FUN__text__00404da0(param_1,param_2);
      }
      if ((uVar16 & (ulong)puVar8) != 0) {
        puVar8 = (ulong *)(((ulong)puVar8 & -param_3) + param_3);
        *(uint *)((*(ulong *)(&DAT_00ae8a50 + (long)iVar5 * 0x638) & (ulong)puVar8) + 0x28) =
             *(uint *)((*(ulong *)(&DAT_00ae8a50 + (long)iVar5 * 0x638) & (ulong)puVar8) + 0x28) | 4
        ;
      }
    }
  }
  return puVar8;
LAB__text__004039e4:
  uVar10 = DAT_00ae89d0;
  uVar11 = DAT_00ae89d0 - lVar1;
  while (DAT_00ae89d0 == uVar10) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_00ae89d0 = uVar11;
    }
    if (cVar3 == '\0') goto LAB__text__00403880;
  }
  ClearExclusiveLocal();
  goto LAB__text__004039e4;
LAB__text__00403880:
  uVar17 = uVar17 + 1;
  if (uVar9 < uVar17) goto LAB__text__00403a68;
  goto LAB__text__00403890;
}


