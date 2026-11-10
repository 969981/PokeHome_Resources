/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444150; name: FUN_.text__00444150
 */


void FUN__text__00444150(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  undefined8 local_28;
  
  if ((*(int *)(param_1 + 0xc0) == 3) &&
     (uVar2 = FUN__text__0043eda0(*(undefined8 *)(param_1 + 0x68)), (uVar2 & 1) != 0)) {
    iVar1 = *(int *)(param_1 + 0xc4);
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0x78) != 0) {
        local_28 = 0x400000000;
        puVar3 = *(undefined8 **)(param_1 + 0x70);
        do {
          puVar4 = puVar3 + 1;
          FUN__text__00474488(*puVar3,&local_28,1);
          puVar3 = puVar4;
        } while (puVar4 != (undefined8 *)
                           (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x78) * 8));
      }
    }
    else {
      if (iVar1 == 1) {
        FUN__text__00444700(param_1);
        return;
      }
      if (((iVar1 == 0) && (*(char *)(param_1 + 0xde) != '\0')) && (*(long *)(param_1 + 0x30) != 0))
      {
        local_28 = 0x400000000;
        FUN__text__00474488(*(long *)(param_1 + 0x30),&local_28,1);
        return;
      }
    }
  }
  return;
}


