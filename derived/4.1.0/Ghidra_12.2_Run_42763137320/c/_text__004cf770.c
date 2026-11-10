/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cf770; name: FUN_.text__004cf770
 */


void FUN__text__004cf770(long param_1,uint param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + (ulong)param_2 * 8 + 0x28) != '\0')) {
    plVar2 = *(long **)(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(lVar1 + (ulong)param_2 * 8 + 0x24) = param_3;
    *(byte *)(*(long *)(param_1 + 8) + (ulong)param_2 * 8 + 0x29) = param_4 & 1;
    plVar2 = *(long **)(param_1 + 0x10);
  }
  if ((plVar2 != (long *)0x0) && ((int)plVar2[1] != 0)) {
    lVar1 = *plVar2;
    lVar3 = (ulong)param_2 * 8;
    lVar4 = lVar1;
    do {
      if (*(char *)(*(long *)(lVar1 + 8) + (ulong)param_2 * 8 + 0x28) == '\0') {
        *(undefined4 *)(*(long *)(lVar1 + 8) + lVar3 + 0x24) = param_3;
        *(byte *)(*(long *)(lVar1 + 8) + lVar3 + 0x29) = param_4 & 1;
        plVar2 = *(long **)(param_1 + 0x10);
        lVar4 = *plVar2;
      }
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != lVar4 + (ulong)*(uint *)(plVar2 + 1) * 0x10);
  }
  return;
}


