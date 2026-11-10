/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005be91c; name: FUN_.text__005be91c
 */


void FUN__text__005be91c(long param_1,uint *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  if ((ulong)*param_2 <
      (ulong)((*(long *)(param_1 + 0x7c0) - *(long *)(param_1 + 0x7b8) >> 3) * -0x5555555555555555))
  {
    lVar3 = *(long *)(param_1 + 0x7b8) + (ulong)*param_2 * 0x18;
    lVar1 = *(long *)(lVar3 + 8);
    *(undefined8 *)(lVar3 + 8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    if ((ulong)*param_2 <
        (ulong)((*(long *)(param_1 + 0x7c0) - *(long *)(param_1 + 0x7b8) >> 3) * -0x5555555555555555
               )) {
      lVar3 = *(long *)(param_1 + 0x7b8) + (ulong)*param_2 * 0x18;
      lVar1 = *(long *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      if (lVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x005be9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  pvVar2 = (void *)FUN__text__005c1b24(param_1 + 0x7b8);
  FUN__text__005be1c0();
  operator_delete(pvVar2);
  return;
}


