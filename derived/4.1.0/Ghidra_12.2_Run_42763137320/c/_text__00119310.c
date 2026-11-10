/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00119310; name: FUN_.text__00119310
 */


void FUN__text__00119310(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(param_1 + 0x408);
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,8,8);
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *puVar1 = 0x868b18;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 **)(param_1 + 0xd0) = puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),puVar4,*(undefined8 *)(param_1 + 0xe0),
               *(undefined8 *)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xe8) = 8;
  *(long **)(param_1 + 0xd8) = plVar3;
  *(undefined8 *)(param_1 + 0xe0) = 8;
  return;
}


