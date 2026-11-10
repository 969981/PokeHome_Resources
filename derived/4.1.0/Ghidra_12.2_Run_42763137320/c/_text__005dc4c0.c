/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc4c0; name: FUN_.text__005dc4c0
 */


undefined4 FUN__text__005dc4c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long local_48;
  
  FUN__text__005d8e38();
  uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN__text__005d8f14(param_1);
  lVar5 = param_1[0x32];
  iVar4 = *(int *)(lVar5 + 4);
  FUN__text__005dc600(param_1 + 0x36,iVar4);
  if (iVar4 != 0) {
    uVar6 = tpidr_el0;
    lVar5 = lVar5 + 8;
    uVar6 = uVar6 & 0xffffffffffffe000;
    do {
      FUN__text__00109fd4(&local_48,lVar5 + 10);
      lVar2 = local_48;
      plVar1 = (long *)param_1[0x37];
      if (plVar1 < (long *)param_1[0x38]) {
        if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_1[0x39];
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        local_48 = 0;
        *plVar1 = lVar2;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        param_1[0x37] = (long)(plVar1 + 1);
      }
      else {
        FUN__text__005dceb0(param_1 + 0x36,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
      }
      iVar4 = iVar4 + -1;
      lVar5 = (ulong)*(ushort *)(lVar5 + 8) + lVar5 + 10;
    } while (iVar4 != 0);
  }
  return uVar3;
}


