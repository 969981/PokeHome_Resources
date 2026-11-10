/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002009c0; name: FUN_.text__002009c0
 */


void FUN__text__002009c0(long *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *param_2;
  if (*(uint *)(param_1 + 3) <= uVar7) {
LAB__text__00200b30:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar9 = *param_1;
  if (uVar7 == 2) {
    FUN__text__001fcbc0(lVar9,(int)param_1[1],0,0x7126a1,1);
    return;
  }
  if (uVar7 == 1) {
    FUN__text__001fd030(lVar9,(int)param_1[1]);
    return;
  }
  if (uVar7 == 0) goto LAB__text__00200b34;
  uVar7 = uVar7 - 3;
  if (((int)uVar7 < 0) || (0x398 < uVar7)) goto LAB__text__00200b30;
  *(undefined4 *)(lVar9 + 0xa8 + (ulong)*(uint *)(param_1 + 1) * 4) =
       *(undefined4 *)(lVar9 + (ulong)uVar7 * 4 + 0x2b470);
  iVar6 = *(int *)(lVar9 + 0xa8);
  uVar7 = (uint)(iVar6 != 0);
  if (*(int *)(lVar9 + 0xac) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(lVar9 + 0xb0) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(lVar9 + 0xb4) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 == 3) {
    if (iVar6 == 0) {
      lVar4 = 0;
      goto LAB__text__00200bf4;
    }
    if (*(int *)(lVar9 + 0xac) == 0) {
      lVar4 = 1;
      goto LAB__text__00200bf4;
    }
    if (*(int *)(lVar9 + 0xb0) != 0) goto LAB__text__00200c54;
    do {
      lVar4 = 2;
LAB__text__00200bf4:
      while( true ) {
        while( true ) {
          lVar1 = lVar4 + 1;
          lVar2 = lVar9 + 0xa8;
          *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar1 * 4);
          if (lVar1 != 3) {
            lVar3 = lVar4 + 2;
            *(undefined4 *)(lVar2 + lVar1 * 4) = *(undefined4 *)(lVar2 + lVar3 * 4);
            if (lVar3 != 3) {
              *(undefined4 *)(lVar9 + 0xa8 + lVar3 * 4) =
                   *(undefined4 *)(lVar9 + 0xa8 + lVar4 * 4 + 0xc);
            }
          }
          *(undefined4 *)(lVar9 + 0xb4) = 0;
          if (*(int *)(lVar9 + 0xa8) != 0) break;
          lVar4 = 0;
        }
        if (*(int *)(lVar9 + 0xac) != 0) break;
        lVar4 = 1;
      }
    } while (*(int *)(lVar9 + 0xb0) == 0);
LAB__text__00200c4c:
    FUN__text__0013dbf8(*(undefined8 *)(lVar9 + 0xd0));
  }
  else {
    uVar5 = 0;
    if (iVar6 == 0) {
LAB__text__00200ad4:
      if (uVar5 != uVar7) {
LAB__text__00200adc:
        uVar8 = (ulong)uVar5;
        lVar4 = lVar9 + 0xa8;
        lVar1 = uVar8 + 1;
        *(undefined4 *)(lVar4 + (ulong)uVar5 * 4) = *(undefined4 *)(lVar4 + lVar1 * 4);
        if (lVar1 != 3) {
          lVar2 = uVar8 + 2;
          *(undefined4 *)(lVar4 + lVar1 * 4) = *(undefined4 *)(lVar4 + lVar2 * 4);
          if (lVar2 != 3) {
            *(undefined4 *)(lVar9 + 0xa8 + lVar2 * 4) =
                 *(undefined4 *)(lVar9 + 0xa8 + uVar8 * 4 + 0xc);
          }
        }
        while( true ) {
          iVar6 = *(int *)(lVar9 + 0xa8);
LAB__text__00200b50:
          do {
            *(undefined4 *)(lVar9 + 0xb4) = 0;
            if (iVar6 == 0) {
              lVar4 = 0;
              if (uVar7 == 0) goto LAB__text__00200c4c;
              goto LAB__text__00200b94;
            }
            if (*(int *)(lVar9 + 0xac) == 0) {
              lVar4 = 1;
              if (uVar7 == 1) goto LAB__text__00200c4c;
              goto LAB__text__00200b94;
            }
          } while (*(int *)(lVar9 + 0xb0) != 0);
          lVar4 = 2;
          if (uVar7 == 2) break;
LAB__text__00200b94:
          lVar1 = lVar9 + 0xa8;
          lVar2 = lVar4 + 1;
          *(undefined4 *)(lVar1 + lVar4 * 4) = *(undefined4 *)(lVar1 + lVar2 * 4);
          if (lVar2 != 3) {
            lVar3 = lVar4 + 2;
            *(undefined4 *)(lVar1 + lVar2 * 4) = *(undefined4 *)(lVar1 + lVar3 * 4);
            if (lVar3 != 3) {
              *(undefined4 *)(lVar9 + 0xa8 + lVar3 * 4) =
                   *(undefined4 *)(lVar9 + 0xa8 + lVar4 * 4 + 0xc);
            }
          }
        }
        goto LAB__text__00200c4c;
      }
    }
    else {
      if (*(int *)(lVar9 + 0xac) == 0) {
        uVar5 = 1;
        goto LAB__text__00200ad4;
      }
      if (*(int *)(lVar9 + 0xb0) == 0) {
        uVar5 = 2;
        if (uVar7 == 2) goto LAB__text__00200c54;
        goto LAB__text__00200adc;
      }
      if (*(int *)(lVar9 + 0xb4) == 0) goto LAB__text__00200b50;
    }
  }
LAB__text__00200c54:
  FUN__text__001fb6f0(lVar9);
LAB__text__00200b34:
                    /* WARNING: Could not recover jumptable at 0x00200b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x88))();
  return;
}


