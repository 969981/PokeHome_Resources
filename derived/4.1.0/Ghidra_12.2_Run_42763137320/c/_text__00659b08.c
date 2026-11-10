/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659b08; name: FUN_.text__00659b08
 */


ulong FUN__text__00659b08(byte param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = FUN__text__006783d4(0x20);
    *param_2 = lVar2;
    if (lVar2 == 0) goto LAB__text__00659b94;
    lVar3 = 0;
    param_2[1] = 0;
    param_2[2] = 0x20;
  }
  else {
    lVar3 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= lVar3 + 1U) {
      if (0 < (long)uVar1) {
        lVar2 = FUN__text__006783f4(lVar2,uVar1 << 1);
        if (lVar2 != 0) {
          lVar3 = param_2[1];
          *param_2 = lVar2;
          param_2[2] = uVar1 << 1;
          goto LAB__text__00659b7c;
        }
      }
LAB__text__00659b94:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
  }
LAB__text__00659b7c:
  *(byte *)(lVar2 + lVar3) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulong)param_1;
}


