/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed7ec; name: FUN_.text__004ed7ec
 */


undefined8 FUN__text__004ed7ec(long param_1,int param_2,int param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 == 0) || (param_3 + param_2 < *(int *)(lVar2 + 0x10))) {
    *param_4 = 0;
    return 0x11;
  }
  *param_4 = lVar2;
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0x2d;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
  if (*plVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *plVar1 = 0;
    return 0x2d;
  }
  *(long *)(param_1 + 0x10) = *plVar1;
  *plVar1 = 0;
  return 0x2d;
}


