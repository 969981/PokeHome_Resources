/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8bfc; name: FUN_.text__003b8bfc
 */


void FUN__text__003b8bfc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x30,8);
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((uVar3 != 0) && (*(long *)(uVar3 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8 + -8);
    if (lVar2 != 0) goto LAB__text__003b8c88;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__003b8c88:
  puVar1[3] = lVar2;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  plVar4 = (long *)*param_1;
  *param_1 = puVar1;
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      plVar4[1] = lVar2;
      (**(code **)(*(long *)plVar4[3] + 0x18))((long *)plVar4[3],lVar2,plVar4[2] - lVar2,8);
    }
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],plVar4,param_1[2],param_1[3]);
  }
  param_1[1] = param_2;
  param_1[2] = 0x30;
  param_1[3] = 8;
  return;
}


