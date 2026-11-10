/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00635280; name: FUN_.text__00635280
 */


bool FUN__text__00635280(long param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar11 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar11 & 1) == 0) {
    uVar6 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar7 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar8 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
    uVar5 = FUN__text__00637870(uVar6,uVar7,uVar8);
    uVar5 = uVar5 & 0xff;
    uVar2 = FUN__text__005ffc50(uVar3,uVar4,3);
  }
  else {
    uVar5 = FUN__text__0060fec8();
    uVar2 = FUN__text__005ffc50(uVar3,uVar4,3);
  }
  if (uVar2 != 0) {
    uVar12 = 0;
    do {
      iVar10 = FUN__text__00600044(uVar3,uVar4,uVar12,3);
      uVar9 = FUN__text__005ffdac(uVar3,uVar4,uVar12,3);
      if ((iVar10 == param_2) && ((uVar9 & 0xffff) <= uVar5)) {
        return true;
      }
      uVar12 = uVar12 + 1;
    } while (uVar2 != uVar12);
  }
  bVar1 = FUN__text__00643de0();
  if (bVar1 != 0) {
    uVar5 = 0;
    do {
      iVar10 = FUN__text__00643de8(uVar5);
      if ((iVar10 == param_2) &&
         (uVar11 = FUN__text__0061a820(*(undefined8 *)(param_1 + 0x2f0),uVar5), (uVar11 & 1) != 0))
      {
        return true;
      }
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  iVar10 = FUN__text__00614920(*(undefined8 *)(param_1 + 0x2f0));
  return iVar10 == param_2;
}


