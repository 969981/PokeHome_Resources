/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00603450; name: FUN_.text__00603450
 */


uint FUN__text__00603450(long param_1,uint param_2,undefined1 *param_3,uint param_4,char param_5,
                        uint param_6)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  short local_44 [2];
  
  uVar3 = 0;
  if (((param_1 != 0) && (param_3 != (undefined1 *)0x0)) && (param_4 <= param_2)) {
    if (param_4 == 0) {
      uVar2 = 0;
    }
    else if (param_5 == '\x01') {
      uVar4 = (ulong)param_4;
      uVar3 = 0;
      do {
        local_44[0] = 0;
        uVar1 = FUN__text__00603904(*param_3,local_44,param_6 & 1);
        uVar2 = uVar3;
        if ((uVar1 & 1) != 0) {
          uVar2 = uVar3 + 1;
          *(short *)(param_1 + (ulong)uVar3 * 2) = local_44[0];
          if (local_44[0] == 0) {
            return uVar2;
          }
        }
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
        uVar3 = uVar2;
      } while (uVar4 != 0);
    }
    else if (param_5 == '\x03') {
      uVar4 = (ulong)param_4;
      uVar3 = 0;
      do {
        local_44[0] = 0;
        uVar1 = FUN__text__006040dc(*param_3,local_44,param_6 & 1);
        uVar2 = uVar3;
        if ((uVar1 & 1) != 0) {
          uVar2 = uVar3 + 1;
          *(short *)(param_1 + (ulong)uVar3 * 2) = local_44[0];
          if (local_44[0] == 0) {
            return uVar2;
          }
        }
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
        uVar3 = uVar2;
      } while (uVar4 != 0);
    }
    else if (param_5 == '\x05') {
      uVar2 = 0;
      uVar4 = (ulong)param_4;
      do {
        local_44[0] = 0;
        uVar1 = FUN__text__006035fc(*param_3,local_44,param_6 & 1);
        if ((uVar1 & 1) != 0) {
          uVar3 = uVar2 + 1;
          *(short *)(param_1 + (ulong)uVar2 * 2) = local_44[0];
          uVar2 = uVar3;
          if (local_44[0] == 0) {
            return uVar3;
          }
        }
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
      } while (uVar4 != 0);
    }
    else {
      uVar4 = (ulong)param_4;
      uVar3 = 0;
      do {
        local_44[0] = 0;
        uVar1 = FUN__text__006043e4(*param_3,local_44,param_6 & 1);
        uVar2 = uVar3;
        if ((uVar1 & 1) != 0) {
          uVar2 = uVar3 + 1;
          *(short *)(param_1 + (ulong)uVar3 * 2) = local_44[0];
          if (local_44[0] == 0) {
            return uVar2;
          }
        }
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
        uVar3 = uVar2;
      } while (uVar4 != 0);
    }
    uVar2 = uVar2 - (uVar2 == param_2);
    uVar3 = uVar2 + 1;
    *(undefined2 *)(param_1 + (ulong)uVar2 * 2) = 0;
  }
  return uVar3;
}


