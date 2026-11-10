/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a164; name: FUN_.text__0019a164
 */


void FUN__text__0019a164(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar3 = FUN__text__0019b770(*param_1);
  if (param_2 < uVar3) {
    if (*(ulong *)(*(long *)(*param_1 + 0x60) + 0xf8) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = (undefined8 *)(*(long *)(*(long *)(*param_1 + 0x60) + 0xf0) + (ulong)param_2 * 0x1c);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar5 = puVar4[2];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar4 + 3);
    *param_3 = uVar1;
    param_3[1] = uVar2;
    param_3[2] = uVar5;
  }
  return;
}


