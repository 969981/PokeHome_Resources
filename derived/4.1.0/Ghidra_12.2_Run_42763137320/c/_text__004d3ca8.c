/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3ca8; name: FUN_.text__004d3ca8
 */


void FUN__text__004d3ca8(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN__text__00400fc0(5);
    *param_1 = 0;
    *(undefined2 *)((long)param_1 + 0x12) = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x60) != 0) {
      *(undefined4 *)(lVar1 + 0x68) = 0;
      (**(code **)(**(long **)(lVar1 + 0x58) + 0x18))();
      *(undefined8 *)(lVar1 + 0x60) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0;
    }
    if ((*(long *)(lVar1 + 0x80) != 0) && (*(char *)(lVar1 + 0x88) != '\0')) {
      (**(code **)(**(long **)(lVar1 + 0x78) + 0x18))();
      *(undefined1 *)(lVar1 + 0x88) = 0;
    }
    *(undefined8 *)(lVar1 + 0x80) = 0;
    FUN__text__00400fc0(0,lVar1);
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN__text__004d7c0c(lVar1);
    FUN__text__00400fc0(0xe,lVar1);
    param_1[5] = 0;
  }
  return;
}


