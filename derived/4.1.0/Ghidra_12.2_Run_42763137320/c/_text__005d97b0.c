/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d97b0; name: FUN_.text__005d97b0
 */


bool FUN__text__005d97b0(long *param_1,long param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  void *__src;
  ulong uVar4;
  short *psVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_1c18 [7160];
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return false;
  }
  uVar4 = (ulong)*(uint *)(lVar3 + 0x10);
  if (*(uint *)(lVar3 + 0x10) != 0) {
    lVar7 = 0;
    lVar9 = 0xffffffff;
    plVar8 = *(long **)(lVar3 + 0x20);
    do {
      if (*plVar8 == param_2) {
        if (lVar9 == 0) {
          return false;
        }
        iVar2 = (int)((ulong)lVar7 >> 0x20);
        psVar5 = (short *)(*(long *)(lVar3 + 0x18) + (long)iVar2 * 0x18);
        __src = *(void **)(psVar5 + 8);
        if (*psVar5 == 0) {
          memcpy(param_3,__src,(ulong)*(uint *)(psVar5 + 2));
        }
        else {
          uVar6 = (uint)*(ushort *)(*(long *)(lVar3 + 0x18) + (long)iVar2 * 0x18 + 2);
          if (uVar6 - 1 < 2) {
            iVar2 = FUN__text__005de570(__src,param_3,(ulong)*(uint *)(psVar5 + 4));
            return 0 < iVar2;
          }
          if (uVar6 == 0) {
            bVar1 = nn::util::DecompressZlib
                              (param_3,(ulong)*(uint *)(psVar5 + 2),__src,
                               (ulong)*(uint *)(psVar5 + 4),auStack_1c18,0x1bf8);
            return (bool)(bVar1 & 1);
          }
        }
        return true;
      }
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + 0x100000000;
      uVar4 = uVar4 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar4 != 0);
  }
  return false;
}


