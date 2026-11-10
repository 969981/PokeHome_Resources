/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00109c48; name: FUN_.text__00109c48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00109c48(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar4 = uVar6 + 0x18;
  *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)(**(code **)(*param_2 + 0xb8))(param_2);
    return plVar3;
  }
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[4] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  lVar5 = _DAT_0089f690 + 0x10;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = lVar5;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  lVar5 = _DAT_0089f748;
  puVar1 = _DAT_0089f740;
  if (uVar6 == 0) {
    plVar3[0xd] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    *puVar1 = 1;
    *plVar3 = lVar5 + 0x10;
    plVar3[9] = lVar5 + 0x40;
    plVar3[10] = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(uVar6 + 0x98) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(uVar6 + 0x98) * 8 + -8);
    }
    *_DAT_0089f740 = 1;
    lVar2 = _DAT_0089f748;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    *plVar3 = lVar2 + 0x10;
    plVar3[1] = lVar5;
    plVar3[9] = lVar2 + 0x40;
    plVar3[10] = 0;
    if ((*(long *)(uVar6 + 0x98) != 0) &&
       (lVar4 = *(long *)(lVar4 + *(long *)(uVar6 + 0x98) * 8 + -8), lVar4 != 0))
    goto LAB__text__00109d74;
  }
  lVar4 = FUN__text__005f52b0();
LAB__text__00109d74:
  *(undefined4 *)(plVar3 + 0x10) = 0;
  *(undefined4 *)(plVar3 + 0x11) = 1;
  plVar3[0x12] = 0;
  plVar3[0xe] = lVar4;
  plVar3[0xf] = 0;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x98;
  plVar3[4] = 8;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  return plVar3;
}


