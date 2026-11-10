/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042eae0; name: FUN_.text__0042eae0
 */


void FUN__text__0042eae0(long *param_1)

{
  long *plVar1;
  ushort *puVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar1 != (long *)0x0) {
    for (lVar3 = *plVar1; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
      puVar2 = *(ushort **)(lVar3 + 0x20);
      if ((puVar2 != (ushort *)0x0) && ((ulong)*puVar2 != 0)) {
        lVar4 = (ulong)*puVar2 << 1;
        plVar1 = (long *)((long)puVar2 + ((ulong)((int)lVar4 + 9) & 0x3fff8) + 8);
        do {
          if (*plVar1 != 0) {
            FUN__text__0042f5a0(DAT_00ae9a60,*plVar1,lVar3);
            *plVar1 = 0;
            (**(code **)(**(long **)(lVar3 + 0x18) + 0x18))();
          }
          plVar1 = plVar1 + 2;
          lVar4 = lVar4 + -2;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


