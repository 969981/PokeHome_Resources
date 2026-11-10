/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00398dd0; name: FUN_.text__00398dd0
 */


bool FUN__text__00398dd0(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if (bVar1 == *param_2) {
    if (bVar1 == 5) {
      if ((param_1[1] != 3) && (9 < param_1[1] - 8)) {
        return false;
      }
      if ((param_2[1] != 3) && (9 < param_2[1] - 8)) {
        return false;
      }
    }
    else {
      uVar2 = (uint)bVar1;
      if ((9 < uVar2 - 8) && (1 < uVar2 - 3)) {
        return false;
      }
      if ((9 < uVar2 - 8) && (1 < uVar2 - 3)) {
        return false;
      }
      if (uVar2 != 5) {
        if (uVar2 != 4) {
          return true;
        }
        if (param_1[2] == 0 && param_2[2] == 0) {
          return true;
        }
        goto LAB__text__00398e64;
      }
    }
    if (param_1[1] == param_2[1]) {
      if (param_1[2] == 0 && param_2[2] == 0) {
        return true;
      }
LAB__text__00398e64:
      return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
    }
  }
  return false;
}


