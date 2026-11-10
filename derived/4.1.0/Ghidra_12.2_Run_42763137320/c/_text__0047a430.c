/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047a430; name: FUN_.text__0047a430
 */


long FUN__text__0047a430(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *(uint *)(param_1 + 0x1b0);
  if (uVar8 != 0) {
    lVar4 = *(long *)(param_1 + 0x1a8);
    lVar5 = lVar4 + (ulong)uVar8 * 0x88;
    uVar2 = *(uint *)(param_2 + 0x18);
    if (param_3 == 1) {
      if (uVar2 == 0) {
        param_4 = param_4 + 1;
        lVar5 = (ulong)uVar8 * 0x88;
        do {
          param_4 = param_4 + -1;
          if (param_4 == 0) {
            return lVar4;
          }
          lVar5 = lVar5 + -0x88;
          lVar4 = lVar4 + 0x88;
        } while (lVar5 != 0);
      }
      else {
        do {
          uVar7 = *(ulong *)(lVar4 + 0x70);
          iVar6 = 0;
          uVar8 = uVar2;
          do {
            iVar1 = iVar6 + (uVar8 >> 1);
            uVar9 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
            if (uVar9 == uVar7) goto LAB__text__0047a4f0;
            if (uVar9 < uVar7) {
              iVar6 = iVar1 + 1;
            }
            uVar3 = uVar8 - (uVar9 < uVar7);
            uVar8 = uVar3 >> 1;
          } while (1 < uVar3);
          if (param_4 == 0) {
            return lVar4;
          }
          param_4 = param_4 + -1;
LAB__text__0047a4f0:
          lVar4 = lVar4 + 0x88;
        } while (lVar4 != lVar5);
      }
    }
    else if ((param_3 == 0) && (uVar2 != 0)) {
      do {
        uVar7 = *(ulong *)(lVar4 + 0x70);
        iVar6 = 0;
        uVar8 = uVar2;
        do {
          iVar1 = iVar6 + (uVar8 >> 1);
          uVar9 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
          if (uVar9 == uVar7) {
            if (param_4 == 0) {
              return lVar4;
            }
            param_4 = param_4 + -1;
            break;
          }
          if (uVar9 < uVar7) {
            iVar6 = iVar1 + 1;
          }
          uVar3 = uVar8 - (uVar9 < uVar7);
          uVar8 = uVar3 >> 1;
        } while (1 < uVar3);
        lVar4 = lVar4 + 0x88;
      } while (lVar4 != lVar5);
    }
  }
  return 0;
}


