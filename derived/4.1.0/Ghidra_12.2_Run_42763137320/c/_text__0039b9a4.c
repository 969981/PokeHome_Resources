/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039b9a4; name: FUN_.text__0039b9a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039b9a4(long param_1)

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
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0039bb64;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3408;
    *puVar2 = _DAT_008a3410;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a3420;
    puVar2[2] = _DAT_008a3418;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xe8) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (puVar2 < *(undefined8 **)(param_1 + 0x120)) goto LAB__text__0039bad8;
LAB__text__0039ba34:
    FUN__text__0039e480(param_1 + 0x110,&uStack_2);
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) {
LAB__text__0039bb4c:
      FUN__text__0039e700(param_1 + 0x140,&uStack_3);
      return;
    }
  }
  else {
    FUN__text__0039e200(param_1 + 0xe0,&uStack_1);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x120) <= puVar2) goto LAB__text__0039ba34;
LAB__text__0039bad8:
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0039bb64;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x128);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3448;
    *puVar2 = _DAT_008a3450;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a3460;
    puVar2[2] = _DAT_008a3458;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x118) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) goto LAB__text__0039bb4c;
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x158);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3428;
    *puVar2 = _DAT_008a3430;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a3440;
    puVar2[2] = _DAT_008a3438;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x148) = puVar2 + 0x10;
    return;
  }
LAB__text__0039bb64:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


