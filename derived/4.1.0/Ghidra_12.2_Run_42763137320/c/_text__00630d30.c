/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630d30; name: FUN_.text__00630d30
 */


void FUN__text__00630d30(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar4 = FUN__text__0060f30c(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar4 & 1) == 0) {
    FUN__text__0060f480(*(undefined8 *)(param_1 + 0x2f0));
  }
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),0,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),0,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),0,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),1,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),1,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),1,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  uVar5 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar6 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar7 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
  uVar1 = FUN__text__00637870(uVar5,uVar6,uVar7);
  uVar5 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar6 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar2 = FUN__text__005ffc50(uVar5,uVar6,*(undefined1 *)(param_1 + 0x54));
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      uVar5 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
      uVar6 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
      uVar3 = FUN__text__005ffce8(uVar5,uVar6,uVar8,*(undefined1 *)(param_1 + 0x54));
      if ((uVar1 & 0xff) < uVar3) break;
      uVar5 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
      uVar6 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
      uVar5 = FUN__text__00600044(uVar5,uVar6,uVar8,*(undefined1 *)(param_1 + 0x54));
      FUN__text__00632f1c(param_1,uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  uVar8 = FUN__text__0060f30c(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar8 & (uVar4 ^ 1) & 1) == 0) {
    return;
  }
  FUN__text__0060f5b0(*(undefined8 *)(param_1 + 0x2f0));
  return;
}


