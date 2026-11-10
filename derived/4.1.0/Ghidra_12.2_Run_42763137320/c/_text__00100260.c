/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100260; name: FUN_.text__00100260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00100260(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = (_DAT_0089f280 - _DAT_0089f278 >> 3) * -0x5555555555555555;
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  if (param_2 < uVar3) {
    plVar4 = (long *)(_DAT_0089f278 + uVar3 * 0x18 + -8);
    uVar2 = param_2;
    do {
      uVar1 = DAT_008e1210;
      if (*plVar4 == param_1) {
        (*(code *)plVar4[-2])(plVar4[-1],uVar2,DAT_008e1210);
      }
      uVar3 = uVar3 - 1;
      FUN__text__00100260(param_1,uVar1,DAT_008e1210);
      plVar4 = plVar4 + -3;
      uVar2 = extraout_x1;
    } while (param_2 < uVar3);
  }
  return;
}


