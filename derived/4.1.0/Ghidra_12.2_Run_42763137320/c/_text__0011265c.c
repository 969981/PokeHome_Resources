/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011265c; name: FUN_.text__0011265c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0011265c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x2e0) != '\0') {
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar4 = *(long **)(*_DAT_0089f3d8 + 0x1e8);
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x180,0x10);
  if (plVar2 != (long *)0x0) {
    FUN__text__003d0bd8(plVar2,plVar4);
    lVar3 = _DAT_0089fdd0 + 0x50;
    *plVar2 = _DAT_0089fdd0 + 0x10;
    plVar2[1] = (long)plVar4;
    plVar2[9] = lVar3;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 0x180;
    plVar2[4] = 0x10;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    (**(code **)(plVar2[9] + 0x10))();
    if (*(long *)(param_1 + 0x2f8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x2f8) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x2f8) = plVar2;
    lVar3 = FUN__text__003d0c68(plVar2,0);
    return lVar3;
  }
  (**(code **)(*plVar4 + 0xb8))(plVar4);
  lVar3 = FUN__text__003d0bd8(0,plVar4);
  if (*(char *)(lVar3 + 0x2f0) != '\0') {
    return 1;
  }
  iVar1 = FUN__text__003d0e08(*(undefined8 *)(lVar3 + 0x2f8));
  if (iVar1 == 1) {
    *(undefined1 *)(lVar3 + 0x2f0) = 1;
    FUN__text__003d0e80(*(undefined8 *)(lVar3 + 0x2f8));
    return 1;
  }
  return 0;
}


