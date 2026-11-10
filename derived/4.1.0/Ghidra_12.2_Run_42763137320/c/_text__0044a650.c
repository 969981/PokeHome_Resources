/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a650; name: FUN_.text__0044a650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0044a650(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if ((*(long **)(param_1 + 0x10) == (long *)0x0) &&
     (plVar5 = DAT_00aea688, DAT_00aea688 == (long *)0x0)) {
    plVar5 = (long *)FUN__text__00400f80(4,0xf0);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar3 = DAT_00ae9698;
      bVar4 = DAT_00ae96a0 != 0;
      plVar1 = plVar5;
      plVar5[3] = (long)DAT_00ae9698;
      DAT_00ae9698 = plVar1;
      lVar2 = _DAT_008a3f88;
      DAT_00ae9690 = DAT_00ae9690 + 1;
      plVar1 = (long *)&DAT_00ae9690;
      if (bVar4) {
        plVar1 = plVar3;
      }
      plVar1[2] = (long)plVar5;
      plVar5[8] = 0;
      plVar5[9] = 0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      *(undefined2 *)(plVar5 + 0x1c) = 0x101;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      *plVar5 = lVar2 + 0x10;
      plVar5[0x1a] = 0;
      plVar5[0x1b] = 0;
    }
    DAT_00aea688 = plVar5;
  }
  return (int)plVar5[0x1b] * (uint)*(ushort *)(lVar6 + 0x38);
}


