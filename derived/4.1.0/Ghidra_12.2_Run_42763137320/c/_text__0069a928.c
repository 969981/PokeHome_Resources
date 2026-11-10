/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069a928; name: FUN_.text__0069a928
 */


void FUN__text__0069a928(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)param_2 < 0x1c) {
    uVar2 = param_2 + 3;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar2 = (int)uVar2 >> 2;
    if (uVar2 < 2) {
      uVar2 = param_2 & 3;
      if (-1 < (int)-param_2) {
        uVar2 = -(-param_2 & 3);
      }
      if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0069a96c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__0069a978 + (ulong)*(byte *)((ulong)uVar2 + 0x765f5b) * 4))();
        return;
      }
    }
    else if (uVar2 < 7) {
      uVar3 = *(uint *)(param_1 + 0x10);
      if ((uVar3 >> 0x10 & 1) == 0) {
        if ((uVar3 >> 0x11 & 1) != 0) {
          uVar4 = uVar2 - 2;
          param_2 = param_2 + uVar2 * -4;
          lVar1 = *(long *)(param_1 + 0x18) +
                  (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                  ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                  ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                  ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) +
                  (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14;
          uVar2 = *(uint *)(lVar1 + (ulong)(uVar4 % 5) * 4 + 0x60);
          if (param_2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0069aa54 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__0069aa60 + (ulong)*(byte *)((ulong)param_2 + 0x765f57) * 4))();
            return;
          }
          if (uVar4 < 5) {
            *(uint *)(lVar1 + (ulong)uVar4 * 4 + 0x60) =
                 (uVar2 >> 0x10 & 0xff) << 0x10 | uVar2 & 0xff000000 | (uVar2 >> 8 & 0xff) << 8 |
                 uVar2 & 0xff;
          }
        }
      }
      else {
        uVar2 = uVar2 - 2;
        lVar1 = *(long *)(param_1 + 0x18) +
                (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) +
                (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14;
        uVar4 = *(uint *)(lVar1 + (ulong)(uVar2 % 5) * 4 + 4);
        uVar3 = param_2 & 3;
        if (-1 < (int)-param_2) {
          uVar3 = -(-param_2 & 3);
        }
        if (uVar3 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0069ab24 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__0069ab30 + (ulong)*(byte *)((ulong)uVar3 + 0x765f53) * 4))();
          return;
        }
        if (uVar2 < 5) {
          *(uint *)(lVar1 + (ulong)uVar2 * 4 + 4) =
               (uVar4 >> 0x10 & 0xff) << 0x10 | uVar4 & 0xff000000 | (uVar4 >> 8 & 0xff) << 8 |
               uVar4 & 0xff;
          return;
        }
      }
    }
  }
  return;
}


