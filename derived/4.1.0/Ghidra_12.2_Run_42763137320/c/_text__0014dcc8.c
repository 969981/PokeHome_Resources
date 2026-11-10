/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014dcc8; name: FUN_.text__0014dcc8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014dcc8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  FUN__text__005e927c(auStack_60,0x86a768);
  FUN__text__005a2540(param_1,auStack_60,2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  lVar2 = _DAT_008a0050;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[9] = lVar2 + 0xb0;
  param_1[10] = lVar2 + 0xf0;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar1[2] = 0;
  *puVar1 = 0x86a790;
  puVar1[1] = param_1;
  lVar2 = FUN__text__0014e0d8(auStack_60,param_2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (puVar1[2] != 0) {
    (**(code **)(*(long *)(puVar1[2] + 0x48) + 0x18))();
  }
  puVar1[2] = lVar2;
  FUN__text__005a27b0(puVar1[1],lVar2);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  lVar2 = param_1[0x4b];
  param_1[0x4b] = (long)puVar1;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    (**(code **)(*(long *)param_1[0x4c] + 0x18))
              ((long *)param_1[0x4c],lVar2,param_1[0x4d],param_1[0x4e]);
  }
  param_1[0x4c] = (long)param_2;
  param_1[0x4d] = 0x18;
  param_1[0x4e] = 8;
  return;
}


