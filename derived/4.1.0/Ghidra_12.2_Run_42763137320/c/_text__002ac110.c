/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ac110; name: FUN_.text__002ac110
 */


ulong FUN__text__002ac110(uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 local_20;
  undefined3 uStack_1b;
  undefined1 local_18;
  
  uVar11 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if (uVar11 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x002ac144 */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*(code *)(&UNK__text__002ac154 + (ulong)*(byte *)(uVar11 + 0x7333ae) * 4))(1);
    return uVar11;
  }
  puVar12 = param_1 + 0xc;
  uVar4 = *puVar12;
  puVar7 = param_1 + 0x18;
  uVar5 = *puVar7;
  if (uVar4 < *param_1) {
    if (uVar5 < uVar4) {
      local_30 = *(undefined8 *)(param_1 + 4);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 6);
      uStack_23 = (undefined3)((ulong)*(undefined8 *)(param_1 + 6) >> 0x28);
      local_18 = (undefined1)*(undefined8 *)(param_1 + 10);
      local_20 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_1b = (undefined3)((ulong)*(undefined8 *)(param_1 + 8) >> 0x28);
      local_40 = *(undefined8 *)param_1;
      uStack_38 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
      *(char *)(param_1 + 10) = (char)param_1[0x22];
      *(undefined8 *)param_1 = *(undefined8 *)puVar7;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x1a);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 4);
      uVar16 = *(undefined8 *)(param_1 + 6);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)param_1 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar12 = uVar15;
      *(undefined8 *)(param_1 + 0xe) = uVar3;
      local_18 = (undefined1)uVar2;
      *(undefined1 *)(param_1 + 0x16) = local_18;
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      *(undefined8 *)(param_1 + 0x12) = uVar16;
      if (param_1[0xc] <= uVar5) goto LAB__text__002ac5c8;
      local_30 = *(undefined8 *)(param_1 + 0x10);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 0x12);
      uStack_23 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x28);
      local_18 = (undefined1)*(undefined8 *)(param_1 + 0x16);
      local_20 = (undefined5)*(undefined8 *)(param_1 + 0x14);
      uStack_1b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x28);
      local_40 = *(undefined8 *)puVar12;
      uStack_38 = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
      *(char *)(param_1 + 0x16) = (char)param_1[0x22];
      *(undefined8 *)puVar12 = *(undefined8 *)puVar7;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    }
    *(undefined8 *)puVar7 = local_40;
    *(undefined8 *)(param_1 + 0x1a) = uStack_38;
    *(undefined1 *)(param_1 + 0x22) = local_18;
    *(ulong *)(param_1 + 0x1e) = CONCAT35(uStack_23,uStack_28);
    *(ulong *)(param_1 + 0x20) = CONCAT35(uStack_1b,local_20);
    *(undefined8 *)(param_1 + 0x1c) = local_30;
  }
  else if (uVar5 < uVar4) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar16 = *(undefined8 *)(param_1 + 0x12);
    uVar9 = *(undefined8 *)(param_1 + 0x14);
    uVar2 = *(undefined8 *)(param_1 + 0x16);
    uVar15 = *(undefined8 *)puVar12;
    uVar3 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
    *(char *)(param_1 + 0x16) = (char)param_1[0x22];
    *(undefined8 *)puVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)puVar7 = uVar15;
    *(undefined8 *)(param_1 + 0x1a) = uVar3;
    local_18 = (undefined1)uVar2;
    *(undefined1 *)(param_1 + 0x22) = local_18;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x1c) = uVar8;
    *(undefined8 *)(param_1 + 0x1e) = uVar16;
    if (*puVar12 < *param_1) {
      uVar8 = *(undefined8 *)(param_1 + 4);
      uVar16 = *(undefined8 *)(param_1 + 6);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)param_1 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar12 = uVar15;
      *(undefined8 *)(param_1 + 0xe) = uVar3;
      local_18 = (undefined1)uVar2;
      *(undefined1 *)(param_1 + 0x16) = local_18;
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      *(undefined8 *)(param_1 + 0x12) = uVar16;
    }
  }
LAB__text__002ac5c8:
  if (param_1 + 0x24 != param_2) {
    lVar13 = 0;
    iVar14 = 0;
    puVar12 = param_1 + 0x24;
    do {
      uVar4 = *puVar12;
      if (uVar4 < *puVar7) {
        uVar8 = *(undefined8 *)(puVar12 + 5);
        uVar15 = *(undefined8 *)(puVar12 + 7);
        uVar16 = *(undefined8 *)(puVar12 + 1);
        uStack_23 = (undefined3)((ulong)uVar15 >> 0x28);
        uVar9 = *(undefined8 *)(puVar12 + 3);
        local_20 = (undefined5)*(undefined8 *)(puVar12 + 9);
        lVar6 = lVar13;
        do {
          lVar10 = lVar6;
          *(undefined8 *)((long)param_1 + lVar10 + 0xb0) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x80);
          *(undefined8 *)((long)param_1 + lVar10 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x70);
          *(undefined8 *)((long)param_1 + lVar10 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x78);
          *(undefined1 *)((long)param_1 + lVar10 + 0xb8) =
               *(undefined1 *)((long)param_1 + lVar10 + 0x88);
          *(undefined8 *)((long)param_1 + lVar10 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x60);
          *(undefined8 *)((long)param_1 + lVar10 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x68);
          if (lVar10 == -0x60) {
            puVar7 = param_1;
            goto LAB__text__002ac5e4;
          }
          lVar6 = lVar10 + -0x30;
        } while (uVar4 < *(uint *)((long)param_1 + lVar10 + 0x30));
        puVar7 = (uint *)((long)param_1 + lVar10 + 0x60);
LAB__text__002ac5e4:
        *puVar7 = uVar4;
        iVar14 = iVar14 + 1;
        *(undefined8 *)(puVar7 + 5) = uVar8;
        *(undefined8 *)(puVar7 + 3) = uVar9;
        *(undefined8 *)(puVar7 + 7) = uVar15;
        *(undefined8 *)(puVar7 + 1) = uVar16;
        *(ulong *)((long)puVar7 + 0x21) = CONCAT53(local_20,uStack_23);
        if (iVar14 == 8) {
          return (ulong)(puVar12 + 0xc == param_2);
        }
      }
      puVar1 = puVar12 + 0xc;
      lVar13 = lVar13 + 0x30;
      puVar7 = puVar12;
      puVar12 = puVar1;
    } while (puVar1 != param_2);
  }
  return 1;
}


