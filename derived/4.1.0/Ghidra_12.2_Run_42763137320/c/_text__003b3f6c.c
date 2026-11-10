/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b3f6c; name: FUN_.text__003b3f6c
 */


uint FUN__text__003b3f6c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar1 = *(uint *)(param_1 + 0x84);
  if (uVar1 < *(uint *)(param_1 + 0x88)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xb0) + 0x800);
    local_30 = *(undefined8 **)(lVar3 + 0x20);
    uVar2 = FUN__text__003b73fc(lVar3,&local_30);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x88) / uVar2;
    }
    if (*(uint *)(param_1 + 0x88) == uVar1 * uVar2) {
      *(undefined4 *)(param_1 + 0xb8) = 1;
      puVar4 = (undefined8 *)
               FUN__text__003b8e30(*(long *)(param_1 + 0xb0) + 0x788,*(undefined4 *)(param_1 + 0x80)
                                  );
      if (puVar4 != (undefined8 *)0x0) {
        uStack_28 = *puVar4;
        local_30 = &local_8;
        local_8 = 0;
        FUN__text__003aa1c0(*(undefined8 *)(param_1 + 0xb0),&local_30,0);
        FUN__text__003a14e8(local_8,0);
      }
    }
    uVar1 = *(int *)(param_1 + 0x88) - 1;
  }
  return uVar1;
}


