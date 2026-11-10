/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038f800; name: FUN_.text__0038f800
 */


bool FUN__text__0038f800(undefined8 param_1,int param_2,ushort param_3)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (0x401 < param_3) {
    return false;
  }
  if (param_2 == 0) {
    uVar3 = FUN__text__005fdad0(param_3);
    sVar2 = FUN__text__00600400(uVar3,0);
    if (sVar2 != 0) {
      return true;
    }
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      if (uVar4 == 0x1f) break;
      uVar3 = FUN__text__005fdad0(param_3);
      sVar2 = FUN__text__00600400(uVar3,uVar4 + 1 & 0xff);
      uVar1 = uVar4 + 1;
    } while (sVar2 == 0);
  }
  else if (param_2 == 1) {
    uVar3 = FUN__text__005fdad0(param_3);
    sVar2 = FUN__text__006004e0(uVar3,0);
    if (sVar2 != 0) {
      return true;
    }
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      if (uVar4 == 0x1f) break;
      uVar3 = FUN__text__005fdad0(param_3);
      sVar2 = FUN__text__006004e0(uVar3,uVar4 + 1 & 0xff);
      uVar1 = uVar4 + 1;
    } while (sVar2 == 0);
  }
  else {
    if (param_2 != 2) {
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      FUN__text__005fdad0(param_3);
      return false;
    }
    uVar3 = FUN__text__005fdad0(param_3);
    sVar2 = FUN__text__006005c0(uVar3,0);
    if (sVar2 != 0) {
      return true;
    }
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      if (uVar4 == 0x1f) break;
      uVar3 = FUN__text__005fdad0(param_3);
      sVar2 = FUN__text__006005c0(uVar3,uVar4 + 1 & 0xff);
      uVar1 = uVar4 + 1;
    } while (sVar2 == 0);
  }
  return uVar4 < 0x1f;
}


