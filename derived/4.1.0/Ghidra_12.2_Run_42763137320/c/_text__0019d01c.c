/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d01c; name: FUN_.text__0019d01c
 */


void FUN__text__0019d01c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 == 0) || (lVar5 = *(long *)(param_1 + 0x18), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar6 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar6 + 8);
  puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x288,8);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  puVar1[2] = lVar3;
  puVar1[3] = lVar5;
  *puVar1 = 0x86d9a8;
  puVar1[1] = lVar6;
  memset(puVar1 + 4,0,0x267);
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),puVar4,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
    puVar1 = *(undefined8 **)(param_1 + 0x28);
  }
  *(long **)(param_1 + 0x30) = plVar2;
  *(undefined8 *)(param_1 + 0x38) = 0x288;
  *(undefined8 *)(param_1 + 0x40) = 8;
  FUN__text__001a2f40(puVar1,param_1);
  return;
}


