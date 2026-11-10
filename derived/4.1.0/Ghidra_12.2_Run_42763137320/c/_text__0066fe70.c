/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066fe70; name: FUN_.text__0066fe70
 */


void FUN__text__0066fe70(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0xc80 + lVar2));
    *(undefined8 *)(param_1 + 0xc80 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x1f0);
  bVar1 = *(byte *)(param_1 + 0xf68);
  if ((bVar1 >> 1 & 1) != 0) {
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf50));
    bVar1 = *(byte *)(param_1 + 0xf68) & 0xfd;
    *(byte *)(param_1 + 0xf68) = bVar1;
  }
  *(undefined8 *)(param_1 + 0xf50) = 0;
  if ((bVar1 & 1) != 0) {
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf48));
    *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
  }
  *(undefined8 *)(param_1 + 0xf48) = 0;
  FUN__text__00656d18(param_1 + 0x820);
  return;
}


