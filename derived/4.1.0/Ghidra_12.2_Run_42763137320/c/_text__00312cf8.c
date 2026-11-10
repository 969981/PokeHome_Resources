/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312cf8; name: FUN_.text__00312cf8
 */


void FUN__text__00312cf8(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar2 = FUN__text__00632ee0(param_2);
  iVar3 = FUN__text__00631008(param_2);
  uVar4 = FUN__text__00631010(param_2);
  iVar5 = FUN__text__0063378c(param_2);
  uVar6 = FUN__text__00634538(param_2);
  uVar8 = FUN__text__00633b34(param_2,2);
  uVar7 = FUN__text__00634578(param_2);
  FUN__text__006331e0(param_2,uVar2 & 1);
  if ((((uVar8 & 1) != 0) || (iVar3 == 0)) || (0x329 < iVar3)) {
    return;
  }
  uVar8 = FUN__text__00312550(param_1,iVar3);
  if ((uVar8 & 1) == 0) {
    FUN__text__00311f80(param_1,iVar3,iVar5,uVar6 & 1,uVar4);
  }
  if (iVar3 == 0x147) {
    bVar1 = (uVar6 & 1) == 0;
    uVar2 = 3;
    if (bVar1) {
      uVar2 = 1;
    }
    uVar9 = 2;
    if (bVar1) {
      uVar9 = 0;
    }
    if (iVar5 != 1) {
      uVar2 = uVar9;
    }
    if ((*(uint *)(param_1 + 0xd8) & 1 << (ulong)uVar2) == 0) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1 << (ulong)uVar2;
      *(undefined4 *)(param_1 + (ulong)uVar2 * 4 + 0x93c) = uVar7;
    }
  }
  FUN__text__00312880(param_1,iVar3,iVar5,uVar6 & 1,uVar4);
  return;
}


