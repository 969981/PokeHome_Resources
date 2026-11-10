/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00682f54; name: FUN_.text__00682f54
 */


undefined8 FUN__text__00682f54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN__text__0068378c(param_2,param_3);
  uVar4 = uVar1;
  if (param_3 <= uVar1) {
    uVar4 = param_3;
  }
  if (uVar4 < 0x7f) {
    lVar3 = 1;
    local_40 = CONCAT71(local_40._1_7_,(byte)uVar4 | (uVar1 < param_3) << 7);
  }
  else {
    uVar4 = uVar4 - 0x7f;
    if (uVar4 < 0x80) {
      lVar3 = 2;
      uVar5 = 0x7f;
      if (uVar1 < param_3) {
        uVar5 = 0xff;
      }
      local_40 = CONCAT71(local_40._1_7_,uVar5);
      pbVar7 = (byte *)((ulong)&local_40 | 1);
    }
    else {
      uVar10 = 0;
      uVar9 = uVar4;
      do {
        uVar6 = uVar10;
        uVar11 = uVar9 >> 0xe;
        uVar9 = uVar9 >> 7;
        uVar10 = uVar6 + 1;
      } while (uVar11 != 0);
      if (0xe < uVar10) {
        return 0xfffffdf5;
      }
      lVar3 = uVar6 + 3;
      uVar5 = 0x7f;
      if (uVar1 < param_3) {
        uVar5 = 0xff;
      }
      local_40 = CONCAT71(local_40._1_7_,uVar5);
      pbVar7 = (byte *)((ulong)&local_40 | 1);
      pbVar8 = pbVar7;
      if (0x7f < uVar4) {
        do {
          pbVar7 = pbVar8 + 1;
          *pbVar8 = (byte)uVar4 | 0x80;
          uVar10 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          pbVar8 = pbVar7;
        } while (uVar10 != 0);
      }
    }
    *pbVar7 = (byte)uVar4;
  }
  uVar2 = FUN__text__006834ec(param_1,&local_40,lVar3);
  if ((int)uVar2 == 0) {
    if (uVar1 < param_3) {
      uVar2 = FUN__text__006837c8();
    }
    else {
      uVar2 = FUN__text__006834ec(param_1,param_2,param_3);
    }
  }
  return uVar2;
}


