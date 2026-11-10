/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192880; name: FUN_.text__00192880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00192880(long *param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar8;
  long *plVar7;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar3 = _DAT_008a05b0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = lVar3 + 0x10;
  memset(param_1 + 2,0,0x160);
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  uVar6 = 0;
  do {
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x3d0,8);
    if (*(long *)(uVar10 + 0x98) == 0x10) goto LAB__text__00192b28;
    *(long **)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) = param_2;
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
    FUN__text__00191d50(lVar3,param_2,param_3,uVar6 & 0xffffffff);
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
    lVar9 = param_1[uVar6 * 4 + 2];
    param_1[uVar6 * 4 + 2] = lVar3;
    if (lVar9 != 0) {
      plVar7 = (long *)(lVar9 + 0x3d0);
      do {
        plVar8 = plVar7 + -4;
        lVar3 = *plVar8;
        *plVar8 = 0;
        if (lVar3 != 0) {
          lVar11 = 0x3c0;
          do {
            lVar5 = lVar3 + lVar11;
            lVar4 = *(long *)(lVar5 + 0x10);
            *(undefined8 *)(lVar5 + 0x10) = 0;
            if (lVar4 != 0) {
              (**(code **)(**(long **)(lVar5 + 0x18) + 0x18))
                        (*(long **)(lVar5 + 0x18),lVar4,*(undefined8 *)(lVar5 + 0x20),
                         *(undefined8 *)(lVar5 + 0x28));
            }
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
          if (*(long *)(lVar3 + 0x20) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + 0x20) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + 0x20) = 0;
          }
          (**(code **)(*(long *)plVar7[-3] + 0x18))((long *)plVar7[-3],lVar3,plVar7[-2],plVar7[-1]);
        }
        plVar7 = plVar8;
      } while (plVar8 != (long *)(lVar9 + 0x10));
      (**(code **)(*(long *)param_1[uVar6 * 4 + 3] + 0x18))
                ((long *)param_1[uVar6 * 4 + 3],lVar9,param_1[uVar6 * 4 + 4],param_1[uVar6 * 4 + 5])
      ;
    }
    uVar1 = uVar6 + 1;
    param_1[uVar6 * 4 + 5] = 8;
    param_1[uVar6 * 4 + 3] = (long)param_2;
    param_1[uVar6 * 4 + 4] = 0x3d0;
    uVar6 = uVar1;
  } while (uVar1 != 10);
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x3d8,8);
  if (*(long *)(uVar10 + 0x98) != 0x10) {
    *(long **)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) = param_2;
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
    FUN__text__001922a0(lVar3,param_2);
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
    lVar9 = param_1[0x2a];
    param_1[0x2a] = lVar3;
    if (lVar9 != 0) {
      lVar3 = 0;
      do {
        lVar11 = lVar9 + lVar3;
        lVar5 = *(long *)(lVar11 + 0x3b8);
        *(undefined8 *)(lVar11 + 0x3b8) = 0;
        if (lVar5 != 0) {
          (**(code **)(**(long **)(lVar11 + 0x3c0) + 0x18))
                    (*(long **)(lVar11 + 0x3c0),lVar5,*(undefined8 *)(lVar11 + 0x3c8),
                     *(undefined8 *)(lVar11 + 0x3d0));
        }
        bVar2 = lVar3 != -0x3a0;
        lVar3 = lVar3 + -0x20;
      } while (bVar2);
      if (*(long *)(lVar9 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar9 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar9 + 8) = 0;
      }
      (**(code **)(*(long *)param_1[0x2b] + 0x18))
                ((long *)param_1[0x2b],lVar9,param_1[0x2c],param_1[0x2d]);
    }
    param_1[0x2b] = (long)param_2;
    param_1[0x2c] = 0x3d8;
    param_1[0x2d] = 8;
    return;
  }
LAB__text__00192b28:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


