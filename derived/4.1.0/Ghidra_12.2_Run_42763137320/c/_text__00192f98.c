/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192f98; name: FUN_.text__00192f98
 */


void FUN__text__00192f98(long param_1,long *param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (param_3 < *(uint *)(param_1 + 8)) {
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x50,8);
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    param_1 = param_1 + (ulong)param_3 * 0x20;
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__00192dd4(lVar1,param_2,param_3,param_4);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 0x30);
      *(undefined8 *)(lVar2 + 0x30) = 0;
      if (lVar1 != 0) {
        FUN__text__0016f4b0(lVar1);
        (**(code **)(**(long **)(lVar2 + 0x38) + 0x18))
                  (*(long **)(lVar2 + 0x38),lVar1,*(undefined8 *)(lVar2 + 0x40),
                   *(undefined8 *)(lVar2 + 0x48));
      }
      puVar3 = *(undefined8 **)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))
                  (*(long **)(lVar2 + 0x18),puVar3,*(undefined8 *)(lVar2 + 0x20),
                   *(undefined8 *)(lVar2 + 0x28));
      }
      (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                (*(long **)(param_1 + 0x18),lVar2,*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28));
    }
    *(long **)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = 0x50;
    *(undefined8 *)(param_1 + 0x28) = 8;
  }
  return;
}


