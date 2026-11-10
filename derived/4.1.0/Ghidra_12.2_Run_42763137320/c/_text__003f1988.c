/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f1988; name: FUN_.text__003f1988
 */


void FUN__text__003f1988(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                        undefined8 *param_5)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_2 + 0x30);
  puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,0x90,8);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar5 + 0xb8))();
  }
  *param_1 = puVar2;
  param_1[1] = puVar5;
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *puVar5;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar2[2] = *param_4;
  uVar4 = *param_5;
  *param_5 = 0;
  puVar2[3] = uVar4;
  uVar4 = param_5[1];
  uVar1 = *(undefined2 *)(param_5 + 2);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 5) = uVar1;
  puVar2[4] = uVar4;
  uVar4 = param_5[6];
  *(undefined4 *)(puVar2 + 0xb) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2[9] = uVar4;
  puVar2[10] = 0;
  puVar2[6] = param_5[3];
  puVar2[7] = param_5[4];
  puVar2[8] = param_5[5];
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar4 = param_5[0xc];
  *(undefined4 *)(puVar2 + 0x11) = 0;
  puVar2[0xf] = uVar4;
  puVar2[0x10] = 0;
  puVar2[0xc] = param_5[9];
  puVar2[0xd] = param_5[10];
  puVar2[0xe] = param_5[0xb];
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[9] = 0;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  *puVar2 = 0;
  puVar2[1] = param_3;
  return;
}


