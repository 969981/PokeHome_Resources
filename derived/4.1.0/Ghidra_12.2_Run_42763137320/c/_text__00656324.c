/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656324; name: FUN_.text__00656324
 */


undefined8 FUN__text__00656324(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[2] = param_3 + 1;
    lVar2 = FUN__text__006783d4();
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 5;
    }
  }
  else {
    uVar1 = param_3 + param_1[2] + 1;
    if ((ulong)param_1[2] < uVar1) {
      param_1[2] = uVar1;
      lVar2 = FUN__text__006783f4();
      if (lVar2 == 0) {
        FUN__text__006783e4(param_1[1]);
        return 5;
      }
      param_1[1] = lVar2;
    }
  }
  memcpy((void *)(lVar2 + *param_1),param_2,param_3);
  lVar2 = *param_1;
  *param_1 = lVar2 + param_3;
  *(undefined1 *)(param_1[1] + lVar2 + param_3) = 0;
  return 0;
}


