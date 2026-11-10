/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037efe4; name: FUN_.text__0037efe4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037efe4(long param_1)

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
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0037f1a4;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a31e8;
    *puVar2 = _DAT_008a31f0;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a3200;
    puVar2[2] = _DAT_008a31f8;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xe8) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (puVar2 < *(undefined8 **)(param_1 + 0x120)) goto LAB__text__0037f118;
LAB__text__0037f074:
    FUN__text__0037f430(param_1 + 0x110,&uStack_2);
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) {
LAB__text__0037f18c:
      FUN__text__0037f6b0(param_1 + 0x140,&uStack_3);
      return;
    }
  }
  else {
    FUN__text__0037f1b0(param_1 + 0xe0,&uStack_1);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x120) <= puVar2) goto LAB__text__0037f074;
LAB__text__0037f118:
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0037f1a4;
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x128);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3228;
    *puVar2 = _DAT_008a3230;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a3240;
    puVar2[2] = _DAT_008a3238;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x118) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) goto LAB__text__0037f18c;
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x158);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3208;
    *puVar2 = _DAT_008a3210;
    puVar2[1] = uVar1;
    uVar1 = _DAT_008a3220;
    puVar2[2] = _DAT_008a3218;
    puVar2[3] = uVar1;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x148) = puVar2 + 0x10;
    return;
  }
LAB__text__0037f1a4:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


