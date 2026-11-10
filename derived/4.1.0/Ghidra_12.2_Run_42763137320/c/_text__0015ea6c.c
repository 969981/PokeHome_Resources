/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015ea6c; name: FUN_.text__0015ea6c
 */


void FUN__text__0015ea6c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                        undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  puVar6 = (undefined8 *)(param_2 + 0x30);
  puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,0x150,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar6 + 0xb8))();
  }
  *param_1 = puVar2;
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *puVar6;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  *(undefined4 *)(puVar2 + 2) = *param_4;
  uVar3 = *param_5;
  *param_5 = 0;
  puVar2[4] = uVar3;
  uVar3 = param_5[1];
  uVar1 = *(undefined4 *)(param_5 + 2);
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 6) = uVar1;
  puVar2[5] = uVar3;
  if ((code *)param_5[7] != (code *)0x0) {
    (*(code *)param_5[7])(param_5 + 8,puVar2 + 0xc);
    uVar3 = param_5[5];
    puVar2[0xb] = param_5[7];
    uVar5 = param_5[6];
    puVar2[8] = param_5[4];
    puVar2[9] = uVar3;
    puVar2[10] = uVar5;
    pcVar4 = (code *)param_5[5];
    if (pcVar4 != (code *)0x0) {
      param_5[6] = 0;
      param_5[7] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      (*pcVar4)(param_5 + 8);
    }
  }
  puVar2[0x18] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x19] = 0;
  if ((code *)param_5[0x17] != (code *)0x0) {
    (*(code *)param_5[0x17])(param_5 + 0x18,puVar2 + 0x1c);
    uVar3 = param_5[0x15];
    puVar2[0x1b] = param_5[0x17];
    uVar5 = param_5[0x16];
    puVar2[0x18] = param_5[0x14];
    puVar2[0x19] = uVar3;
    puVar2[0x1a] = uVar5;
    pcVar4 = (code *)param_5[0x15];
    if (pcVar4 != (code *)0x0) {
      param_5[0x16] = 0;
      param_5[0x17] = 0;
      param_5[0x14] = 0;
      param_5[0x15] = 0;
      (*pcVar4)(param_5 + 0x18);
    }
  }
  puVar2[0x28] = param_5[0x24];
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = param_3;
  return;
}


