/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce960; name: FUN_.text__002ce960
 */


long FUN__text__002ce960(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar2 = (long *)FUN__text__002ceee4(*(undefined8 *)(param_1 + 0x50));
  if ((plVar2[9] != 0) && (uVar4 = plVar2[1], uVar4 != 0)) {
    uVar3 = (ulong)param_2;
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar2 = *(long **)(*plVar2 + uVar6 * 8);
    if ((plVar2 != (long *)0x0) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar2[1] == uVar3) {
            if ((int)plVar2[2] == param_2) {
LAB__text__002cea8c:
              return plVar2[3];
            }
          }
          else if ((plVar2[1] & uVar4 - 1) != uVar6) {
            return 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar2[1];
          if (uVar5 == uVar3) {
            if ((int)plVar2[2] == param_2) goto LAB__text__002cea8c;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) {
              return 0;
            }
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return 0;
}


