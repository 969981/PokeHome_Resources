/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af200; name: FUN_.text__004af200
 */


void FUN__text__004af200(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    uVar2 = (ulong)*param_1;
    if (*param_1 != 0) {
      uVar3 = 0;
      lVar1 = 8;
      do {
        if (*(long *)(*(long *)(param_1 + 2) + lVar1) != 0) {
          FUN__text__00400fc0(5);
          *(undefined8 *)(*(long *)(param_1 + 2) + lVar1) = 0;
          uVar2 = (ulong)*param_1;
        }
        uVar3 = uVar3 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar3 < uVar2);
      lVar1 = *(long *)(param_1 + 2);
    }
    FUN__text__00400fc0(5,lVar1);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = 0;
  return;
}


