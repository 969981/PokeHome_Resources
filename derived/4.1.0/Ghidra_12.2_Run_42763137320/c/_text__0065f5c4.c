/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f5c4; name: FUN_.text__0065f5c4
 */


undefined8 FUN__text__0065f5c4(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[2] & param_2 & *param_1;
  uVar1 = (uint)uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 6 & 1) == 0) {
      if ((uVar1 >> 1 & 1) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar2 & 1) == 0) {
              uVar3 = 0;
              param_1[1] = 0x40000000;
            }
            else {
              uVar3 = 1;
              param_1[1] = 1;
            }
            goto LAB__text__0065f628;
          }
          uVar2 = 0x20;
        }
        else {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0x40;
    }
  }
  else {
    uVar2 = 4;
  }
  param_1[1] = uVar2;
  uVar3 = 1;
LAB__text__0065f628:
  param_1[2] = 0;
  return uVar3;
}


