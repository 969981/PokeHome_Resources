/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ec510; name: FUN_.text__001ec510
 */


void FUN__text__001ec510(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long local_18;
  
  FUN__text__00109fd4(&local_18,0x713102);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x70) = local_18;
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(&local_18,puVar3[0xd],0);
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x78) = local_18;
  if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001ec5e0(param_1);
  return;
}


