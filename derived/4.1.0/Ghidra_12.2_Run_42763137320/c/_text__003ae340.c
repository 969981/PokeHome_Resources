/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae340; name: FUN_.text__003ae340
 */


void FUN__text__003ae340(long param_1,undefined4 param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 local_40;
  int iStack_3c;
  undefined8 local_38;
  
  if ((param_3 & 1) != 0) {
    FUN__text__003b3200(param_1,0);
  }
  iVar2 = FUN__text__003b7888(*(undefined8 *)(param_1 + 0x800),param_2);
  *(undefined1 *)(param_1 + 0x8fc) = 0;
  FUN__text__003b9180((float)iVar2,*(undefined8 *)(param_1 + 0x748));
  *(undefined1 *)(param_1 + 0x8fc) = 1;
  uVar3 = FUN__text__003b78c0(*(undefined8 *)(param_1 + 0x800),param_2,iVar2);
  FUN__text__003adcc0(param_1,uVar3,iVar2);
  puVar4 = (undefined8 *)**(long **)(param_1 + 0x788);
  puVar1 = (undefined8 *)(*(long **)(param_1 + 0x788))[1];
  if (puVar4 != puVar1) {
    do {
      if (((*(char *)(puVar4 + 1) == '\0') &&
          (iStack_3c = *(int *)((long)puVar4 + 0xc), iStack_3c != -1)) &&
         (*(code **)(param_1 + 0xc0) != (code *)0x0)) {
        local_38 = *puVar4;
        local_40 = *(undefined4 *)(puVar4 + 2);
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&iStack_3c,&local_38,&local_40);
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar1);
  }
  return;
}


