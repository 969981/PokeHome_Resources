/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00181cd0; name: FUN_.text__00181cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00181cd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 == (long *)0x0) {
    plVar2 = (long *)FUN__text__0012559c(param_1);
    lVar3 = FUN__text__0012559c(param_1);
    plVar1 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x2238,8);
    lVar5 = _DAT_0089fc00;
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar1 = lVar5 + 0x10;
    plVar1[1] = lVar3;
    lVar5 = 0x10;
    do {
      puVar6 = (undefined8 *)((long)plVar1 + lVar5);
      lVar5 = lVar5 + 0xa8;
      *(undefined4 *)(puVar6 + 2) = 0xb;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 5) = 0xb;
      *(undefined4 *)(puVar6 + 8) = 0xb;
      *(undefined4 *)(puVar6 + 0xb) = 0xb;
      *(undefined4 *)(puVar6 + 0xe) = 0xb;
      *(undefined4 *)(puVar6 + 0x11) = 0xb;
      *(undefined4 *)(puVar6 + 0x14) = 0xb;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
    } while (puVar6 + 0x15 != plVar1 + 0x446);
    *(undefined4 *)(plVar1 + 0x446) = 0;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0xb8);
    *(long **)(param_1 + 0xb8) = plVar1;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))
                (*(long **)(param_1 + 0xc0),puVar6,*(undefined8 *)(param_1 + 200),
                 *(undefined8 *)(param_1 + 0xd0));
      plVar1 = *(long **)(param_1 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0xd0) = 8;
    *(long **)(param_1 + 0xc0) = plVar2;
    *(undefined8 *)(param_1 + 200) = 0x2238;
    if (*(long *)(param_1 + 0x5c8) != 0) {
      *(long **)(*(long *)(param_1 + 0x5c8) + 0xb0) = plVar1;
      return *(long **)(param_1 + 0xb8);
    }
  }
  return plVar1;
}


