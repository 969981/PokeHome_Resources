/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053e1e0; name: FUN_.text__0053e1e0
 */


undefined8 FUN__text__0053e1e0(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar4;
  if (uVar4 <= param_2) {
    if (*(uint *)((long)param_1 + 0xc) < param_2) {
      if (*param_1 == 0) {
        lVar5 = FUN__text__00400f80(0xe,((ulong)param_2 + (ulong)param_2 * 2) * 8);
        if (lVar5 == 0) {
          return 0;
        }
        lVar7 = *param_1;
        if ((lVar7 != 0) && (lVar7 != lVar5)) {
          if (uVar4 != 0) {
            lVar7 = 0;
            do {
              puVar2 = (undefined8 *)(lVar5 + lVar7);
              puVar2[1] = 0;
              puVar2[2] = 0;
              *puVar2 = 0;
              puVar1 = (undefined8 *)(*param_1 + lVar7);
              lVar7 = lVar7 + 0x18;
              uVar3 = puVar1[1];
              uVar8 = puVar1[2];
              *puVar2 = *puVar1;
              puVar2[1] = uVar3;
              puVar2[2] = uVar8;
            } while (uVar9 * 0x18 != lVar7);
            lVar7 = *param_1;
          }
          FUN__text__00400fc0(0xe,lVar7);
        }
      }
      else {
        lVar5 = FUN__text__00400fa0();
        if (lVar5 == 0) {
          return 0;
        }
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = param_2;
    }
    if (uVar4 < param_2) {
      lVar5 = *param_1;
      if (lVar5 != 0) {
        lVar6 = ~uVar9 + (ulong)param_2;
        lVar7 = uVar9 * 0x18;
        while( true ) {
          if (lVar5 != 0) {
            puVar2 = (undefined8 *)(lVar5 + lVar7);
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = 0;
          }
          if (lVar6 == 0) break;
          lVar5 = *param_1;
          lVar6 = lVar6 + -1;
          lVar7 = lVar7 + 0x18;
        }
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


