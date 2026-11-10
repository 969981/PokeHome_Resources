/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019af94; name: FUN_.text__0019af94
 */


undefined8 FUN__text__0019af94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN__text__00195358(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x60) + 0x110));
  uVar3 = FUN__text__001918bc();
  FUN__text__00195358(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x60) + 0x110),param_3);
  uVar4 = FUN__text__001918bc();
  uVar1 = uVar4;
  uVar2 = uVar3;
  if (*(char *)param_1[1] != '\0') {
    uVar1 = uVar3;
    uVar2 = uVar4;
  }
  uVar5 = FUN__text__00191884(uVar2);
  uVar6 = FUN__text__00191884(uVar1);
  if (uVar5 < uVar6) {
    return 1;
  }
  uVar5 = FUN__text__00191884(uVar2);
  uVar6 = FUN__text__00191884(uVar1);
  if (uVar5 <= uVar6) {
    uVar5 = FUN__text__0019188c(uVar3);
    uVar6 = FUN__text__0019188c(uVar4);
    if (uVar5 < uVar6) {
      return 1;
    }
    FUN__text__0019188c(uVar3);
    FUN__text__0019188c(uVar4);
  }
  return 0;
}


