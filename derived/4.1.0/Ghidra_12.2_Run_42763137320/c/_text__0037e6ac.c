/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037e6ac; name: FUN_.text__0037e6ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037e6ac(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar2 < *(undefined8 **)(param_1 + 0xf0)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0037e86c;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3188;
    *puVar2 = _DAT_008a3190;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a31a0;
    puVar2[2] = _DAT_008a3198;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xe8) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (puVar2 < *(undefined8 **)(param_1 + 0x120)) goto LAB__text__0037e7e0;
LAB__text__0037e73c:
    FUN__text__0037eaf0(param_1 + 0x110,&uStack_2);
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) {
LAB__text__0037e854:
      FUN__text__0037ed70(param_1 + 0x140,&uStack_3);
      return;
    }
  }
  else {
    FUN__text__0037e870(param_1 + 0xe0,&uStack_1);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x120) <= puVar2) goto LAB__text__0037e73c;
LAB__text__0037e7e0:
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0037e86c;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x128);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a31c8;
    *puVar2 = _DAT_008a31d0;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a31e0;
    puVar2[2] = _DAT_008a31d8;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x118) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) goto LAB__text__0037e854;
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x158);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a31a8;
    *puVar2 = _DAT_008a31b0;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a31c0;
    puVar2[2] = _DAT_008a31b8;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x148) = puVar2 + 0x10;
    return;
  }
LAB__text__0037e86c:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


