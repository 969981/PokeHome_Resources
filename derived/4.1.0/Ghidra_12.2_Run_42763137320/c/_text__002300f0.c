/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002300f0; name: FUN_.text__002300f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002300f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  FUN__text__00109fd4(&local_50,0x71278d);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x70) = local_50;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN__text__0022978c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  puVar4[2] = 0x54ea0826e5d21f43;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  local_50 = 0xb4614eedb599ab8c;
  uStack_48 = 0x717c25;
  local_40 = 0xb;
  local_38 = 0;
  lVar3 = FUN__text__0022ab00(puVar4[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x78) = lVar3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__0023c478(lVar3);
  FUN__text__0023c4d4(*(undefined8 *)(param_1 + 0x78));
  FUN__text__0010e28c(*_DAT_0089f5a0,0x12,0);
  return;
}


