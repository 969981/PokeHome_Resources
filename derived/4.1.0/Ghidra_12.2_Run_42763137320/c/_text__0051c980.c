/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c980; name: FUN_.text__0051c980
 */


undefined8 FUN__text__0051c980(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar8;
  if (uVar8 == 0) {
    return 0;
  }
  lVar11 = *param_1;
  iVar7 = 0;
  do {
    iVar1 = iVar7 + (uVar8 >> 1);
    plVar9 = (long *)(lVar11 + (long)iVar1 * 0x20);
    uVar10 = plVar9[3];
    if (uVar10 == param_2) {
      lVar2 = lVar11 + uVar5 * 0x20;
      plVar12 = (long *)(lVar2 + -0x20);
      if (plVar9 < plVar12) {
        if (*plVar9 != 0) {
          *(undefined4 *)(plVar9 + 1) = 0;
          FUN__text__00400fc0(0xb);
        }
        *plVar9 = plVar9[4];
        *(int *)(plVar9 + 1) = (int)plVar9[5];
        *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)((long)plVar9 + 0x2c);
        plVar9[4] = 0;
        plVar9[5] = 0;
        plVar9[2] = plVar9[6];
        plVar9[3] = plVar9[7];
        if (plVar9 + 4 < plVar12) {
          puVar6 = (undefined8 *)(lVar11 + (long)iVar1 * 0x20 + 0x58);
          do {
            uVar3 = *(undefined4 *)(puVar6 + -2);
            puVar6[-2] = 0;
            *(undefined4 *)(puVar6 + -6) = uVar3;
            *(undefined4 *)((long)puVar6 + -0x2c) = *(undefined4 *)((long)puVar6 + -0xc);
            plVar9 = puVar6 + -3;
            lVar11 = *plVar9;
            puVar6[-5] = puVar6[-1];
            puVar6[-4] = *puVar6;
            *plVar9 = 0;
            puVar6[-7] = lVar11;
            puVar6 = puVar6 + 4;
          } while (plVar9 < plVar12);
        }
      }
      if (*plVar12 != 0) {
        *(undefined4 *)(lVar2 + -0x18) = 0;
        FUN__text__00400fc0(0xb);
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined4 *)(lVar2 + -0x14) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      return 1;
    }
    if (uVar10 < param_2) {
      iVar7 = iVar1 + 1;
    }
    uVar4 = uVar8 - (uVar10 < param_2);
    uVar8 = uVar4 >> 1;
  } while (1 < uVar4);
  return 0;
}


