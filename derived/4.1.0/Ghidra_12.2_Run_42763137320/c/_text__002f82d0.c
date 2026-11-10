/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f82d0; name: FUN_.text__002f82d0
 */


ulong FUN__text__002f82d0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = (long)param_2 - (long)param_1 >> 5;
  if (uVar9 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x002f82fc */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&UNK__text__002f830c + (ulong)*(byte *)(uVar9 + 0x733994) * 4))(1);
    return uVar9;
  }
  puVar10 = param_1 + 8;
  uVar3 = *puVar10;
  puVar6 = param_1 + 0x10;
  uVar4 = *puVar6;
  if (uVar3 < *param_1) {
    if (uVar4 < uVar3) {
      uVar7 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)puVar6;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x12);
      uVar13 = *(undefined8 *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 *)puVar6 = uVar7;
      *(undefined8 *)(param_1 + 0x12) = uVar14;
      *(undefined8 *)(param_1 + 0x14) = uVar13;
      *(undefined8 *)(param_1 + 0x16) = uVar2;
    }
    else {
      uVar7 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      uVar13 = *(undefined8 *)(param_1 + 0xc);
      uVar2 = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar10 = uVar7;
      *(undefined8 *)(param_1 + 10) = uVar14;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = uVar13;
      *(undefined8 *)(param_1 + 6) = uVar2;
      if (uVar4 < param_1[8]) {
        uVar7 = *(undefined8 *)puVar10;
        uVar14 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar10 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
        uVar13 = *(undefined8 *)(param_1 + 0xc);
        uVar2 = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)puVar6 = uVar7;
        *(undefined8 *)(param_1 + 0x12) = uVar14;
        *(undefined8 *)(param_1 + 0x14) = uVar13;
        *(undefined8 *)(param_1 + 0x16) = uVar2;
      }
    }
  }
  else if (uVar4 < uVar3) {
    uVar7 = *(undefined8 *)puVar10;
    uVar13 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)puVar10 = *(undefined8 *)puVar6;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)puVar6 = uVar7;
    *(undefined8 *)(param_1 + 0x12) = uVar13;
    uVar7 = *(undefined8 *)(param_1 + 0xc);
    uVar13 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x14) = uVar7;
    *(undefined8 *)(param_1 + 0x16) = uVar13;
    if (*puVar10 < *param_1) {
      uVar7 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      uVar13 = *(undefined8 *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar10 = uVar7;
      *(undefined8 *)(param_1 + 10) = uVar14;
      *(undefined8 *)(param_1 + 0xc) = uVar13;
      *(undefined8 *)(param_1 + 0xe) = uVar2;
    }
  }
  if (param_1 + 0x18 != param_2) {
    lVar11 = 0;
    iVar12 = 0;
    puVar10 = param_1 + 0x18;
    do {
      uVar3 = *puVar10;
      if (uVar3 < *puVar6) {
        uVar7 = *(undefined8 *)(puVar10 + 1);
        uVar13 = *(undefined8 *)(puVar10 + 3);
        uVar14 = *(undefined8 *)(puVar10 + 5);
        uVar4 = puVar10[7];
        lVar5 = lVar11;
        do {
          lVar8 = lVar5;
          *(undefined8 *)((long)param_1 + lVar8 + 0x60) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x40);
          *(undefined8 *)((long)param_1 + lVar8 + 0x68) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x48);
          *(undefined8 *)((long)param_1 + lVar8 + 0x70) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x50);
          *(undefined8 *)((long)param_1 + lVar8 + 0x78) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x58);
          if (lVar8 == -0x40) {
            puVar6 = param_1;
            goto LAB__text__002f85b4;
          }
          lVar5 = lVar8 + -0x20;
        } while (uVar3 < *(uint *)((long)param_1 + lVar8 + 0x20));
        puVar6 = (uint *)((long)param_1 + lVar8 + 0x40);
LAB__text__002f85b4:
        *puVar6 = uVar3;
        iVar12 = iVar12 + 1;
        *(undefined8 *)(puVar6 + 1) = uVar7;
        *(undefined8 *)(puVar6 + 3) = uVar13;
        *(undefined8 *)(puVar6 + 5) = uVar14;
        puVar6[7] = uVar4;
        if (iVar12 == 8) {
          return (ulong)(puVar10 + 8 == param_2);
        }
      }
      puVar1 = puVar10 + 8;
      lVar11 = lVar11 + 0x20;
      puVar6 = puVar10;
      puVar10 = puVar1;
    } while (puVar1 != param_2);
  }
  return 1;
}


