/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e4338; name: FUN_.text__002e4338
 */


long FUN__text__002e4338(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  
  if (5 < param_2) {
    return 6;
  }
  if (5 < param_3) {
    return 6;
  }
  if (0x1f < param_4) {
    return 6;
  }
  if (0x1d < param_5) {
    return 6;
  }
  uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x56c);
  if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x56e);
    if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
      lVar2 = 1;
    }
    else {
      uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x570);
      if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
        lVar2 = 2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x572);
        if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
          lVar2 = 3;
        }
        else {
          uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x574);
          if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
            lVar2 = 4;
          }
          else {
            uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x576);
            lVar2 = 6;
            if ((param_4 != uVar1 >> 8) || ((uVar1 & 0xff) != param_5)) goto LAB__text__002e4464;
            lVar2 = 5;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_1 + (ulong)param_2 * 0xc + lVar2 * 2 + 0x56c) = 0xffff;
LAB__text__002e4464:
  *(short *)(param_1 + (ulong)param_2 * 0xc + (ulong)param_3 * 2 + 0x56c) =
       (short)param_5 + (short)param_4 * 0x100;
  return lVar2;
}


