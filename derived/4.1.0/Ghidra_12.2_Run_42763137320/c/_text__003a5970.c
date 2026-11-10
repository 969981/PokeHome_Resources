/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5970; name: FUN_.text__003a5970
 */


void FUN__text__003a5970(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  
  plVar3 = *(long **)(param_1 + 8);
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x60,8);
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *puVar1 = 0x882780;
  puVar1[1] = 0;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  lVar4 = *(long *)(param_1 + 0x260);
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  if (lVar4 != 0) {
    FUN__text__003a6efc(lVar4);
    (**(code **)(**(long **)(param_1 + 0x268) + 0x18))
              (*(long **)(param_1 + 0x268),lVar4,*(undefined8 *)(param_1 + 0x270),
               *(undefined8 *)(param_1 + 0x278));
    puVar1 = *(undefined8 **)(param_1 + 0x260);
  }
  *(undefined8 *)(param_1 + 0x270) = 0x60;
  *(undefined8 *)(param_1 + 0x278) = 8;
  uStack_34 = *(undefined4 *)(param_1 + 0x290);
  *(long **)(param_1 + 0x268) = plVar3;
  local_38 = 1;
  FUN__text__003b56b4(puVar1,&local_38,*(undefined8 *)(param_1 + 8));
  if (0 < *(int *)(param_1 + 0x290)) {
    uVar2 = 0;
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    do {
      FUN__text__003b5bac(*(undefined8 *)(param_1 + 0x260),uVar2 & 0xffffffff,*puVar1,1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x290));
  }
  *(undefined4 *)(*(long *)(param_1 + 0x260) + 0x18) = 1;
  return;
}


