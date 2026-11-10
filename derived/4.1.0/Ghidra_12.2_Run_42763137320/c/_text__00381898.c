/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00381898; name: FUN_.text__00381898
 */


void FUN__text__00381898(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long local_38;
  undefined8 local_18;
  
  local_18 = param_4;
  local_38 = (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(*(long **)(param_2 + 0x38),param_4);
  if (local_38 == 0) {
    *param_1 = 0;
    return;
  }
  if ((*(long **)(param_2 + 0x58) == (long *)0x0) ||
     (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
    puVar2 = *(undefined4 **)(param_2 + 0x10);
    if (*(undefined4 **)(param_2 + 0x18) <= puVar2) {
LAB__text__00381980:
      FUN__text__003819c0(param_2 + 8,param_3,&local_38,&local_18);
      puVar3 = *(undefined4 **)(param_2 + 0x10);
      goto LAB__text__00381998;
    }
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x58) + 0x10))();
    puVar2 = *(undefined4 **)(param_2 + 0x10);
    if (*(undefined4 **)(param_2 + 0x18) <= puVar2) goto LAB__text__00381980;
  }
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  uVar1 = *param_3;
  *(undefined8 *)(puVar2 + 6) = local_18;
  *(long *)(puVar2 + 2) = local_38;
  *(undefined8 *)(puVar2 + 4) = local_18;
  puVar3 = puVar2 + 8;
  *puVar2 = uVar1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *(undefined4 **)(param_2 + 0x10) = puVar3;
LAB__text__00381998:
  *param_1 = puVar3 + -8;
  return;
}


