/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2840; name: FUN_.text__004f2840
 */


undefined8 FUN__text__004f2840(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  
  plVar7 = *(long **)(param_1 + 0x120);
  if (param_3 != 0) {
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 0;
LAB__text__004f2874:
      if (param_3 < 2) {
        param_3 = 1;
      }
      do {
        plVar7 = *(long **)(param_1 + 0x120);
        uVar9 = *(uint *)(plVar7 + 1);
        if (*(uint *)((long)plVar7 + 0xc) <= uVar9) {
          uVar2 = FUN__text__004f3680(plVar7);
          if ((uVar2 & 1) == 0) {
            return 2;
          }
          if (*(uint *)((long)plVar7 + 0xc) <= uVar9) {
            return 2;
          }
          uVar9 = *(uint *)(plVar7 + 1);
        }
        *(uint *)(plVar7 + 1) = uVar9 + 1;
        if (*plVar7 == 0) {
          return 2;
        }
        uVar8 = *param_2;
        puVar1 = param_2 + 1;
        puVar5 = (undefined8 *)(*plVar7 + (ulong)uVar9 * 0x18);
        uVar6 = param_2[2];
        param_2 = param_2 + 3;
        param_3 = param_3 - 1;
        puVar5[1] = *puVar1;
        puVar5[2] = uVar6;
        *puVar5 = uVar8;
      } while (param_3 != 0);
      return 1;
    }
    uVar8 = 2;
    plVar7 = (long *)FUN__text__00400f80(2,0x10);
    if (plVar7 != (long *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(long **)(param_1 + 0x120) = plVar7;
      if (*(uint *)((long)plVar7 + 0xc) < param_3) {
        if (*plVar7 == 0) {
          uVar9 = *(uint *)(plVar7 + 1);
          lVar3 = FUN__text__00400f80(2,(ulong)param_3 * 0x18);
          if (lVar3 == 0) {
            return 2;
          }
          lVar4 = *plVar7;
          if ((lVar4 != 0) && (lVar4 != lVar3)) {
            if (uVar9 != 0) {
              lVar4 = 0;
              do {
                puVar1 = (undefined8 *)(lVar3 + lVar4);
                puVar5 = (undefined8 *)(*plVar7 + lVar4);
                lVar4 = lVar4 + 0x18;
                uVar8 = puVar5[1];
                uVar6 = puVar5[2];
                *puVar1 = *puVar5;
                puVar1[1] = uVar8;
                puVar1[2] = uVar6;
              } while ((ulong)uVar9 * 0x18 != lVar4);
              lVar4 = *plVar7;
            }
            FUN__text__00400fc0(2,lVar4);
          }
        }
        else {
          lVar3 = FUN__text__00400fa0(2);
          if (lVar3 == 0) {
            return 2;
          }
        }
        *plVar7 = lVar3;
        *(uint *)((long)plVar7 + 0xc) = param_3;
      }
      goto LAB__text__004f2874;
    }
    goto LAB__text__004f2978;
  }
  if (plVar7 == (long *)0x0) {
    return 1;
  }
  if (*plVar7 == 0) {
LAB__text__004f290c:
    FUN__text__00400fc0(2,plVar7);
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 0;
    FUN__text__00400fc0(2);
    *plVar7 = 0;
    *(undefined4 *)((long)plVar7 + 0xc) = 0;
    plVar7 = *(long **)(param_1 + 0x120);
    if (plVar7 != (long *)0x0) goto LAB__text__004f290c;
  }
  uVar8 = 1;
LAB__text__004f2978:
  *(undefined8 *)(param_1 + 0x120) = 0;
  return uVar8;
}


