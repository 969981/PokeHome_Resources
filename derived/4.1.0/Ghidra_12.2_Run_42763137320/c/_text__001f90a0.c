/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f90a0; name: FUN_.text__001f90a0
 */


void FUN__text__001f90a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long local_50 [4];
  undefined4 local_14;
  
  FUN__text__00109fd4(local_50,0x720d8b);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_14 = 0x200;
  *(long *)(param_1 + 0x70) = local_50[0];
  FUN__text__00111970(local_50,uVar4,&local_14);
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  local_14 = 0x200;
  *(long *)(param_1 + 0x90) = local_50[0];
  FUN__text__00111970(local_50,uVar4,&local_14);
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
  }
  local_14 = 0x200;
  *(long *)(param_1 + 0x98) = local_50[0];
  FUN__text__00111970(local_50,uVar4,&local_14);
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
  }
  local_14 = 0x200;
  *(long *)(param_1 + 0xa0) = local_50[0];
  FUN__text__00111970(local_50,uVar4,&local_14);
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xa8) = local_50[0];
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar5)(puVar5);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  if (puVar5[0xaf] != 0) {
    local_50[0] = 0x54adff1e82350638;
    local_50[1] = 0x70f7fa;
    local_50[2] = 0xd;
    local_50[3] = 0;
    lVar3 = FUN__text__001f6180(puVar5[0xaf],local_50);
    if (local_50[3] != 0) {
      (**(code **)(*(long *)(local_50[3] + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x80) = lVar3;
    if (lVar3 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      plVar2 = (long *)FUN__text__0012615c();
      if (plVar2 != plVar1) {
        do {
          plVar1 = (long *)*plVar1;
        } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      }
      FUN__text__001156d0(local_50,puVar5[0xd],0);
      lVar3 = *(long *)(local_50[0] + 0x60);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
      }
      *(long *)(param_1 + 0x88) = lVar3;
      if (local_50[0] != 0) {
        (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


