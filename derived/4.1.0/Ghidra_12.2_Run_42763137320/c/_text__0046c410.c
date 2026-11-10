/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c410; name: FUN_.text__0046c410
 */


bool FUN__text__0046c410(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar13;
  int iVar12;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_2 + 0x50);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar3 / uVar2;
    }
    uVar7 = (ulong)(uVar3 - uVar5 * uVar2);
    plVar6 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if (plVar6 != (long *)0x0) {
      if (*(uint *)(plVar6 + 1) == uVar3) {
        plVar8 = (long *)0x0;
      }
      else {
        do {
          plVar8 = plVar6;
          plVar6 = (long *)*plVar8;
          if (plVar6 == (long *)0x0) {
            return false;
          }
        } while (*(uint *)(plVar6 + 1) != uVar3);
      }
      plVar1 = plVar6 + 2;
      lVar10 = 0;
      plVar11 = plVar1;
      do {
        lVar9 = lVar10;
        lVar10 = *plVar11;
        plVar11 = (long *)(lVar10 + 0x48);
      } while (lVar10 != 0 && lVar10 != param_2);
      if (lVar10 == 0) {
        iVar13 = 2;
        iVar12 = 2;
        lVar10 = *plVar1;
      }
      else {
        iVar13 = 1;
        iVar12 = 1;
        plVar11 = plVar1;
        if (*plVar1 != lVar10) {
          plVar11 = (long *)(lVar9 + 0x48);
        }
        *plVar11 = *(long *)(lVar10 + 0x48);
        lVar10 = *plVar1;
      }
      if (lVar10 == 0) {
        plVar1 = (long *)(*(long *)(param_1 + 8) + uVar7 * 8);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8;
        }
        *plVar1 = *plVar6;
        FUN__text__00400fc0(0);
        iVar4 = *(int *)(param_1 + 0x18) + -1;
        *(int *)(param_1 + 0x18) = iVar4;
        iVar12 = iVar13;
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            uVar7 = 0;
            do {
              lVar10 = *(long *)(param_1 + 8);
              plVar6 = *(long **)(lVar10 + uVar7 * 8);
              if (plVar6 != (long *)0x0) {
                do {
                  plVar6 = (long *)*plVar6;
                  FUN__text__00400fc0(0);
                } while (plVar6 != (long *)0x0);
                lVar10 = *(long *)(param_1 + 8);
              }
              *(undefined8 *)(lVar10 + uVar7 * 8) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x10));
          }
          *(undefined4 *)(param_1 + 0x18) = 0;
          if (*(long *)(param_1 + 8) != 0) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            FUN__text__00400fc0(0);
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0;
            return iVar13 == 1;
          }
        }
      }
      return iVar12 == 1;
    }
  }
  return false;
}


