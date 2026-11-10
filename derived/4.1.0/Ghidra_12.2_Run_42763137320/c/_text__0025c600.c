/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025c600; name: FUN_.text__0025c600
 */


undefined8 FUN__text__0025c600(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar2 = FUN__text__003069c8(*param_2);
  lVar3 = FUN__text__00321ac0();
  uVar1 = *(int *)(lVar3 + 0x9a20) - 1;
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0025c64c */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__0025c658 + (ulong)*(byte *)((ulong)uVar1 + 0x72bf94) * 4))();
    return uVar4;
  }
  FUN__text__003069b0(*param_2);
  uVar5 = FUN__text__00205770();
  if ((uVar5 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0x4682c2038761ab1;
    }
    else {
      uVar4 = 0x4682e2038761e17;
    }
  }
  else if ((uVar2 & 1) == 0) {
    uVar4 = 0x4682d2038761c64;
  }
  else {
    uVar4 = 0x4682f2038761fca;
  }
  return uVar4;
}


