/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a37e8; name: FUN_.text__004a37e8
 */


undefined8 FUN__text__004a37e8(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN__text__004ada80(param_1 + 0xa8,CONCAT44(param_2[1],param_2[2]),0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x70) != 0) {
      *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + -1;
    }
    FUN__text__004a1f20(lVar3,0);
  }
  if (*param_2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x004a3848 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__004a3854 + (ulong)*(byte *)((ulong)*param_2 + 0x73d940) * 4))();
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 10);
  if (param_2[0xc] != 2) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 1;
  FUN__text__004adfa4(param_1 + 0xf8,uVar1,0,uVar4,1,uVar2);
  return 1;
}


