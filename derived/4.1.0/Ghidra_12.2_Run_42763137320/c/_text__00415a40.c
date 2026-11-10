/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415a40; name: FUN_.text__00415a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00415a40(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(_DAT_008a4d88 + 1);
  if (uVar1 != 0) {
    plVar4 = (long *)*_DAT_008a4d88;
    if ((*(ushort *)((long)param_1 + 0xc) & 0xff) == 4) {
      lVar5 = (ulong)uVar1 << 3;
      do {
        lVar2 = *plVar4;
        if (((*(long *)(lVar2 + 0xe0) != 0) && (*(long *)(*(long *)(lVar2 + 0xe0) + 0x18) == lVar3))
           || ((*(long *)(lVar2 + 0xe8) != 0 && (*(long *)(*(long *)(lVar2 + 0xe8) + 0x18) == lVar3)
               ))) goto LAB__text__00415ad8;
        plVar4 = plVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    else {
      lVar5 = (ulong)uVar1 << 3;
      do {
        lVar2 = *plVar4;
        if ((*(long *)(lVar2 + 0xe0) != 0) && (*(long *)(*(long *)(lVar2 + 0xe0) + 0x18) == lVar3))
        {
LAB__text__00415ad8:
          if (*(int *)(lVar2 + 0xf8) == 0) {
            return lVar2;
          }
          *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) | 0x100;
          return lVar2;
        }
        plVar4 = plVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  lVar5 = *(long *)(lVar3 + 0x2a8);
  if ((lVar5 == 0) ||
     (((*(long *)(lVar5 + 0xe0) == 0 || (*(long *)(*(long *)(lVar5 + 0xe0) + 0x18) != lVar3)) &&
      (*(char *)((long)param_1 + 0xc) != '\x04')))) {
    return 0;
  }
  return lVar5;
}


