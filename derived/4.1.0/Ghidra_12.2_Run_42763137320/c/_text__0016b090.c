/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b090; name: FUN_.text__0016b090
 */


ulong FUN__text__0016b090(int param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x274) {
    if (param_1 < 0x1e3) {
      if (param_1 < 0x65) {
        if (param_1 == 0x3a) goto LAB__text__0016b1c8;
        if (param_1 != 0x3b) {
          if (param_1 != 100) {
            return 0;
          }
          goto LAB__text__0016b1c8;
        }
      }
      else {
        if (0xd2 < param_1) {
          if ((param_1 != 0xd3) && (param_1 != 0xd7)) {
            return 0;
          }
LAB__text__0016b1c8:
          return (ulong)((param_2 & 0xffff) == 1);
        }
        if (param_1 != 0x65) {
          if (param_1 != 0x9d) {
            return 0;
          }
          goto LAB__text__0016b1c8;
        }
      }
      uVar1 = (ulong)((param_2 & 0xffff) - 1 < 2);
    }
    else if (param_1 < 0x225) {
      if (((param_1 == 0x1e3) || (param_1 == 0x1e4)) || (param_1 == 0x1f7))
      goto LAB__text__0016b1c8;
    }
    else if (param_1 - 0x225U < 0x17) {
                    /* WARNING: Could not emulate address calculation at 0x0016b120 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0016b12c +
                        (ulong)*(byte *)((ulong)(param_1 - 0x225U) + 0x72545d) * 4))();
      return uVar1;
    }
  }
  else {
    if (param_1 - 899U < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0016b0e8 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0016b0f4 +
                        (ulong)*(byte *)((ulong)(param_1 - 899U) + 0x725488) * 4))();
      return uVar1;
    }
    if (param_1 - 0x2c1U < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x0016b150 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_1 - 0x2c1U) + 0x725474) * 4 + 0x16b178))(0);
      return uVar1;
    }
    if (param_1 == 0x274) goto LAB__text__0016b1c8;
  }
  return uVar1;
}


