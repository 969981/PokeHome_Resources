/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003901bc; name: FUN_.text__003901bc
 */


uint FUN__text__003901bc(long param_1,int param_2,int param_3,ushort param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = FUN__text__005fdad0(param_4);
  if (param_2 == 2) {
    sVar1 = FUN__text__006005c0(uVar3,param_5 & 0xff);
  }
  else if (param_2 == 1) {
    sVar1 = FUN__text__006004e0(uVar3,param_5 & 0xff);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    sVar1 = FUN__text__00600400(uVar3,param_5 & 0xff);
  }
  if (sVar1 != 0) {
    if (param_4 < 0x402) {
      param_1 = param_1 + (ulong)param_4 * 0x20;
      uVar7 = *(uint *)(param_1 + 0x68);
      uVar5 = *(uint *)(param_1 + 0x60);
      uVar6 = *(uint *)(param_1 + 100);
      iVar2 = FUN__text__005fdad0(param_4);
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      iVar2 = FUN__text__005fdad0(param_4);
    }
    uVar4 = 0;
    if ((1 < iVar2 - 0x298U) && (uVar4 = 0, iVar2 != 0x2e8)) {
      uVar4 = param_5 & 0xff;
    }
    if (param_3 == 2) {
      return uVar7 >> (ulong)(uVar4 & 0x1f) & 1;
    }
    if (param_3 == 1) {
      return uVar6 >> (ulong)(uVar4 & 0x1f) & 1;
    }
    if (param_3 == 0) {
      return uVar5 >> (ulong)(uVar4 & 0x1f) & 1;
    }
  }
  return 0;
}


