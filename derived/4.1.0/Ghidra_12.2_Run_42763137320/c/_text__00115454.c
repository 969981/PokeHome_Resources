/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115454; name: FUN_.text__00115454
 */


undefined8 FUN__text__00115454(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long local_60 [3];
  long local_48;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar1 = *(uint *)(param_1 + 0x2230);
  if (uVar1 < 0x16c) {
    lVar3 = param_1 + (ulong)uVar1 * 0x18;
    plVar4 = (long *)(lVar3 + 0x18);
    if (*plVar4 == 0) {
      plVar2 = (long *)(lVar3 + 0x10);
      FUN__text__00109fd4(local_60,*(undefined8 *)(param_2 + 8));
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
      }
      *plVar2 = local_60[0];
      FUN__text__00112060(local_60,*(undefined8 *)(param_1 + 8));
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      }
      *plVar4 = local_60[0];
      if (local_60[0] != 0) {
        FUN__text__005e9290(local_60,plVar2);
        FUN__text__00158f14(local_60[0],local_60,param_3,1);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
        *(undefined4 *)(param_1 + (ulong)uVar1 * 0x18 + 0x20) = param_3;
        *(int *)(param_1 + 0x2230) = *(int *)(param_1 + 0x2230) + 1;
        return 1;
      }
    }
  }
  return 0;
}


