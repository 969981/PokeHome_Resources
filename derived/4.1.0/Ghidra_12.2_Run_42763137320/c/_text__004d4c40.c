/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d4c40; name: FUN_.text__004d4c40
 */


int FUN__text__004d4c40(long param_1,uint param_2,long *param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  undefined1 auStack_68 [8];
  
  lVar3 = param_1 + (ulong)param_2 * 0x30;
  uVar8 = (ulong)param_2;
  plVar1 = (long *)(lVar3 + 0xa0);
  if (*(int *)(lVar3 + 0xa8) != 0) {
    iVar2 = *(int *)(lVar3 + 0xa8) + -1;
    do {
      FUN__text__004d0394(plVar1,iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  lVar9 = param_1 + uVar8 * 0x30;
  puVar10 = (uint *)(lVar9 + 0xb8);
  plVar6 = (long *)(lVar9 + 0xb0);
  lVar9 = *plVar6;
  if (*puVar10 != 0) {
    lVar7 = (ulong)*puVar10 * 0x30;
    do {
      FUN__text__004d3ca8(lVar9);
      lVar9 = lVar9 + 0x30;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
    lVar9 = *plVar6;
  }
  *puVar10 = 0;
  lVar7 = param_1 + uVar8 * 0x30;
  *(undefined8 *)(lVar7 + 0xc0) = 0x1000000ffffffff;
  if (lVar9 != 0) {
    FUN__text__00400fc0(0,lVar9);
    *plVar6 = 0;
    *(undefined4 *)(param_1 + uVar8 * 0x30 + 0xbc) = 0;
  }
  if (*plVar1 != 0) {
    *(undefined4 *)(lVar3 + 0xa8) = 0;
    FUN__text__00400fc0(0);
    *plVar1 = 0;
    *(undefined4 *)(lVar3 + 0xac) = 0;
  }
  if ((int)param_3[1] == 0) {
    iVar2 = 1;
  }
  else {
    lVar9 = *param_3;
    do {
      iVar2 = FUN__text__004d0b50(plVar1,lVar9,auStack_68,param_4 & 1,param_2,param_1,0);
      if (iVar2 != 1) break;
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != *param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30);
    if (iVar2 != 1) {
      if (*(int *)(lVar3 + 0xa8) != 0) {
        iVar4 = *(int *)(lVar3 + 0xa8) + -1;
        do {
          FUN__text__004d0394(plVar1,iVar4);
          iVar4 = iVar4 + -1;
        } while (iVar4 != -1);
      }
      lVar9 = *plVar6;
      if (*puVar10 != 0) {
        lVar5 = (ulong)*puVar10 * 0x30;
        do {
          FUN__text__004d3ca8(lVar9);
          lVar9 = lVar9 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        lVar9 = *plVar6;
      }
      *puVar10 = 0;
      *(undefined4 *)(lVar7 + 0xc0) = 0xffffffff;
      *(undefined1 *)(lVar7 + 0xc4) = 0;
      *(undefined1 *)(lVar7 + 0xc5) = 0;
      *(undefined1 *)(lVar7 + 0xc6) = 0;
      *(undefined1 *)(lVar7 + 199) = 1;
      if (lVar9 != 0) {
        FUN__text__00400fc0(0,lVar9);
        *plVar6 = 0;
        *(undefined4 *)(param_1 + uVar8 * 0x30 + 0xbc) = 0;
      }
      if (*plVar1 != 0) {
        *(undefined4 *)(lVar3 + 0xa8) = 0;
        FUN__text__00400fc0(0);
        *plVar1 = 0;
        *(undefined4 *)(lVar3 + 0xac) = 0;
      }
    }
  }
  return iVar2;
}


