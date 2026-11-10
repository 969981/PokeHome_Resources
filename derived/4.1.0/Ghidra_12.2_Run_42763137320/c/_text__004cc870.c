/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc870; name: FUN_.text__004cc870
 */


uint * FUN__text__004cc870(long param_1,long param_2,uint *param_3,int param_4,undefined4 param_5,
                          code *param_6,undefined8 param_7)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (*(ushort *)(param_2 + 6) != 0)) {
    uVar1 = *(ushort *)(param_2 + 4);
    puVar8 = (uint *)(lVar9 + (ulong)uVar1 * 0xc);
    iVar6 = 0;
    iVar7 = *(ushort *)(param_2 + 6) - 1;
    do {
      while( true ) {
        iVar2 = iVar7 - iVar6;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar6 + (iVar2 >> 1);
        puVar4 = puVar8 + (long)iVar2 * 3;
        if (*param_3 < *puVar4) break;
        if (*param_3 <= *puVar4) {
          if (param_4 + -1 == 0) {
            if (param_6 == (code *)0x0) {
              return puVar4;
            }
            puVar5 = puVar8 + (long)iVar2 * 3;
            goto LAB__text__004cc974;
          }
          puVar4 = (uint *)FUN__text__004cc870(param_1,puVar4,param_3 + 1,param_4 + -1,param_5,
                                               param_6,param_7);
          if (puVar4 != (uint *)0x0) {
            return puVar4;
          }
          goto LAB__text__004cc910;
        }
        iVar6 = iVar2 + 1;
        if (iVar7 < iVar6) goto LAB__text__004cc910;
      }
      iVar7 = iVar2 + -1;
    } while (iVar6 <= iVar7);
LAB__text__004cc910:
    if ((*puVar8 == 0) && (*param_3 != 0)) {
      if (param_4 + -1 != 0) {
        puVar8 = (uint *)FUN__text__004cc870(param_1,puVar8,param_3 + 1,param_4 + -1,param_5,param_6
                                             ,param_7);
        return puVar8;
      }
      if (param_6 == (code *)0x0) {
        return puVar8;
      }
      puVar5 = (uint *)(lVar9 + (ulong)uVar1 * 0xc);
      puVar4 = puVar8;
LAB__text__004cc974:
      uVar3 = (*param_6)(param_5,puVar5[1],param_7);
      if ((uVar3 & 1) == 0) {
        puVar4 = (uint *)0x0;
      }
      return puVar4;
    }
  }
  return (uint *)0x0;
}


