/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f939c; name: FUN_.text__005f939c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005f939c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2c0,8);
  lVar3 = _DAT_0089f690;
  if (plVar2 == (long *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__005f9600(lVar3 + 0x178);
    plVar2 = (long *)FUN__text__005f97f0(lVar3 + 0x50);
    return plVar2;
  }
  plVar2[7] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 6) = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = lVar3 + 0x10;
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar4 + 0x98) != 0) {
      lVar3 = *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8 + -8);
    }
  }
  *_DAT_008a5d20 = 1;
  lVar1 = _DAT_008a5d28;
  *plVar2 = _DAT_008a5d28 + 0x10;
  plVar2[1] = lVar3;
  plVar2[9] = lVar1 + 0x40;
  FUN__text__005fa38c(plVar2 + 10,0);
  FUN__text__005faf10(plVar2 + 0x2f,0);
  FUN__text__005fa37c(plVar2 + 10);
  FUN__text__005faef4(plVar2 + 0x2f);
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x2c0;
  plVar2[4] = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return plVar2;
}


