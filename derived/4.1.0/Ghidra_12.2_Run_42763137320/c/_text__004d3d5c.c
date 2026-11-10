/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3d5c; name: FUN_.text__004d3d5c
 */


void FUN__text__004d3d5c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    FUN__text__00400fc0(5);
  }
  lVar2 = param_2[2];
  lVar1 = param_2[1];
  *param_1 = *param_2;
  *(int *)(param_1 + 2) = (int)lVar2;
  *(int *)(param_1 + 1) = (int)lVar1;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x60) != 0) {
      *(undefined4 *)(lVar2 + 0x68) = 0;
      (**(code **)(**(long **)(lVar2 + 0x58) + 0x18))();
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined4 *)(lVar2 + 0x6c) = 0;
    }
    if ((*(long *)(lVar2 + 0x80) != 0) && (*(char *)(lVar2 + 0x88) != '\0')) {
      (**(code **)(**(long **)(lVar2 + 0x78) + 0x18))();
      *(undefined1 *)(lVar2 + 0x88) = 0;
    }
    *(undefined8 *)(lVar2 + 0x80) = 0;
    FUN__text__00400fc0(0,lVar2);
  }
  param_1[3] = param_2[3];
  param_2[3] = 0;
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN__text__004d7c0c(lVar2);
    FUN__text__00400fc0(0xe,lVar2);
  }
  *(char *)(param_1 + 4) = (char)param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}


