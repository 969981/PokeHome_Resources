/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8d08; name: FUN_.text__003b8d08
 */


long FUN__text__003b8d08(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN__text__003b8bc0(&local_38,param_2,
                      (int)((ulong)(((long *)*param_1)[1] - *(long *)*param_1) >> 3) * -0x55555555);
  lVar2 = *param_1;
  puVar1 = *(undefined8 **)(lVar2 + 8);
  if (puVar1 == *(undefined8 **)(lVar2 + 0x10)) {
    FUN__text__003b8f20(lVar2,&local_38);
  }
  else {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    puVar1[1] = uStack_30;
    puVar1[2] = local_28;
    *puVar1 = local_38;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(lVar2 + 8) = puVar1 + 3;
  }
  return *(long *)(*param_1 + 8) + -0x18;
}


