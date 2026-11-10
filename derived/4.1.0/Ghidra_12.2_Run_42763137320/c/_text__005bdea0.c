/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bdea0; name: FUN_.text__005bdea0
 */


ulong FUN__text__005bdea0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_250 [512];
  
  uVar3 = *(ulong *)(param_1 + 0x7f0);
  lVar1 = *(long *)(param_1 + 0x7e8);
  uVar2 = uVar3 - lVar1 >> 9;
  if ((int)uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 0x160;
    do {
      if ((*(long *)(lVar1 + lVar5 + -0x118) == 0 && *(long *)(lVar1 + lVar5 + -8) == 0) &&
         (*(long *)(lVar1 + lVar5) == 0)) {
        FUN__text__005d4c20(auStack_250);
        FUN__text__0014d25c(*(long *)(param_1 + 0x7e8) + lVar5 + -0x160,auStack_250);
        FUN__text__0014821c(auStack_250);
        uVar2 = uVar4 & 0xffffffff;
        goto LAB__text__005bdfac;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x200;
    } while ((uVar3 - lVar1 >> 9 & 0xffffffff) != uVar4);
  }
  if (uVar3 < *(ulong *)(param_1 + 0x7f8)) {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x800);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__005d4c20(uVar3);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(ulong *)(param_1 + 0x7f0) = uVar3 + 0x200;
  }
  else {
    FUN__text__005c2be0((long *)(param_1 + 0x7e8));
  }
LAB__text__005bdfac:
  return uVar2 & 0xffffffff;
}


