/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631e20; name: FUN_.text__00631e20
 */


void FUN__text__00631e20(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  uVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar8 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar8 & 1) == 0) {
    uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar5 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
    uVar3 = FUN__text__00637870(uVar3,uVar4,uVar5);
  }
  else {
    uVar3 = FUN__text__0060fec8();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  uVar4 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar5 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__005fea6c(uVar4,uVar5,uVar1);
  uVar8 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar8 & 1) == 0) {
    uVar5 = FUN__text__00613300(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    uVar5 = 0x1f;
  }
  uVar6 = FUN__text__00610ed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar7 = FUN__text__0061ae30(*(undefined8 *)(param_1 + 0x2f0));
  FUN__text__00638884(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


