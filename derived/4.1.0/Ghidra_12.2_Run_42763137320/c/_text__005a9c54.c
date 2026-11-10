/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a9c54; name: FUN_.text__005a9c54
 */


undefined8 FUN__text__005a9c54(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65);
  }
  plVar3 = *(long **)(param_1 + 8);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x18,8);
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  param_1 = param_1 + (ulong)param_2 * 0x20;
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  FUN__text__005a55c8();
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  plVar4 = (long *)*puVar1;
  *puVar1 = uVar2;
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] != 0) {
      (**(code **)(*(long *)(plVar4[1] + 0x48) + 0x18))();
      plVar4[1] = 0;
    }
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),plVar4,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    uVar2 = *puVar1;
  }
  *(long **)(param_1 + 0x18) = plVar3;
  *(undefined8 *)(param_1 + 0x20) = 0x18;
  *(undefined8 *)(param_1 + 0x28) = 8;
  return uVar2;
}


