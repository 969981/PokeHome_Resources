/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be9b0; name: FUN_.text__001be9b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001be9b0(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0), lVar6 != 0)) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    plVar3 = _DAT_008a1108;
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        uVar2 = *(uint *)(lVar6 + 600);
        if (uVar2 != 0) {
          lVar9 = 0;
          uVar5 = 7;
          if (uVar2 < 2) {
            uVar5 = 3;
          }
          do {
            if ((lVar9 == 0x4b0) || (lVar8 = *(long *)(lVar6 + 0x10), lVar8 == 0))
            goto LAB__text__001beac0;
            lVar1 = lVar6 + 0x270 + lVar9;
            uVar4 = FUN__text__00193a7c(lVar8,lVar1);
            if (((uVar4 & 1) != 0) && (uVar4 = FUN__text__00193be8(lVar8,lVar1), (uVar4 & 1) != 0))
            {
              if ((*plVar3 == 0) || (lVar8 = *(long *)(*plVar3 + 0x68), lVar8 == 0))
              goto LAB__text__001beac0;
              if ((*(byte *)(lVar8 + 0x2ac) & 1) == 0) {
                *(undefined4 *)(lVar8 + 0x2ac) = uVar5;
              }
            }
            lVar9 = lVar9 + 0x28;
          } while ((ulong)uVar2 * 0x28 != lVar9);
        }
      }
      *(undefined4 *)(lVar6 + 600) = 0;
                    /* WARNING: Could not recover jumptable at 0x001beabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
  }
LAB__text__001beac0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


