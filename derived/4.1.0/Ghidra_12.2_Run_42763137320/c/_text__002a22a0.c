/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a22a0; name: FUN_.text__002a22a0
 */


uint FUN__text__002a22a0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x3104) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3108) == 0) {
    lVar2 = 0;
    uVar1 = 0;
    do {
      if ((0xfffffe12 < *(int *)(lVar2 + 0x732914) - 0x1eeU) &&
         (*(int *)(param_1 + 0x54 + (ulong)(*(int *)(lVar2 + 0x732914) - 1) * 4) == 3)) {
        uVar1 = uVar1 + 1;
      }
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x25c);
  }
  else {
    lVar2 = 0;
    uVar1 = (uint)(*(int *)(param_1 + 0x54) == 3);
    lVar3 = param_1;
    do {
      lVar2 = lVar2 + 8;
      if (*(int *)(lVar3 + 0x58) == 3) {
        uVar1 = uVar1 + 1;
      }
      lVar3 = param_1 + lVar2;
      if (*(int *)(lVar3 + 0x54) == 3) {
        uVar1 = uVar1 + 1;
      }
    } while (lVar2 != 0x7b0);
  }
  return uVar1;
}


