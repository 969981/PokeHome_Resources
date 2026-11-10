/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006814c8; name: FUN_.text__006814c8
 */


long FUN__text__006814c8(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5,
                        int param_6)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    FUN__text__00683180(*(undefined8 *)(param_1 + 0xb0));
    FUN__text__00683180(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *param_3 = 0;
    lVar1 = param_4;
    if (param_5 != 0) {
      lVar1 = param_4 + param_5;
      do {
        if (*(uint *)(param_1 + 0xe4) < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x00681578 */
                    /* WARNING: Treating indirect jump as call */
          lVar1 = (*(code *)(&UNK__text__00681584 +
                            (ulong)*(ushort *)((ulong)*(uint *)(param_1 + 0xe4) * 2 + 0x76193e) * 4)
                  )();
          return lVar1;
        }
      } while (param_4 != lVar1);
    }
    if (param_6 != 0) {
      if (1 < *(int *)(param_1 + 0xe4) - 1U) {
        *(undefined1 *)(param_1 + 0x3c) = 1;
        return -0x20b;
      }
      *param_3 = *param_3 | 1;
    }
    lVar1 = lVar1 - param_4;
  }
  else {
    lVar1 = -0x20b;
  }
  return lVar1;
}


