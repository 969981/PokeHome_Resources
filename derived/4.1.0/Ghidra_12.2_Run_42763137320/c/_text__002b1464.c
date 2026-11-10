/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1464; name: FUN_.text__002b1464
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b1464(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  puVar2 = *(undefined8 **)(param_1 + 0x108);
  if (puVar2 < *(undefined8 **)(param_1 + 0x110)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002b1624;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x118);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a24d0;
    *puVar2 = _DAT_008a24d8;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a24e8;
    puVar2[2] = _DAT_008a24e0;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x108) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x138);
    if (puVar2 < *(undefined8 **)(param_1 + 0x140)) goto LAB__text__002b1598;
LAB__text__002b14f4:
    FUN__text__002b27a0(param_1 + 0x130,&uStack_2);
    puVar2 = *(undefined8 **)(param_1 + 0x168);
    if (*(undefined8 **)(param_1 + 0x170) <= puVar2) {
LAB__text__002b160c:
      FUN__text__002b2a20(param_1 + 0x160,&uStack_3);
      return;
    }
  }
  else {
    FUN__text__002b2510(param_1 + 0x100,&uStack_1);
    puVar2 = *(undefined8 **)(param_1 + 0x138);
    if (*(undefined8 **)(param_1 + 0x140) <= puVar2) goto LAB__text__002b14f4;
LAB__text__002b1598:
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002b1624;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x148);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2510;
    *puVar2 = _DAT_008a2518;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a2528;
    puVar2[2] = _DAT_008a2520;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x138) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x168);
    if (*(undefined8 **)(param_1 + 0x170) <= puVar2) goto LAB__text__002b160c;
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x178);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a24f0;
    *puVar2 = _DAT_008a24f8;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a2508;
    puVar2[2] = _DAT_008a2500;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x168) = puVar2 + 0x10;
    return;
  }
LAB__text__002b1624:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


