/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae2a0; name: FUN_.text__003ae2a0
 */


void FUN__text__003ae2a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_40;
  int iStack_3c;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)**(long **)(param_1 + 0x788);
  puVar1 = (undefined8 *)(*(long **)(param_1 + 0x788))[1];
  if (puVar2 != puVar1) {
    do {
      if (((*(char *)(puVar2 + 1) == '\0') &&
          (iStack_3c = *(int *)((long)puVar2 + 0xc), iStack_3c != -1)) &&
         (*(code **)(param_1 + 0xc0) != (code *)0x0)) {
        local_38 = *puVar2;
        local_40 = *(undefined4 *)(puVar2 + 2);
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&iStack_3c,&local_38,&local_40);
      }
      puVar2 = puVar2 + 3;
    } while (puVar2 != puVar1);
  }
  return;
}


