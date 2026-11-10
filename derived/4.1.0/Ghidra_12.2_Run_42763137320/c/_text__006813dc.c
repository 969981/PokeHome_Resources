/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006813dc; name: FUN_.text__006813dc
 */


undefined8 FUN__text__006813dc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_20 [2];
  
  local_20[1] = 0;
  if (param_2 < 0x1f) {
    lVar2 = 1;
    local_20[0] = (ulong)(byte)((byte)param_2 | 0x20);
  }
  else {
    param_2 = param_2 - 0x1f;
    if (param_2 < 0x80) {
      pbVar4 = (byte *)((ulong)local_20 | 1);
      lVar2 = 2;
    }
    else {
      uVar7 = 0;
      uVar6 = param_2;
      do {
        uVar3 = uVar7;
        uVar8 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
        uVar7 = uVar3 + 1;
      } while (uVar8 != 0);
      if (0xe < uVar7) {
        return 0xfffffdf5;
      }
      lVar2 = uVar3 + 3;
      pbVar4 = (byte *)((ulong)local_20 | 1);
      pbVar5 = pbVar4;
      if (0x7f < param_2) {
        do {
          pbVar4 = pbVar5 + 1;
          *pbVar5 = (byte)param_2 | 0x80;
          uVar7 = param_2 >> 0xe;
          param_2 = param_2 >> 7;
          pbVar5 = pbVar4;
        } while (uVar7 != 0);
      }
    }
    local_20[0] = 0x3f;
    *pbVar4 = (byte)param_2;
  }
  uVar1 = FUN__text__006834ec(param_1,local_20,lVar2);
  return uVar1;
}


