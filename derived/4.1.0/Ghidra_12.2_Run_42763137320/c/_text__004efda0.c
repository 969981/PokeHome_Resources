/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004efda0; name: FUN_.text__004efda0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004efda0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if ((*(uint *)(param_1 + 0x120) == 0) || (*(uint *)(param_1 + 0xf8) == 0)) {
    iVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x118);
    iVar2 = 0;
    lVar4 = lVar3 + (ulong)*(uint *)(param_1 + 0x120) * 0x1c;
    do {
      plVar5 = (long *)(*(long *)(param_1 + 0xf0) + 8);
      lVar6 = (ulong)*(uint *)(param_1 + 0xf8) << 4;
      do {
        if ((int)plVar5[-1] == *(int *)(lVar3 + 4)) {
          if ((lVar6 != 0) && (lVar6 = *plVar5, lVar6 != 0)) {
            uVar1 = *(int *)(lVar3 + 0xc) - param_2;
            if ((*(ushort *)(lVar6 + 0xc) & 0x7c) == 4) {
              if ((((*(ushort *)(lVar6 + 0xc) >> 1 & 1) == 0) || ((int)uVar1 < 0)) ||
                 (iVar7 = 0, *(int *)(lVar3 + 0x18) != 0)) {
                iVar7 = *(int *)(lVar6 + 0x24);
              }
            }
            else {
              iVar7 = 0;
            }
            if (*(short *)(lVar6 + 0x1a) == 0x11) {
              if (*(int *)(lVar3 + 0x18) == 0) {
                iVar7 = (*_DAT_008a4b70 & 0xffff) + iVar7;
              }
              else {
                iVar7 = (*_DAT_008a4b70 & 0xffff) * 4 + iVar7;
              }
            }
            iVar7 = iVar7 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
            if (iVar2 <= iVar7) {
              iVar2 = iVar7;
            }
          }
          break;
        }
        plVar5 = plVar5 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
      lVar3 = lVar3 + 0x1c;
    } while (lVar3 != lVar4);
  }
  return iVar2;
}


