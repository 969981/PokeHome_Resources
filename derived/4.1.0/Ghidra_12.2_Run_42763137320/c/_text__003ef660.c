/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ef660; name: FUN_.text__003ef660
 */


void FUN__text__003ef660(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_2 + 0x50);
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = puVar4;
    puVar2 = *(undefined8 **)(param_2 + 0x58);
    if (*(undefined8 **)(param_2 + 0x58) != puVar4) {
      do {
        pcVar3 = (code *)puVar2[-0x11];
        puVar1 = puVar2 + -0x12;
        if (pcVar3 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          *puVar1 = 0;
          puVar2[-0x11] = 0;
          (*pcVar3)(puVar2 + -0xe);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar4);
      puVar1 = *(undefined8 **)(param_2 + 0x50);
    }
    *(undefined8 **)(param_2 + 0x58) = puVar4;
    (**(code **)(**(long **)(param_2 + 0x68) + 0x18))
              (*(long **)(param_2 + 0x68),puVar1,*(long *)(param_2 + 0x60) - (long)puVar1,0x10);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = puVar4;
    puVar2 = *(undefined8 **)(param_2 + 0x28);
    if (*(undefined8 **)(param_2 + 0x28) != puVar4) {
      do {
        pcVar3 = (code *)puVar2[-0x11];
        puVar1 = puVar2 + -0x12;
        if (pcVar3 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          *puVar1 = 0;
          puVar2[-0x11] = 0;
          (*pcVar3)(puVar2 + -0xe);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar4);
      puVar1 = *(undefined8 **)(param_2 + 0x20);
    }
    *(undefined8 **)(param_2 + 0x28) = puVar4;
    (**(code **)(**(long **)(param_2 + 0x38) + 0x18))
              (*(long **)(param_2 + 0x38),puVar1,*(long *)(param_2 + 0x30) - (long)puVar1,0x10);
  }
  if (*(long *)(param_2 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}


