/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010ad14; name: FUN_.text__0010ad14
 */


void FUN__text__0010ad14(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)(param_2 + 0x30);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x50,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar3 + 0xb8))();
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *puVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar1[4] = 0x70f683;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xcbf29ce484222645;
  puVar1[3] = param_3[1];
  puVar1[4] = param_3[2];
  puVar1[5] = param_3[3];
  uVar2 = param_3[4];
  param_3[4] = 0;
  puVar1[6] = uVar2;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_3 + 5);
  if (puVar1[5] == 0) {
    uVar2 = *param_3;
  }
  else {
    if (puVar1[2] != 0) {
      (**(code **)(*(long *)(puVar1[2] + 0x48) + 0x18))();
      puVar1[2] = 0;
    }
    uVar2 = *param_3;
    *param_3 = 0;
  }
  puVar1[2] = uVar2;
  puVar1[8] = param_3[6];
  uVar2 = param_3[7];
  param_3[7] = 0;
  puVar1[9] = uVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = puVar1 + 2;
  if (puVar1[5] != 0) {
    puVar3 = puVar1 + 3;
  }
  uVar2 = *puVar3;
  *puVar1 = 0;
  puVar1[1] = uVar2;
  return;
}


