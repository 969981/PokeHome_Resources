/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019b348; name: FUN_.text__0019b348
 */


undefined8 FUN__text__0019b348(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN__text__00195358(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x60) + 0x110));
  uVar5 = FUN__text__001918bc();
  FUN__text__00195358(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x60) + 0x110),param_3);
  uVar6 = FUN__text__001918bc();
  uVar1 = uVar6;
  uVar2 = uVar5;
  if (*(char *)param_1[1] != '\0') {
    uVar1 = uVar5;
    uVar2 = uVar6;
  }
  uVar3 = FUN__text__0019187c(uVar2);
  uVar4 = FUN__text__0019187c(uVar1);
  if (uVar3 < uVar4) {
    return 1;
  }
  uVar3 = FUN__text__0019187c(uVar2);
  uVar4 = FUN__text__0019187c(uVar1);
  if (uVar3 <= uVar4) {
    uVar7 = FUN__text__0019188c(uVar5);
    uVar8 = FUN__text__0019188c(uVar6);
    if (uVar7 < uVar8) {
      return 1;
    }
    FUN__text__0019188c(uVar5);
    FUN__text__0019188c(uVar6);
  }
  return 0;
}


