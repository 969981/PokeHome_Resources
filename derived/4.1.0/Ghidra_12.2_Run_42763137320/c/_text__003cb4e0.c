/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cb4e0; name: FUN_.text__003cb4e0
 */


void FUN__text__003cb4e0(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3b != 0) {
      FUN__text__003cb610(param_1);
                    /* WARNING: Subroutine does not return */
      FUN__text__001187c0(0x71a95e);
    }
    puVar1 = (undefined8 *)
             (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_4 << 5,8);
    if (puVar1 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
      param_1[2] = param_4 * 0x20;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      param_1[2] = (long)(puVar1 + param_4 * 4);
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar1;
    }
    if (param_2 != param_3) {
      uVar3 = tpidr_el0;
      uVar3 = uVar3 & 0xffffffffffffe000;
      lVar2 = *(long *)(uVar3 + 0x98);
      do {
        if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar3 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar1[2] = param_2[2];
        lVar2 = param_2[3];
        puVar1[3] = lVar2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        param_2 = param_2 + 4;
        puVar1 = puVar1 + 4;
        lVar2 = *(long *)(uVar3 + 0x98) + -1;
        *(long *)(uVar3 + 0x98) = lVar2;
      } while (param_2 != param_3);
    }
    param_1[1] = (long)puVar1;
  }
  return;
}


