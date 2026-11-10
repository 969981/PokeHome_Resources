/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656c68; name: FUN_.text__00656c68
 */


void FUN__text__00656c68(long *param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && (param_1[3] != 0)) {
    lVar2 = *(long *)(param_2 + 0x10);
    if (*param_1 == param_2) {
      *param_1 = lVar2;
      if (lVar2 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = 0;
      }
    }
    else {
      *(long *)(*(long *)(param_2 + 8) + 0x10) = lVar2;
      if (*(long *)(param_2 + 0x10) == 0) {
        param_1[1] = *(long *)(param_2 + 8);
      }
      else {
        *(long *)(*(long *)(param_2 + 0x10) + 8) = *(long *)(param_2 + 8);
      }
    }
    param_1[3] = param_1[3] + -1;
    if (param_3[3] == 0) {
      *param_3 = param_2;
      *(undefined8 *)(param_2 + 8) = 0;
      plVar3 = param_3 + 1;
      *(undefined8 *)(*param_3 + 0x10) = 0;
    }
    else {
      plVar3 = (long *)(param_4 + 0x10);
      lVar2 = *plVar3;
      *(long *)(param_2 + 8) = param_4;
      *(long *)(param_2 + 0x10) = lVar2;
      plVar1 = param_3;
      if ((long *)*plVar3 != (long *)0x0) {
        plVar1 = (long *)*plVar3;
      }
      plVar1[1] = param_2;
    }
    *plVar3 = param_2;
    param_3[3] = param_3[3] + 1;
  }
  return;
}


