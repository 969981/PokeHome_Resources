/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063161c; name: FUN_.text__0063161c
 */


void FUN__text__0063161c(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar3 = FUN__text__00632698();
  uVar4 = FUN__text__0060fd20(*(undefined8 *)(param_1 + 0x2f0));
  uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)), 1 < (byte)(cVar2 - 1U))) {
    uVar5 = FUN__text__00631ac0(param_1);
    FUN__text__0061cb78(*(undefined8 *)(param_1 + 0x2f0),uVar5);
  }
  else {
    uVar5 = FUN__text__00631e20(param_1);
    FUN__text__0061cb78(*(undefined8 *)(param_1 + 0x2f0),uVar5);
  }
  if ((uVar4 == 0) && ((param_2 & 1) != 0)) {
    return;
  }
  uVar6 = FUN__text__00632698(param_1);
  uVar1 = uVar6;
  if (uVar4 <= uVar6) {
    uVar1 = uVar4;
  }
  if (uVar3 <= uVar6) {
    uVar1 = (uVar4 - uVar3) + uVar6;
  }
  FUN__text__0061cb80(*(undefined8 *)(param_1 + 0x2f0),uVar1);
  return;
}


