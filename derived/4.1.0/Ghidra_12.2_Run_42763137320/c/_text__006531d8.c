/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006531d8; name: FUN_.text__006531d8
 */


long FUN__text__006531d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN__text__00667a44(param_1,2,2);
  if ((*(long *)(param_1 + 0xf70) == 0) || (*(long *)(*(long *)(param_1 + 0xf70) + 0x810) == 0)) {
LAB__text__0065328c:
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0xf70) + lVar5 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          if (plVar4[5] != 0) {
            lVar1 = FUN__text__006534d0(plVar4);
            if (lVar1 != 0) {
              lVar2 = FUN__text__0066bc6c(lVar3,lVar1);
              if (lVar2 != 0) goto LAB__text__00653254;
              FUN__text__006783e4(lVar1);
            }
            FUN__text__0066bd88(lVar3);
            goto LAB__text__0065328c;
          }
          lVar2 = lVar3;
LAB__text__00653254:
          lVar3 = lVar2;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x100);
  }
  FUN__text__00667a8c(param_1,2);
  return lVar3;
}


