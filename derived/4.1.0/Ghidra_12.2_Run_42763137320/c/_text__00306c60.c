/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306c60; name: FUN_.text__00306c60
 */


undefined8 FUN__text__00306c60(undefined8 param_1,int param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN__text__005fe794(param_2,param_3,0);
  uVar3 = 0;
  if ((param_2 - 1U < 0x382) && ((uVar2 & 1) != 0)) {
    if ((param_3 & 0xffff) != 0) {
      if (param_2 < 0x1e3) {
        if (param_2 < 0x80) {
          if (param_2 < 100) {
            if (param_2 == 0x3a) {
              if ((param_3 & 0xffff) == 1) {
                return 0;
              }
            }
            else if ((param_2 == 0x3b) && ((param_3 - 1 & 0xffff) < 2)) {
              return 0;
            }
          }
          else if (param_2 == 100) {
            if ((param_3 & 0xffff) == 1) {
              return 0;
            }
          }
          else if ((param_2 == 0x65) && ((param_3 - 1 & 0xffff) < 2)) {
            return 0;
          }
        }
        else if (param_2 < 0xc2) {
          if (param_2 == 0x80) {
            if ((param_3 - 1 & 0xffff) < 3) {
              return 0;
            }
          }
          else if ((param_2 == 0x9d) && ((param_3 & 0xffff) == 1)) {
            return 0;
          }
        }
        else if (param_2 == 0xc2) {
          if ((param_3 & 0xffff) == 1) {
            return 0;
          }
        }
        else if (param_2 == 0xd3) {
          if ((param_3 & 0xffff) == 1) {
            return 0;
          }
        }
        else if ((param_2 == 0xd7) && ((param_3 & 0xffff) == 1)) {
          return 0;
        }
      }
      else if (param_2 < 0x274) {
        if (param_2 - 0x1e3U < 0x15) {
                    /* WARNING: Could not emulate address calculation at 0x00306dcc */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)(&UNK__text__00306dd8 +
                            (ulong)*(byte *)((ulong)(param_2 - 0x1e3U) + 0x733c30) * 4))();
          return uVar3;
        }
        if (param_2 - 0x225U < 0x17) {
                    /* WARNING: Could not emulate address calculation at 0x00306cd8 */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)(&UNK__text__00306ce4 +
                            (ulong)*(byte *)((ulong)(param_2 - 0x225U) + 0x733c45) * 4))();
          return uVar3;
        }
      }
      else {
        if (param_2 - 0x2c1U < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x00306d60 */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)(&UNK__text__00306d6c +
                            (ulong)*(byte *)((ulong)(param_2 - 0x2c1U) + 0x733c5c) * 4))(0);
          return uVar3;
        }
        if ((param_2 == 0x274) && ((param_3 & 0xffff) == 1)) {
          return 0;
        }
      }
    }
    lVar4 = 0;
    do {
      if (*(int *)(lVar4 + 0x733c7c) == param_2) {
        return 0;
      }
      bVar1 = lVar4 != 0x3a4;
      lVar4 = lVar4 + 4;
      uVar3 = 1;
    } while (bVar1);
  }
  return uVar3;
}


