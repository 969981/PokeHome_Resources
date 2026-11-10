/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a6924; name: FUN_.text__003a6924
 */


undefined8 FUN__text__003a6924(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  if (((DAT_00ae83c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00ae83c8), iVar1 != 0)) {
    DAT_00ae83d0 = 0x10000000;
    DAT_00ae83d8 = 0xffffffff00000000;
    DAT_00ae83e0 = 0x40000000;
    DAT_00ae83e8 = 0x100000000;
    __cxa_guard_release(&DAT_00ae83c8);
  }
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 >> 0x20 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x284) = 2;
    lVar2 = param_1 + (long)*(int *)(*(long *)(param_1 + 0x260) + 8) * 0x20 + 0x2b8;
LAB__text__003a69b8:
    FUN__text__003c1e4c(lVar2);
    return 0;
  }
  if (((uVar4 >> 0x21 & 1) != 0) && (*(char *)(param_1 + 0x480) != '\0')) {
    *(undefined4 *)(param_1 + 0x284) = 3;
    FUN__text__005e927c(auStack_60,0x881d60);
    FUN__text__003c1e4c(auStack_60);
    if (local_48 == 0) {
      return 0;
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    return 0;
  }
  if (0 < (int)*(uint *)(param_1 + 0x290)) {
    uVar3 = 0;
    lVar2 = param_1 + 0x398;
    do {
      if ((*(ulong *)(param_1 + uVar3 * 8 + 0x228) & uVar4) != 0) {
        FUN__text__003a6480(param_1);
        *(undefined4 *)(param_1 + 0x284) = 2;
        goto LAB__text__003a69b8;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (*(uint *)(param_1 + 0x290) != uVar3);
  }
  if ((uVar4 & DAT_00ae83d0) != 0) {
    puVar5 = &DAT_00ae83d8;
    uVar4 = FUN__text__003b5efc(*(undefined8 *)(param_1 + 0x260),&DAT_00ae83d8);
    if ((uVar4 & 1) != 0) goto LAB__text__003a6adc;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if ((uVar4 & DAT_00ae83e0) != 0) {
    puVar5 = &DAT_00ae83e8;
    uVar4 = FUN__text__003b5efc(*(undefined8 *)(param_1 + 0x260),&DAT_00ae83e8);
    if ((uVar4 & 1) != 0) goto LAB__text__003a6adc;
  }
  if (((*(ulong *)(param_2 + 0x18) & DAT_00ae83d0) != 0) &&
     (uVar4 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x260),&DAT_00ae83d8), (uVar4 & 1) == 0)
     ) {
    puVar5 = &DAT_00ae83d8;
    uVar4 = FUN__text__003b5efc(*(undefined8 *)(param_1 + 0x260),&DAT_00ae83d8);
    if ((uVar4 & 1) != 0) goto LAB__text__003a6adc;
  }
  if (((*(ulong *)(param_2 + 0x18) & DAT_00ae83e0) != 0) &&
     (uVar4 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x260),&DAT_00ae83e8), (uVar4 & 1) == 0)
     ) {
    puVar5 = &DAT_00ae83e8;
    uVar4 = FUN__text__003b5efc(*(undefined8 *)(param_1 + 0x260),&DAT_00ae83e8);
    if ((uVar4 & 1) != 0) {
LAB__text__003a6adc:
      *(undefined4 *)(param_1 + 0x284) = 1;
      FUN__text__003c1e4c(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x288) = *puVar5;
      return 0;
    }
  }
  return 1;
}


