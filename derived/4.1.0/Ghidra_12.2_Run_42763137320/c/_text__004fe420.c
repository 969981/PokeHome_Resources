/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe420; name: FUN_.text__004fe420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fe420(undefined8 param_1,long param_2,long *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  
  if (param_4 != 0) {
    iVar11 = 0;
    lVar1 = _DAT_008a50e0 + 0x10;
    do {
      piVar12 = (int *)*param_3;
      *param_3 = (long)(piVar12 + 8);
      if (*piVar12 == 0) {
        plVar5 = (long *)FUN__text__00400f80(2,0x40);
        if (plVar5 == (long *)0x0) {
          return 2;
        }
        *(undefined2 *)(plVar5 + 3) = 0;
        plVar5[1] = param_2;
        plVar5[2] = 0x100000000;
        *(undefined4 *)((long)plVar5 + 0x1c) = 50000;
        *(undefined2 *)((long)plVar5 + 0x35) = 1;
        *(undefined2 *)(plVar5 + 7) = 0;
        *plVar5 = lVar1;
        plVar5[4] = 0;
        plVar5[5] = 0;
        *(undefined8 *)((long)plVar5 + 0x2d) = 0;
        uVar2 = *(uint *)(param_2 + 0x28);
        uVar9 = (ulong)uVar2;
        uVar3 = *(uint *)(param_2 + 0x2c);
        lVar10 = *(long *)(param_2 + 0x20);
        if (uVar2 < uVar3) {
          *(uint *)(param_2 + 0x28) = uVar2 + 1;
          if (lVar10 == 0) goto LAB__text__004fe818;
        }
        else {
          iVar4 = uVar3 + (uVar3 >> 1);
          if (uVar3 == 0) {
            iVar4 = 1;
          }
          uVar3 = iVar4 + uVar3;
          if (lVar10 == 0) {
            lVar10 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
            if (lVar10 == 0) goto LAB__text__004fe818;
            lVar6 = *(long *)(param_2 + 0x20);
            if ((lVar6 != 0) && (lVar6 != lVar10)) {
              if (uVar2 != 0) {
                if (uVar2 < 4) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0;
                  puVar8 = (undefined8 *)(lVar10 + 0x10);
                  do {
                    lVar6 = uVar7 * 8;
                    uVar7 = uVar7 + 4;
                    puVar8[-2] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6);
                    puVar8[-1] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6 + 8);
                    *puVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6 + 0x10);
                    puVar8[1] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6 + 0x18);
                    puVar8 = puVar8 + 4;
                  } while ((uVar9 & 0xfffffffc) != uVar7);
                }
                uVar9 = uVar9 & 3;
                if ((uVar2 & 3) != 0) {
                  lVar6 = uVar7 << 3;
                  do {
                    uVar9 = uVar9 - 1;
                    *(undefined8 *)(lVar10 + lVar6) =
                         *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6);
                    lVar6 = lVar6 + 8;
                  } while (uVar9 != 0);
                }
                lVar6 = *(long *)(param_2 + 0x20);
              }
              FUN__text__00400fc0(0,lVar6);
            }
          }
          else {
            lVar10 = FUN__text__00400fa0(0,lVar10);
            if (lVar10 == 0) goto LAB__text__004fe818;
          }
          *(long *)(param_2 + 0x20) = lVar10;
          *(uint *)(param_2 + 0x2c) = uVar3;
          if (uVar3 <= uVar2) goto LAB__text__004fe818;
          uVar9 = (ulong)*(uint *)(param_2 + 0x28);
          *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) + 1;
        }
        *(long **)(lVar10 + uVar9 * 8) = plVar5;
        *(short *)(plVar5 + 7) = (short)piVar12[7];
        iVar4 = piVar12[5];
        *(int *)((long)plVar5 + 0x14) = piVar12[4];
        *(short *)(plVar5 + 3) = (short)iVar4;
        *(int *)((long)plVar5 + 0x1c) = piVar12[6];
        iVar4 = piVar12[3];
        *(undefined1 *)((long)plVar5 + 0x34) = 0;
        *(int *)(plVar5 + 6) = iVar4;
        *(undefined1 *)((long)plVar5 + 0x35) = *(undefined1 *)((long)piVar12 + 0x1f);
        *(int *)(plVar5 + 2) = piVar12[1];
        if ((piVar12[2] != 0) && (iVar4 = FUN__text__004fe420(param_1,plVar5,param_3), iVar4 != 1))
        {
          return 2;
        }
      }
      else {
        plVar5 = (long *)FUN__text__00400f80(2,0x28);
        if (plVar5 == (long *)0x0) {
          return 2;
        }
        *(undefined2 *)(plVar5 + 3) = 0;
        plVar5[1] = param_2;
        plVar5[2] = 0x100000000;
        *(undefined4 *)((long)plVar5 + 0x1c) = 50000;
        *plVar5 = (long)&DAT_008918f8;
        lVar10 = *(long *)(param_2 + 0x20);
        uVar2 = *(uint *)(param_2 + 0x28);
        uVar9 = (ulong)uVar2;
        uVar3 = *(uint *)(param_2 + 0x2c);
        if (uVar2 < uVar3) {
          *(uint *)(param_2 + 0x28) = uVar2 + 1;
          if (lVar10 == 0) goto LAB__text__004fe818;
        }
        else {
          iVar4 = uVar3 + (uVar3 >> 1);
          if (uVar3 == 0) {
            iVar4 = 1;
          }
          uVar3 = iVar4 + uVar3;
          if (lVar10 == 0) {
            lVar10 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
            if (lVar10 == 0) goto LAB__text__004fe818;
            lVar6 = *(long *)(param_2 + 0x20);
            if ((lVar6 != 0) && (lVar6 != lVar10)) {
              if (uVar2 != 0) {
                if (uVar2 < 4) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0;
                  puVar8 = (undefined8 *)(lVar10 + 0x10);
                  do {
                    lVar6 = uVar7 * 8;
                    uVar7 = uVar7 + 4;
                    puVar8[-2] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6);
                    puVar8[-1] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6 + 8);
                    *puVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6 + 0x10);
                    puVar8[1] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6 + 0x18);
                    puVar8 = puVar8 + 4;
                  } while ((uVar9 & 0xfffffffc) != uVar7);
                }
                uVar9 = uVar9 & 3;
                if ((uVar2 & 3) != 0) {
                  lVar6 = uVar7 << 3;
                  do {
                    uVar9 = uVar9 - 1;
                    *(undefined8 *)(lVar10 + lVar6) =
                         *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6);
                    lVar6 = lVar6 + 8;
                  } while (uVar9 != 0);
                }
                lVar6 = *(long *)(param_2 + 0x20);
              }
              FUN__text__00400fc0(0,lVar6);
            }
          }
          else {
            lVar10 = FUN__text__00400fa0(0,lVar10);
            if (lVar10 == 0) goto LAB__text__004fe818;
          }
          *(long *)(param_2 + 0x20) = lVar10;
          *(uint *)(param_2 + 0x2c) = uVar3;
          if (uVar3 <= uVar2) {
LAB__text__004fe818:
            (**(code **)*plVar5)(plVar5);
            FUN__text__00400fc0(2,plVar5);
            return 2;
          }
          uVar9 = (ulong)*(uint *)(param_2 + 0x28);
          *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) + 1;
        }
        *(long **)(lVar10 + uVar9 * 8) = plVar5;
        iVar4 = piVar12[5];
        *(int *)((long)plVar5 + 0x14) = piVar12[4];
        *(short *)(plVar5 + 3) = (short)iVar4;
        *(int *)((long)plVar5 + 0x1c) = piVar12[6];
        *(int *)(plVar5 + 4) = *piVar12;
        *(int *)(plVar5 + 2) = piVar12[1];
        FUN__text__004feb9c(param_2);
      }
      if (piVar12[6] != 50000) {
        *(undefined1 *)(param_2 + 0x34) = 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != param_4);
  }
  return 1;
}


