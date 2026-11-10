/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4510; name: FUN_.text__003c4510
 */


void FUN__text__003c4510(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((long)param_1 + 0xe1) != '\0') {
    FUN__text__005f4f90(param_1[0x14],0,100);
    do {
      iVar1 = FUN__text__003c4594(param_1);
      *(int *)(param_1 + 0x16) = iVar1;
    } while (iVar1 == 1);
  }
  if (param_1[0x14] != 0) {
    FUN__text__0015dcf0(param_1[0x14],(int)param_1[0xf] != 4 && (int)param_1[0xf] != 1);
  }
  uVar2 = FUN__text__003c4594(param_1);
  *(undefined4 *)(param_1 + 0x16) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x003c4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


