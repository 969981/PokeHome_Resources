/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f9774; name: FUN_.text__002f9774
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f9774(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar2 < *(undefined8 **)(param_1 + 0xd8)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002f99c0;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2948;
    *puVar2 = _DAT_008a2950;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a2960;
    puVar2[2] = _DAT_008a2958;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xd0) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x100);
    if (puVar2 < *(undefined8 **)(param_1 + 0x108)) goto LAB__text__002f98c0;
LAB__text__002f9804:
    FUN__text__002fbf40(param_1 + 0xf8,&uStack_2);
    puVar2 = *(undefined8 **)(param_1 + 0x130);
    if (puVar2 < *(undefined8 **)(param_1 + 0x138)) goto LAB__text__002f981c;
LAB__text__002f9934:
    FUN__text__002fc1c0(param_1 + 0x128,&uStack_3);
    puVar2 = *(undefined8 **)(param_1 + 0x160);
    if (*(undefined8 **)(param_1 + 0x168) <= puVar2) goto LAB__text__002f9890;
  }
  else {
    FUN__text__002fbcc0(param_1 + 200,&uStack_1);
    puVar2 = *(undefined8 **)(param_1 + 0x100);
    if (*(undefined8 **)(param_1 + 0x108) <= puVar2) goto LAB__text__002f9804;
LAB__text__002f98c0:
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002f99c0;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x110);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2988;
    *puVar2 = _DAT_008a2990;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a29a0;
    puVar2[2] = _DAT_008a2998;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x100) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x130);
    if (*(undefined8 **)(param_1 + 0x138) <= puVar2) goto LAB__text__002f9934;
LAB__text__002f981c:
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002f99c0;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x140);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2968;
    *puVar2 = _DAT_008a2970;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a2980;
    puVar2[2] = _DAT_008a2978;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x130) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x160);
    if (*(undefined8 **)(param_1 + 0x168) <= puVar2) {
LAB__text__002f9890:
      FUN__text__002fc440(param_1 + 0x158,&uStack_4);
      return;
    }
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x170);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a29a8;
    *puVar2 = _DAT_008a29b0;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a29c0;
    puVar2[2] = _DAT_008a29b8;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x160) = puVar2 + 0x10;
    return;
  }
LAB__text__002f99c0:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


