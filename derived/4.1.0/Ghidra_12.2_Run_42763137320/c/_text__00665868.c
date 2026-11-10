/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665868; name: FUN_.text__00665868
 */


bool FUN__text__00665868(long param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    bVar6 = false;
  }
  else {
    lVar3 = FUN__text__0065ca88(*(undefined8 *)(param_1 + 0xd8));
    lVar4 = FUN__text__0065ca94(*(undefined8 *)(param_1 + 0xd8));
    if (*(long **)(param_2 + 0x4c8) == (long *)0x0) {
      lVar5 = -2;
      bVar6 = false;
    }
    else {
      lVar5 = *(long *)(**(long **)(param_2 + 0x4c8) + 0xf0);
      bVar6 = (0 < lVar3 && lVar5 != lVar3) && (lVar3 < 1 || lVar3 <= lVar5);
    }
    bVar2 = bVar6;
    if (lVar4 < *(long *)(param_2 + 0x40)) {
      bVar2 = true;
    }
    if (0 < lVar4) {
      bVar6 = bVar2;
    }
    uVar1 = 0x71a40e;
    if (bVar6 == false) {
      uVar1 = 0x7161db;
    }
    FUN__text__00666f74(param_1,0x714063,*(undefined8 *)(param_2 + 0x60),param_2,lVar5,
                        *(long *)(param_2 + 0x40),uVar1);
  }
  return bVar6;
}


