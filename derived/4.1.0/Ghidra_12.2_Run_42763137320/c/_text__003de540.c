/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003de540; name: FUN_.text__003de540
 */


void FUN__text__003de540(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  (**(code **)(param_1 + 0x20))(uVar4);
  FUN__text__003d7a74(uVar4);
  lVar3 = *(long *)(param_1 + 0x18);
  puVar2 = *(undefined4 **)(param_1 + 0x10) + lVar3 * 2;
  uVar1 = *puVar2;
  puVar2 = puVar2 + 1;
  while( true ) {
    if (uVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x003de5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__003de5cc + (ulong)*(byte *)((ulong)uVar1 + 0x73ab96) * 4))();
      return;
    }
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    *(long *)(param_1 + 0x18) = lVar3;
    uVar1 = puVar2[-3];
    puVar2 = puVar2 + -2;
  }
  **(undefined4 **)(param_1 + 0x10) = 0;
  *param_3 = 0x12;
  return;
}


