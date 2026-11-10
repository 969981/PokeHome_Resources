/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019aecc; name: FUN_.text__0019aecc
 */


bool FUN__text__0019aecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN__text__00195358(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x60) + 0x110));
  uVar2 = FUN__text__001918bc();
  FUN__text__00195358(*(undefined8 *)(*(long *)(*(long *)*param_1 + 0x60) + 0x110),param_3);
  uVar3 = FUN__text__001918bc();
  uVar1 = uVar2;
  if (*(char *)param_1[1] != '\0') {
    uVar1 = uVar3;
    uVar3 = uVar2;
  }
  uVar4 = FUN__text__0019188c(uVar1);
  uVar5 = FUN__text__0019188c(uVar3);
  if (uVar5 <= uVar4) {
    FUN__text__0019188c(uVar1);
    FUN__text__0019188c(uVar3);
  }
  return uVar4 < uVar5;
}


