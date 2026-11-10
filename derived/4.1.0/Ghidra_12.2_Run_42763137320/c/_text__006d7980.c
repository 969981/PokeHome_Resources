/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7980; name: FUN_.text__006d7980
 */


undefined8 FUN__text__006d7980(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    do {
      lVar2 = *(long *)(param_2 + 0x80);
      if ((*(int *)(param_2 + 0x18) == *(int *)((long)param_1 + 0x2c)) &&
         (*(long *)(param_2 + 0x98) != 0)) {
        lVar3 = 0;
        do {
          lVar4 = *(long *)(param_2 + lVar3 * 8 + 0x440);
          while (lVar1 = lVar4, lVar1 != 0) {
            lVar4 = *(long *)(lVar1 + 0x80);
            if ((*(int *)(lVar1 + 0x18) == *(int *)((long)param_1 + 0x2c)) &&
               (*(long *)(lVar1 + 0x98) != 0)) {
              FUN__text__006d7ba4(lVar1,*param_1,1);
              FUN__text__006e2400(param_1[4],lVar1);
            }
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x10);
        FUN__text__006d7ba4(param_2,*param_1,1);
        FUN__text__006e2400(param_1[4],param_2);
      }
      param_2 = lVar2;
    } while (lVar2 != 0);
  }
  return 1;
}


