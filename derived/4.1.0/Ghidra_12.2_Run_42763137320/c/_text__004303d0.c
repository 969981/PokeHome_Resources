/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004303d0; name: FUN_.text__004303d0
 */


void FUN__text__004303d0(long param_1)

{
  ushort *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = *(ushort **)(param_1 + 0x20);
  if ((puVar1 != (ushort *)0x0) && ((ulong)*puVar1 != 0)) {
    lVar2 = (ulong)*puVar1 << 1;
    plVar3 = (long *)((long)puVar1 + ((ulong)((int)lVar2 + 9) & 0x3fff8) + 8);
    do {
      if (*plVar3 != 0) {
        FUN__text__0042f5a0(DAT_00ae9a60,*plVar3,param_1);
        *plVar3 = 0;
        (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
      }
      plVar3 = plVar3 + 2;
      lVar2 = lVar2 + -2;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN__text__00400fc0(0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


