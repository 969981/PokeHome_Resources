/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c0c0; name: FUN_.text__0047c0c0
 */


undefined8 FUN__text__0047c0c0(long *param_1,long param_2)

{
  short sVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar5 = plVar2;
  if (uVar3 == 0) {
LAB__text__0047c100:
    if ((plVar5 != plVar2 + uVar3 && plVar5 != (long *)0x0) &&
       (((sVar1 = *(short *)(param_2 + 0x40), sVar1 == 0 ||
         (*(short *)(param_2 + 0x40) = sVar1 + -1, sVar1 == 1)) && (*(short *)(param_2 + 0x42) == 0)
        ))) {
      plVar5 = (long *)*param_1;
      uVar3 = *(uint *)(param_1 + 1);
      plVar2 = plVar5;
      if (uVar3 != 0) {
        lVar4 = (ulong)uVar3 << 3;
        while (*plVar2 != param_2) {
          plVar2 = plVar2 + 1;
          lVar4 = lVar4 + -8;
          if (lVar4 == 0) {
            return 0x24;
          }
        }
      }
      plVar5 = plVar5 + uVar3;
      if (plVar2 == plVar5) {
        return 0x24;
      }
      lVar4 = *plVar2;
      if (plVar2 < plVar5 + -1) {
        *plVar2 = plVar5[-1];
        uVar3 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar3 - 1;
      FUN__text__0047c508(lVar4);
      FUN__text__0047c4a8(lVar4);
      FUN__text__00400fc0(0,lVar4);
    }
  }
  else {
    lVar4 = (ulong)uVar3 << 3;
    do {
      if (*plVar5 == param_2) goto LAB__text__0047c100;
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 1;
}


