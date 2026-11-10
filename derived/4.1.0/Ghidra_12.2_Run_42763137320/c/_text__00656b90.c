/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656b90; name: FUN_.text__00656b90
 */


void FUN__text__00656b90(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    if ((undefined8 *)*param_1 == param_2) {
      lVar2 = param_2[2];
      *param_1 = lVar2;
      if (lVar2 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(param_2[2] + 8) = 0;
      }
    }
    else {
      plVar1 = param_1;
      if (param_2[1] != 0) {
        plVar1 = (long *)(param_2[1] + 0x10);
      }
      *plVar1 = param_2[2];
      if (param_2[2] == 0) {
        param_1[1] = param_2[1];
      }
      else {
        *(undefined8 *)(param_2[2] + 8) = param_2[1];
      }
    }
    uVar3 = *param_2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[3] = param_1[3] + -1;
    if ((code *)param_1[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00656c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[2])(param_3,uVar3);
      return;
    }
  }
  return;
}


