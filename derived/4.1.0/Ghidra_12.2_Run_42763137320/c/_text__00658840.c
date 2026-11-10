/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00658840; name: FUN_.text__00658840
 */


/* WARNING: Removing unreachable block (ram,0x00658d08) */
/* WARNING: Removing unreachable block (ram,0x00658d28) */

ulong FUN__text__00658840(undefined8 param_1,code *param_2,byte *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  byte *local_15e0 [4];
  undefined1 auStack_15c0 [328];
  long alStack_1478 [128];
  uint local_1078 [2];
  long local_1070 [512];
  byte *local_68;
  
  local_68 = (byte *)0x0;
  memset(local_1078,0,0x1000);
  memset(alStack_1478,0,0x400);
  memset(auStack_15c0,0,0x146);
  piVar12 = (int *)*param_4;
  lVar15 = param_4[1];
  uVar13 = *(uint *)(param_4 + 3);
  bVar7 = *param_3;
  local_15e0[0] = param_3;
  if (bVar7 != 0) {
    lVar16 = 0;
    iVar2 = 0;
    plVar9 = alStack_1478;
LAB__text__006588f4:
    pbVar3 = local_15e0[0] + 1;
    while (bVar7 == 0x25) {
      if (*pbVar3 != 0x25) {
        iVar2 = iVar2 + 1;
        local_15e0[0] = pbVar3;
        lVar4 = FUN__text__00659ca8(pbVar3,local_15e0);
        lVar6 = (long)iVar2;
        if (lVar4 != 0) {
          lVar6 = lVar4;
        }
        uVar14 = 0;
        lVar4 = lVar6;
        if (lVar6 <= lVar16) {
          lVar4 = lVar16;
        }
        goto LAB__text__00658970;
      }
      bVar7 = pbVar3[1];
      pbVar3 = pbVar3 + 2;
      if (bVar7 == 0) goto LAB__text__00658d64;
    }
    local_15e0[0] = pbVar3;
    goto LAB__text__00658d5c;
  }
  goto LAB__text__00658f38;
LAB__text__00658970:
  lVar16 = lVar4;
  bVar7 = *local_15e0[0];
  uVar10 = bVar7 - 0x20;
  uVar8 = (uint)bVar7;
  if ((!(uVar10 < 0x30 && (1L << ((ulong)uVar10 & 0x3f) & 0x900003ff6c09U) != 0)) &&
     (uVar1 = bVar7 - 0x68, !(uVar1 < 0x13 && (1 << (ulong)(uVar1 & 0x1f) & 0x40211U) != 0)))
  goto LAB__text__00658b0c;
  local_15e0[0] = local_15e0[0] + 1;
  lVar4 = lVar16;
  if (0x4b < bVar7) {
    if (bVar7 < 0x6c) {
      if (uVar8 == 0x4c) {
        uVar14 = uVar14 | 0x80;
        goto LAB__text__00658970;
      }
      if (uVar8 != 0x4f) {
        if (uVar8 == 0x68) {
          uVar14 = uVar14 | 0x10;
        }
        goto LAB__text__00658970;
      }
    }
    else if (bVar7 == 0x6c) {
      if ((uVar14 >> 5 & 1) != 0) goto LAB__text__00658abc;
    }
    else {
      if (uVar8 == 0x71) {
LAB__text__00658abc:
        uVar14 = uVar14 | 0x40;
        goto LAB__text__00658970;
      }
      if (uVar8 != 0x7a) goto LAB__text__00658970;
    }
    uVar14 = uVar14 | 0x20;
    goto LAB__text__00658970;
  }
  if (uVar10 < 0x1a) {
                    /* WARNING: Could not emulate address calculation at 0x006589ac */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)((ulong)*(byte *)((ulong)uVar10 + 0x7601f8) * 4 + 0x658970))();
    return uVar5;
  }
  goto LAB__text__00658970;
LAB__text__00658b0c:
  if (lVar6 - 0x81U < 0xffffffffffffff80) {
    uVar13 = 0xffffffff;
    goto LAB__text__00659948;
  }
  lVar6 = lVar6 + -1;
  if (bVar7 < 0x58) {
    if (bVar7 != 0x45) {
      if (bVar7 == 0x47) {
        local_1078[lVar6 * 8] = 7;
        uVar14 = uVar14 | 0x81000;
        goto LAB__text__00658cec;
      }
      if (uVar8 == 0x53) {
        uVar14 = uVar14 | 8;
        local_1078[lVar6 * 8] = 1;
        goto LAB__text__00658cec;
      }
      goto LAB__text__00658bfc;
    }
    local_1078[lVar6 * 8] = 7;
    uVar10 = 0x41000;
  }
  else {
    if (uVar8 - 99 < 0x16) {
                    /* WARNING: Could not emulate address calculation at 0x00658b54 */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&UNK__text__00658b60 + (ulong)*(byte *)((ulong)(uVar8 - 99) + 0x760212) * 4
                        ))();
      return uVar5;
    }
    if (bVar7 != 0x58) {
LAB__text__00658bfc:
      local_1078[lVar6 * 8] = 0;
      goto LAB__text__00658cec;
    }
    local_1078[lVar6 * 8] = 3;
    uVar10 = 0x1a00;
  }
  uVar14 = uVar14 | uVar10;
LAB__text__00658cec:
  local_1078[lVar6 * 8 + 1] = uVar14;
  local_1070[lVar6 * 4 + 1] = 0;
  local_1070[lVar6 * 4] = 0;
  *plVar9 = (long)(local_15e0[0] + 1);
  plVar9 = plVar9 + 1;
LAB__text__00658d5c:
  bVar7 = *local_15e0[0];
  if (bVar7 == 0) goto LAB__text__00658d64;
  goto LAB__text__006588f4;
LAB__text__00658d64:
  if (0 < lVar16) {
    plVar9 = local_1070 + 2;
    do {
      uVar14 = *(uint *)((long)plVar9 + -0x14);
      piVar11 = piVar12;
      if ((uVar14 >> 0xe & 1) != 0) {
        if ((int)uVar13 < 0) {
          uVar10 = uVar13 + 8;
          if (0xfffffff8 < uVar13) goto LAB__text__00658db4;
          piVar12 = (int *)(lVar15 + (int)uVar13);
          uVar13 = uVar10;
        }
        else {
          uVar10 = uVar13;
LAB__text__00658db4:
          piVar11 = piVar12 + 2;
          uVar13 = uVar10;
        }
        local_1070[plVar9[-2] * 4 + 2] = (long)*piVar12;
      }
      piVar12 = piVar11;
      if ((uVar14 >> 0x10 & 1) != 0) {
        if ((int)uVar13 < 0) {
          uVar14 = uVar13 + 8;
          if (0xfffffff8 < uVar13) goto LAB__text__00658df8;
          piVar11 = (int *)(lVar15 + (int)uVar13);
        }
        else {
          uVar14 = uVar13;
LAB__text__00658df8:
          piVar12 = piVar11 + 2;
        }
        local_1070[plVar9[-1] * 4 + 2] = (long)*piVar11;
        uVar13 = uVar14;
      }
      if (*(uint *)(plVar9 + -3) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00658e24 */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(&UNK__text__00658e30 +
                          (ulong)*(byte *)((ulong)*(uint *)(plVar9 + -3) + 0x760228) * 4))();
        return uVar5;
      }
      plVar9 = plVar9 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
LAB__text__00658f38:
  uVar13 = 0;
  lVar15 = 0;
  plVar9 = alStack_1478;
  local_68 = param_3;
  while( true ) {
    while (bVar7 = *param_3, bVar7 == 0x25) {
      local_68 = param_3 + 1;
      if (param_3[1] == 0x25) {
        param_3 = param_3 + 2;
        local_68 = param_3;
        iVar2 = (*param_2)(0x25,param_1);
        if (iVar2 == -1) goto LAB__text__00659948;
        uVar13 = uVar13 + 1;
      }
      else {
        lVar6 = FUN__text__00659ca8(local_68,&local_68);
        lVar16 = lVar15;
        if (lVar6 != 0) {
          lVar16 = lVar6 + -1;
        }
        uVar14 = local_1078[lVar16 * 8 + 1];
        if ((uVar14 >> 0xe & 1) == 0) {
          lVar15 = lVar15 + 1;
        }
        else {
          lVar15 = lVar15 + 2;
          if (local_1070[local_1070[lVar16 * 4] * 4 + 2] < 0) {
            uVar14 = uVar14 & 0xfffffeff | 4;
            *(uint *)((ulong)(local_1078 + lVar16 * 8) | 4) = uVar14;
          }
        }
        if ((uVar14 >> 0x10 & 1) != 0) {
          lVar15 = lVar15 + 1;
        }
        uVar14 = local_1078[lVar16 * 8] - 1;
        if (uVar14 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x006590a8 */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK__text__006590b8 +
                            (ulong)*(ushort *)((ulong)uVar14 * 2 + 0x760232) * 4))();
          return uVar5;
        }
        param_3 = (byte *)*plVar9;
        plVar9 = plVar9 + 1;
        local_68 = param_3;
      }
    }
    if (bVar7 == 0) break;
    do {
      iVar2 = (*param_2)(bVar7,param_1);
      if (iVar2 == -1) goto LAB__text__00659948;
      param_3 = param_3 + 1;
      bVar7 = *param_3;
      uVar13 = uVar13 + 1;
    } while ((bVar7 != 0) && (bVar7 != 0x25));
    local_68 = param_3;
  }
LAB__text__00659948:
  return (ulong)uVar13;
}


