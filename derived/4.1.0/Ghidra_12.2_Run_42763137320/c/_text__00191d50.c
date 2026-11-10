/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00191d50; name: FUN_.text__00191d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00191d50(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = _DAT_008a0598;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = lVar6 + 0x10;
  memset(param_1 + 2,0,0x3c0);
  lVar6 = 0;
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  do {
    uVar7 = 0;
    do {
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x3f0,8);
      if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = param_2;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      FUN__text__001918f0(lVar3,param_2,CONCAT44(param_4,param_3),lVar6 << 0x20 | uVar7);
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      lVar5 = param_1[uVar7 * 0x14 + lVar6 * 4 + 2];
      param_1[uVar7 * 0x14 + lVar6 * 4 + 2] = lVar3;
      if (lVar5 != 0) {
        lVar3 = 0x3c0;
        do {
          lVar2 = lVar5 + lVar3;
          lVar4 = *(long *)(lVar2 + 0x10);
          *(undefined8 *)(lVar2 + 0x10) = 0;
          if (lVar4 != 0) {
            (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))
                      (*(long **)(lVar2 + 0x18),lVar4,*(undefined8 *)(lVar2 + 0x20),
                       *(undefined8 *)(lVar2 + 0x28));
          }
          lVar3 = lVar3 + -0x20;
        } while (lVar3 != 0);
        if (*(long *)(lVar5 + 0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar5 + 0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar5 + 0x20) = 0;
        }
        (**(code **)(*(long *)param_1[uVar7 * 0x14 + lVar6 * 4 + 3] + 0x18))
                  ((long *)param_1[uVar7 * 0x14 + lVar6 * 4 + 3],lVar5,
                   param_1[uVar7 * 0x14 + lVar6 * 4 + 4],param_1[uVar7 * 0x14 + lVar6 * 4 + 5]);
      }
      uVar1 = uVar7 + 1;
      param_1[uVar7 * 0x14 + lVar6 * 4 + 3] = (long)param_2;
      param_1[uVar7 * 0x14 + lVar6 * 4 + 4] = 0x3f0;
      param_1[uVar7 * 0x14 + lVar6 * 4 + 5] = 8;
      uVar7 = uVar1;
    } while (uVar1 != 6);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 5);
  return;
}


