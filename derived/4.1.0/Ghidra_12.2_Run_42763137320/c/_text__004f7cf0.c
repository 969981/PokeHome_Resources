/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f7cf0; name: FUN_.text__004f7cf0
 */


undefined8 * FUN__text__004f7cf0(void)

{
  long lVar1;
  ulong uVar2;
  
  if (DAT_00aeba58 == 0) {
    if (DAT_00aeba5c == 0) {
      if (DAT_00aeba50 == 0) {
        lVar1 = FUN__text__00400f80(0,4);
        if (lVar1 != 0) {
          if ((DAT_00aeba50 != 0) && (DAT_00aeba50 != lVar1)) {
            FUN__text__00400fc0(0);
          }
          goto LAB__text__004f7d84;
        }
      }
      else {
        lVar1 = FUN__text__00400fa0(0,DAT_00aeba50);
        if (lVar1 != 0) {
LAB__text__004f7d84:
          uVar2 = (ulong)DAT_00aeba58;
          DAT_00aeba58 = DAT_00aeba58 + 1;
          DAT_00aeba5c = 1;
          DAT_00aeba50 = lVar1;
          goto LAB__text__004f7d94;
        }
      }
    }
    else {
      DAT_00aeba58 = 1;
      if (DAT_00aeba50 != 0) {
        uVar2 = 0;
LAB__text__004f7d94:
        *(undefined4 *)(DAT_00aeba50 + uVar2 * 4) = 0xffffffff;
      }
    }
  }
  DAT_00aeba70 = 0;
  DAT_00aeba78 = 0;
  DAT_00aeba80 = DAT_00aeba80 & 0xc0 | 0x27;
  if (DAT_00aeba68 == 0) {
    if (DAT_00aeba6c == 0) {
      if (DAT_00aeba60 == 0) {
        lVar1 = FUN__text__00400f80(0,4);
        if (lVar1 == 0) goto LAB__text__004f7e5c;
        if ((DAT_00aeba60 != 0) && (DAT_00aeba60 != lVar1)) {
          FUN__text__00400fc0(0);
        }
      }
      else {
        lVar1 = FUN__text__00400fa0(0,DAT_00aeba60);
        if (lVar1 == 0) goto LAB__text__004f7e5c;
      }
      uVar2 = (ulong)DAT_00aeba68;
      DAT_00aeba68 = DAT_00aeba68 + 1;
      DAT_00aeba6c = 1;
      DAT_00aeba60 = lVar1;
    }
    else {
      DAT_00aeba68 = 1;
      if (DAT_00aeba60 == 0) goto LAB__text__004f7e5c;
      uVar2 = 0;
    }
    *(undefined4 *)(DAT_00aeba60 + uVar2 * 4) = 0xffffffff;
  }
LAB__text__004f7e5c:
  DAT_00aeba84 = 0;
  DAT_00aeba8c = 0;
  DAT_00aeba94 = 0;
  DAT_00aebaa0 = 0;
  DAT_00aebaa8 = 0;
  DAT_00aeba98 = DAT_00aeba98 & 7;
  return &DAT_00aeba50;
}


