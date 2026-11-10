/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c3440; name: FUN_.text__005c3440
 */


void FUN__text__005c3440(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) != 0x10) {
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *param_1;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    uVar1 = *(ulong *)(param_3 + 0x600);
    *(ulong *)(param_2 + 0x600) = uVar1;
    if (uVar1 < 4) {
      lVar5 = *(long *)(param_3 + 0x600);
      if (lVar5 != 0) {
        lVar2 = param_3;
        lVar3 = param_2;
        do {
          lVar5 = lVar5 + -1;
          FUN__text__005bff30(lVar3,lVar2);
          lVar2 = lVar2 + 0x200;
          lVar3 = lVar3 + 0x200;
        } while (lVar5 != 0);
      }
      lVar5 = *(long *)(param_3 + 0x610);
      *(long *)(param_2 + 0x610) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_3 + 0x618);
      *(long *)(param_2 + 0x618) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined4 *)(param_2 + 0x620) = *(undefined4 *)(param_3 + 0x620);
      lVar5 = *(long *)(param_3 + 0x628);
      *(long *)(param_2 + 0x628) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_3 + 0x630);
      *(long *)(param_2 + 0x630) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      memcpy((void *)(param_2 + 0x638),(void *)(param_3 + 0x638),0xa4);
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


