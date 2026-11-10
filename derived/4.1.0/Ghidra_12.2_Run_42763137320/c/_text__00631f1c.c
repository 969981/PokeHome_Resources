/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631f1c; name: FUN_.text__00631f1c
 */


void FUN__text__00631f1c(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  
  uVar9 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar9 & 1) == 0) {
    uVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar3 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar4 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
    uVar2 = FUN__text__00637870(uVar2,uVar3,uVar4);
  }
  else {
    uVar2 = FUN__text__0060fec8();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar3 = FUN__text__005feb84(uVar3,uVar4,uVar1);
  uVar5 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar5 >> 1 & 1) == 0) {
    uVar4 = FUN__text__00613480(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    uVar4 = 0x1f;
  }
  uVar6 = FUN__text__00611050(*(undefined8 *)(param_1 + 0x2f0));
  uVar7 = FUN__text__0061ae30(*(undefined8 *)(param_1 + 0x2f0));
  uVar8 = FUN__text__00615c70(*(undefined8 *)(param_1 + 0x2f0));
  FUN__text__006388f8(uVar2,uVar3,uVar4,uVar6,uVar7,uVar8);
  return;
}


