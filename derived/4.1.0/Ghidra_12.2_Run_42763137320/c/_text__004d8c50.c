/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8c50; name: FUN_.text__004d8c50
 */


void FUN__text__004d8c50(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 1) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 1) << 5;
      lVar1 = lVar1 + 8;
      do {
        FUN__text__004d8c20(lVar1);
        lVar2 = lVar2 + -0x20;
        lVar1 = lVar1 + 0x20;
      } while (lVar2 != 0);
      lVar1 = *param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,lVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


