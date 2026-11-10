/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006316f4; name: FUN_.text__006316f4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__006316f4(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar2 = FUN__text__0060f30c(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar2 & 1) == 0) {
    FUN__text__0060f480(*(undefined8 *)(param_1 + 0x2f0));
  }
  uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar5 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
  uVar3 = FUN__text__00637870(uVar3,uVar4,uVar5);
  FUN__text__0061cb74(*(undefined8 *)(param_1 + 0x2f0),uVar3);
  FUN__text__0063161c(param_1,param_2 & 1);
  uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar7 & 1) == 0)) ||
     (cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)), 1 < (byte)(cVar1 - 1U))) {
    uVar3 = FUN__text__00631b50(param_1);
    FUN__text__0061cd04(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    uVar3 = FUN__text__00631f1c(param_1);
    FUN__text__0061cd04(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar7 & 1) == 0)) ||
     (cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)), 1 < (byte)(cVar1 - 1U))) {
    uVar3 = FUN__text__00631be0(param_1);
    FUN__text__0061cd08(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    uVar3 = FUN__text__00632018(param_1);
    FUN__text__0061cd08(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar7 & 1) == 0)) ||
     (cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)), 1 < (byte)(cVar1 - 1U))) {
    uVar3 = FUN__text__00631c70(param_1);
    FUN__text__0061cd0c(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    uVar3 = FUN__text__00632114(param_1);
    FUN__text__0061cd0c(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar7 & 1) == 0)) ||
     (cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)), 1 < (byte)(cVar1 - 1U))) {
    uVar3 = FUN__text__00631d00(param_1);
  }
  else {
    uVar3 = FUN__text__00632210(param_1);
  }
  FUN__text__0061cd10(*(undefined8 *)(param_1 + 0x2f0),uVar3);
  uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar7 & 1) == 0)) ||
     (cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)), 1 < (byte)(cVar1 - 1U))) {
    uVar3 = FUN__text__00631d90(param_1);
  }
  else {
    uVar3 = FUN__text__0063230c(param_1);
  }
  FUN__text__0061cd14(*(undefined8 *)(param_1 + 0x2f0),uVar3);
  uVar6 = FUN__text__0060f30c(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar6 & (uVar2 ^ 1) & 1) == 0) {
    return;
  }
  FUN__text__0060f5b0(*(undefined8 *)(param_1 + 0x2f0));
  return;
}


