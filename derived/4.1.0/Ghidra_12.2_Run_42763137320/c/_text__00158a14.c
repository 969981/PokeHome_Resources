/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00158a14; name: FUN_.text__00158a14
 */


void FUN__text__00158a14(uint param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar5 = (ulong)param_3;
    do {
      param_1 = FUN__text__001589c8(param_1,param_2);
      if (((param_1 & 1) == 0) &&
         (param_1 = FUN__text__00158b08(param_1,param_2), (param_1 & 1) == 0)) {
        uVar2 = (uint)*param_2;
        uVar4 = (ulong)(uVar2 - 0xf5);
        if (uVar2 - 0xf5 < 0x37) {
          if ((1L << (uVar4 & 0x3f) & 0x40004040001000U) != 0) goto LAB__text__00158a6c;
          if (uVar4 == 0) {
            lVar3 = 0;
          }
          else {
            if (uVar4 != 10) goto LAB__text__00158aa8;
            lVar3 = 1;
          }
LAB__text__00158ae8:
          uVar1 = *(ushort *)(lVar3 * 4 + 0x725172);
        }
        else {
LAB__text__00158aa8:
          if ((0x3c < uVar2 - 0x142) ||
             ((1L << ((ulong)(uVar2 - 0x142) & 0x3f) & 0x1000220080000801U) == 0)) {
            if (uVar2 == 0x451) {
              lVar3 = 2;
              goto LAB__text__00158ae8;
            }
            goto LAB__text__00158a74;
          }
LAB__text__00158a6c:
          uVar1 = *param_2 - 1;
        }
        *param_2 = uVar1;
      }
LAB__text__00158a74:
      param_2 = param_2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


