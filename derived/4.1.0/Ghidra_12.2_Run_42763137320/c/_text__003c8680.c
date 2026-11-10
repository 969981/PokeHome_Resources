/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8680; name: FUN_.text__003c8680
 */


void FUN__text__003c8680(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  undefined1 auStack_28 [8];
  
  local_40 = *param_2;
  local_38 = *param_3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_30 = (undefined4)param_3[1];
  lVar2 = *(long *)(param_1 + 0x2c0);
  lVar3 = *(long *)(param_1 + 0x2c8);
  puVar1 = (undefined8 *)(lVar2 + lVar3 * 0x18);
  if (lVar3 == *(long *)(param_1 + 0x2d0)) {
    FUN__text__003c9310(auStack_28,param_1 + 0x280,puVar1,1,&local_40);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  else {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x280);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar1 = local_40;
    lVar2 = lVar2 + lVar3 * 0x18;
    *(long *)(lVar2 + 8) = local_38;
    *(undefined4 *)(lVar2 + 0x10) = local_30;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + 1;
  }
  return;
}


