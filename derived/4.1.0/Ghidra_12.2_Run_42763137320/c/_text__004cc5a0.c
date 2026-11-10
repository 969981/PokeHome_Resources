/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc5a0; name: FUN_.text__004cc5a0
 */


void FUN__text__004cc5a0(ulong param_1,int *param_2,uint *param_3,int param_4,undefined8 param_5,
                        undefined4 param_6,code *param_7,undefined8 param_8)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
    uVar4 = param_1;
    do {
      uVar2 = *(ushort *)(param_2 + 1);
      iVar5 = 0;
      puVar1 = (ushort *)((long)param_2 + 6);
      param_2 = (int *)(lVar8 + (ulong)uVar2 * 0xc);
      iVar6 = *puVar1 - 1;
      do {
        while( true ) {
          iVar3 = iVar6 - iVar5;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar5 + (iVar3 >> 1);
          puVar7 = (uint *)(param_2 + (long)iVar3 * 3);
          if (*param_3 < *puVar7) break;
          if (*param_3 <= *puVar7) {
            if (param_4 + -1 == 0) {
              if ((param_7 == (code *)0x0) ||
                 (uVar4 = (*param_7)(param_6,param_2[(long)iVar3 * 3 + 1],param_8), (uVar4 & 1) != 0
                 )) {
                uVar4 = FUN__text__004cc240(uVar4,puVar7,param_5);
              }
            }
            else {
              uVar4 = FUN__text__004cc5a0(param_1,puVar7,param_3 + 1,param_4 + -1,param_5,param_6,
                                          param_7,param_8);
            }
            goto LAB__text__004cc6a4;
          }
          iVar5 = iVar3 + 1;
          if (iVar6 < iVar5) goto LAB__text__004cc6a4;
        }
        iVar6 = iVar3 + -1;
      } while (iVar5 <= iVar6);
LAB__text__004cc6a4:
      if (*param_2 != 0) {
        return;
      }
      if (*param_3 == 0) {
        return;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        if ((param_7 == (code *)0x0) ||
           (uVar4 = (*param_7)(param_6,*(undefined4 *)(lVar8 + (ulong)uVar2 * 0xc + 4),param_8),
           (uVar4 & 1) != 0)) {
          FUN__text__004cc240(uVar4,param_2,param_5);
          return;
        }
        return;
      }
      lVar8 = *(long *)(param_1 + 8);
      param_3 = param_3 + 1;
    } while (lVar8 != 0);
  }
  return;
}


