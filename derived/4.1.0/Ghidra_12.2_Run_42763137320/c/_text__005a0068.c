/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0068; name: FUN_.text__005a0068
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a0068(long param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  
  piVar2 = _DAT_008a0300;
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar1 = *_DAT_008a0300;
    if (*(int *)(param_1 + 0x104) != iVar1) {
      *(undefined1 *)(param_1 + 0x109) = 0;
      FUN__text__005a0558(*(long *)(param_1 + 0x58) + (long)iVar1 * 0x168);
      lVar4 = *(long *)(param_1 + 0x58) + (long)*piVar2 * 0x168;
      FUN__text__006ec8e0(lVar4);
      (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
      if (*(int *)(lVar4 + 0x160) != 0) {
        FUN__text__006eddd4(lVar4);
        *(undefined4 *)(lVar4 + 0x160) = 0;
      }
      FUN__text__006ec93c(lVar4);
      pcVar3 = *(code **)(param_1 + 0x88);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(long *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        (*pcVar3)(param_1 + 0xa0);
      }
      *(undefined1 *)(param_1 + 0x109) = 1;
    }
  }
  return;
}


