/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00321b00; name: FUN_.text__00321b00
 */


bool FUN__text__00321b00(uint *param_1,uint param_2,byte param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  bVar1 = param_3 & 0xfe;
  *param_1 = 0;
  if (bVar1 == 0x2a) {
    uVar4 = 2;
  }
  else if (bVar1 == 0x2c) {
    uVar4 = 3;
  }
  else if (bVar1 == 0x30) {
    uVar4 = 4;
  }
  else if (param_3 == 0x2f) {
    uVar4 = 5;
  }
  else {
    if (bVar1 != 0x32) {
      bVar2 = param_3 == 0x34;
      uVar4 = 7;
      if (!bVar2) {
        uVar4 = param_2;
      }
      bVar3 = ((int)param_2 < 3 || 2 < (int)uVar4) && bVar2;
      if ((int)param_2 >= 3 && 2 >= (int)uVar4 || !bVar2) {
        return bVar3;
      }
      goto LAB__text__00321b70;
    }
    uVar4 = 6;
  }
  bVar3 = (int)param_2 < 3 || 2 < uVar4;
  if ((int)param_2 >= 3 && 2 >= uVar4) {
    return bVar3;
  }
LAB__text__00321b70:
  *param_1 = uVar4;
  return bVar3;
}


