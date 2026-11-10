/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ea01c; name: FUN_.text__003ea01c
 */


undefined8 FUN__text__003ea01c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = (**(code **)(**(long **)(param_3 + 8) + 0x10))(*(long **)(param_3 + 8),param_1,param_2);
  puVar2 = *(undefined8 **)(param_3 + 0x350);
  local_48 = uVar1;
  uStack_40 = param_1;
  local_38 = param_2;
  if (*(undefined8 **)(param_3 + 0x358) <= puVar2) {
    FUN__text__003eb120(param_3 + 0x348,&local_48);
    return uVar1;
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 0x360);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  *puVar2 = uVar1;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  *(undefined8 **)(param_3 + 0x350) = puVar2 + 3;
  return uVar1;
}


