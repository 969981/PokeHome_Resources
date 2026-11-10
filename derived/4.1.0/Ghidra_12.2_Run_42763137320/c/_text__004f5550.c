/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f5550; name: FUN_.text__004f5550
 */


void FUN__text__004f5550(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[0x10];
  while (lVar3 != 0) {
    (**(code **)(*param_1 + 0x138))(param_1,lVar3);
    FUN__text__004e9c00(lVar3);
    plVar1 = (long *)param_1[0x10];
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        param_1[0xf] = 0;
      }
      param_1[0x10] = lVar2;
      *plVar1 = 0;
    }
    FUN__text__004ea0c8(lVar3);
    lVar3 = param_1[0x10];
  }
  return;
}


