/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f2d8; name: FUN_.text__0067f2d8
 */


int FUN__text__0067f2d8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1a8);
  if (uVar1 == 0) {
    uVar5 = 1;
    uVar6 = 0x720899;
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if (iVar2 < (int)uVar1) {
      uVar5 = 1;
      uVar6 = 0x71b2cc;
    }
    else {
      lVar4 = FUN__text__00680914(param_1,uVar1);
      if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0xe4) >> 1 & 1) != 0)) ||
         (iVar2 = *(int *)(lVar4 + 0xdc), iVar2 == 5)) {
        lVar4 = FUN__text__00680914(param_1,uVar1);
        if (lVar4 == 0) {
          return -0x68;
        }
        if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
          return -0x68;
        }
        uVar5 = 5;
        uVar6 = 0x712220;
      }
      else if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
        if (((uVar1 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) == 0) {
          if (iVar2 == 3) {
            return -0x68;
          }
          if (iVar2 == 2) {
            return 0;
          }
          uVar5 = 1;
          uVar6 = 0x717094;
        }
        else {
          if (iVar2 == 3) {
            return -0x68;
          }
          if (iVar2 != 4) {
            return 0;
          }
          uVar5 = 1;
          uVar6 = 0x718f3f;
        }
      }
      else {
        uVar5 = 5;
        uVar6 = 0x70cb45;
      }
    }
  }
  iVar3 = FUN__text__00679ef8(param_1,*(undefined4 *)(param_1 + 0x93c),uVar5,uVar6);
  iVar2 = -0x68;
  if (iVar3 < -900) {
    iVar2 = iVar3;
  }
  return iVar2;
}


