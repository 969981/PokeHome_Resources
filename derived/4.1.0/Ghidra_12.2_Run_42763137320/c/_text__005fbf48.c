/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fbf48; name: FUN_.text__005fbf48
 */


void FUN__text__005fbf48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)(param_2 + 0x30);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x58,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar3 + 0xb8))();
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *puVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar1[2] = *param_4;
  puVar1[3] = param_4[1];
  puVar1[4] = param_4[2];
  lVar2 = param_4[3];
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  puVar1[6] = param_4[4];
  puVar1[7] = param_4[5];
  puVar1[8] = param_4[6];
  puVar1[9] = param_4[7];
  lVar2 = param_4[8];
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


