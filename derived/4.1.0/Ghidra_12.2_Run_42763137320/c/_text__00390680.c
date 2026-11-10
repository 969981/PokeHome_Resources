/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00390680; name: FUN_.text__00390680
 */


/* WARNING: Removing unreachable block (ram,0x00390410) */

ulong FUN__text__00390680(ulong param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint *puVar20;
  long *plVar21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined2 local_70;
  ushort local_6e;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  
  uVar5 = param_1;
  if ((param_4 & 0xffff) < 0x402) {
    uVar5 = FUN__text__0038e5b0(param_1,param_3,param_4);
    uVar17 = (uint)uVar5 & 0xffff;
    puVar20 = (uint *)(param_1 + 0x9c);
    uVar8 = uVar17 - 1;
    uVar3 = 1;
    if (param_2 != 0) {
      uVar8 = uVar17 + 1;
    }
    do {
      uVar5 = FUN__text__0038e5b0(uVar5,param_3,uVar3);
      if ((((uVar8 == ((uint)uVar5 & 0xffff)) &&
           (uVar5 = FUN__text__0039054c(uVar5,param_3,uVar3), (uVar5 & 1) == 0)) &&
          (uVar5 = FUN__text__0038fe10(param_1,param_3,0,uVar3), (uVar5 & 1) == 0)) &&
         (uVar5 = FUN__text__0038fe10(param_1,param_3,1,uVar3), (uVar5 & 1) == 0)) {
        local_60 = 0;
        uStack_5c = 0;
        if (param_3 == 0) {
          puVar12 = &DAT_00737e74;
          lVar9 = 0;
          puVar13 = (uint *)&DAT_00737e74;
          goto LAB__text__003907c8;
        }
        if (param_3 == 1) {
          puVar12 = &DAT_00739134;
          lVar9 = 0;
          puVar13 = (uint *)&DAT_00739134;
          goto LAB__text__00390804;
        }
        if (param_3 == 2) {
          puVar12 = &DAT_00739a94;
          lVar9 = 0;
          puVar13 = (uint *)&DAT_00739a94;
          goto LAB__text__0039078c;
        }
        uVar18 = 0;
        uVar17 = 0;
        goto LAB__text__00390894;
      }
      uVar3 = uVar3 + 1;
      puVar20 = puVar20 + 8;
    } while (uVar3 != 0x402);
  }
  return uVar5;
  while( true ) {
    if (puVar13[3] == uVar3) goto LAB__text__00390844;
    lVar9 = lVar9 + 2;
    puVar13 = puVar13 + 6;
    if (lVar9 == 400) break;
LAB__text__003907c8:
    if (*puVar13 == uVar3) goto LAB__text__00390848;
  }
  goto LAB__text__0039082c;
  while( true ) {
    if (puVar13[3] == uVar3) goto LAB__text__00390844;
    lVar9 = lVar9 + 2;
    puVar13 = puVar13 + 6;
    if (lVar9 == 200) break;
LAB__text__00390804:
    if (*puVar13 == uVar3) goto LAB__text__00390848;
  }
  goto LAB__text__0039082c;
LAB__text__00390844:
  lVar9 = lVar9 + 1;
LAB__text__00390848:
  uVar17 = (uint)((ulong)*(undefined8 *)(puVar12 + lVar9 * 0xc + 4) >> 0x20);
  uStack_5c = (uint)*(undefined8 *)(puVar12 + lVar9 * 0xc + 4);
  local_60 = uVar3;
  uStack_58 = uVar17;
  goto LAB__text__00390860;
  while( true ) {
    if (puVar13[3] == uVar3) goto LAB__text__00390844;
    lVar9 = lVar9 + 2;
    puVar13 = puVar13 + 6;
    if (lVar9 == 0xf0) break;
LAB__text__0039078c:
    if (*puVar13 == uVar3) goto LAB__text__00390848;
  }
LAB__text__0039082c:
  uVar17 = 0;
LAB__text__00390860:
  uVar18 = CONCAT44(uStack_5c,local_60);
  if ((uVar3 & 0xffff) < 0x402) {
LAB__text__00390894:
    uVar19 = (uint)((ulong)uVar18 >> 0x20);
    uVar10 = *(undefined8 *)(puVar20 + -7);
    bVar15 = false;
    uVar11 = puVar20[-5];
    uVar14 = *(undefined8 *)(puVar20 + -4);
    uVar3 = puVar20[-2];
    uVar8 = puVar20[-1];
    uVar16 = *puVar20;
  }
  else {
    uVar14 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar3 = 0;
    uVar8 = 0;
    uVar16 = 0;
    bVar15 = true;
    uVar19 = uStack_5c;
  }
  uVar1 = uVar19 & 0xff | (uVar17 & 0xff) << 8;
  if (param_3 == 2) {
    uVar16 = uVar1;
  }
  else if (param_3 == 1) {
    uVar8 = uVar1;
  }
  else if (param_3 == 0) {
    uVar3 = uVar1;
  }
  if (!bVar15) {
    *(undefined8 *)(puVar20 + -7) = uVar10;
    *(undefined8 *)(puVar20 + -4) = uVar14;
    puVar20[-2] = uVar3;
    puVar20[-1] = uVar8;
    *puVar20 = uVar16;
    puVar20[-5] = uVar11 | 1 << (ulong)(uVar19 & 0x1f);
  }
  plVar21 = *(long **)(DAT_008e1620 + 0x1d0);
  lVar9 = *plVar21;
  while( true ) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))();
    plVar7 = (long *)FUN__text__0025ee9c();
    if (plVar7 == plVar6) break;
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
    if (plVar6 != (long *)0x0) break;
    plVar21 = plVar21 + 1;
    lVar9 = *plVar21;
  }
  uVar3 = FUN__text__00393bac(lVar9);
  local_60 = (uint)unaff_x29;
  uStack_5c = (uint)((ulong)unaff_x29 >> 0x20);
  uStack_58 = (uint)unaff_x30;
  uStack_54 = (undefined4)((ulong)unaff_x30 >> 0x20);
  if (((uint)uVar18 & 0xffff) < 0x402) {
    uVar5 = FUN__text__0038f800();
    if (((uVar5 & 1) != 0) && (DAT_008e1620 != 0)) {
      plVar6 = *(long **)(DAT_008e1620 + 0x1d8);
      for (plVar21 = *(long **)(DAT_008e1620 + 0x1d0); plVar21 != plVar6; plVar21 = plVar21 + 1) {
        lVar9 = *plVar21;
        plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))();
        plVar4 = (long *)FUN__text__0025ee9c();
        if (plVar4 == plVar7) {
LAB__text__00390488:
          local_68 = 0;
          bVar2 = FUN__text__00393bac(lVar9);
          if (bVar2 < 0xb) {
            uVar8 = *(uint *)((ulong)bVar2 * 4 + 0x73a5d4);
          }
          else {
            uVar8 = 0;
          }
          if ((uVar3 & 0xff) < 0xb) {
            uVar3 = *(uint *)((ulong)(uVar3 & 0xff) * 4 + 0x73a5d4);
          }
          else {
            uVar3 = 0;
          }
          local_6a = (undefined1)uVar17;
          local_6c = (undefined1)param_3;
          local_6e = (ushort)(1 << (ulong)(uVar3 & 0x1f)) | (ushort)(1 << (ulong)(uVar8 & 0x1f));
          local_6b = (undefined1)uVar19;
          local_69 = 0;
          local_70 = (short)uVar18;
          FUN__text__0038dc60(param_1,2,&local_70);
          return 1;
        }
        do {
          plVar7 = (long *)*plVar7;
        } while (plVar7 != plVar4 && plVar7 != (long *)0x0);
        if (plVar7 != (long *)0x0) {
          if (lVar9 == 0) {
            return 0;
          }
          goto LAB__text__00390488;
        }
      }
    }
  }
  return 0;
}


