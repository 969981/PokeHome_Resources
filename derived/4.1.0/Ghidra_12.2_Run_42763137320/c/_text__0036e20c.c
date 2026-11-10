/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036e20c; name: FUN_.text__0036e20c
 */


ulong FUN__text__0036e20c(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = FUN__text__00206710(0);
  if (uVar3 == 0) {
    uVar3 = FUN__text__00206710(1,param_2);
    if (uVar3 == 0) {
      uVar4 = FUN__text__00206710(2,param_2);
      uVar3 = (uint)uVar4;
      if (uVar3 == 0) {
        return uVar4;
      }
      iVar5 = 2;
      uVar6 = 0;
      if (uVar3 < 0xd3) {
        uVar6 = uVar3;
      }
      uVar6 = uVar6 - 1;
      if (uVar6 < 0xd2) goto LAB__text__0036e2cc;
    }
    else {
      iVar5 = 1;
      uVar6 = 0;
      if (uVar3 < 0xd4) {
        uVar6 = uVar3;
      }
      uVar6 = uVar6 - 1;
      if (uVar6 < 0xd3) {
LAB__text__0036e2cc:
        lVar1 = param_1 + 0x60;
        if (iVar5 == 1) {
          lVar1 = param_1 + 0x4b60;
        }
        lVar2 = param_1 + 0x72f0;
        if (iVar5 != 2) {
          lVar2 = lVar1;
        }
        return (ulong)(*(byte *)(lVar2 + (ulong)uVar6 * 0x30 + 0x20) & 1);
      }
    }
  }
  else {
    iVar5 = 0;
    uVar6 = 0;
    if (uVar3 < 0x191) {
      uVar6 = uVar3;
    }
    uVar6 = uVar6 - 1;
    if (uVar6 < 400) goto LAB__text__0036e2cc;
  }
  return 0;
}


