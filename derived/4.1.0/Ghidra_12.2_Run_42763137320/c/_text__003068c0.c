/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003068c0; name: FUN_.text__003068c0
 */


void FUN__text__003068c0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN__text__00631268(*(undefined8 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x90) == 2) {
    FUN__text__0063505c(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  }
  lVar1 = FUN__text__00321ac0();
  if (0 < *(int *)(lVar1 + 0x93498)) {
    lVar1 = 0;
    do {
      lVar2 = FUN__text__00321ac0();
      if (*(long *)(lVar2 + lVar1 * 8 + 0x7fc18) == *(long *)(param_1 + 0x60)) {
        return;
      }
      lVar1 = lVar1 + 1;
      lVar2 = FUN__text__00321ac0();
    } while (lVar1 < *(int *)(lVar2 + 0x93498));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  lVar1 = FUN__text__00321ac0();
  lVar2 = FUN__text__00321ac0();
  *(undefined8 *)(lVar1 + (long)*(int *)(lVar2 + 0x93498) * 8 + 0x7fc18) = uVar3;
  lVar1 = FUN__text__00321ac0();
  *(int *)(lVar1 + 0x93498) = *(int *)(lVar1 + 0x93498) + 1;
  return;
}


