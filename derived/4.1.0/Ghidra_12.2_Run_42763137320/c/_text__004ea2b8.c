/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea2b8; name: FUN_.text__004ea2b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ea2b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                        byte param_5)

{
  int iVar1;
  int *piVar2;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *param_1 = 0x88f390;
  param_1[1] = 0;
  FUN__text__004e7138(param_1 + 0xb);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_3 + 0x14);
  param_1[4] = param_3[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  piVar2 = (int *)*param_3;
  if (param_1[3] != 0) {
    FUN__text__0040c060();
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[3] = piVar2;
  param_1[6] = param_4;
  *(byte *)(param_1 + 7) = param_5 & 1;
  iVar1 = *(int *)(param_4 + 0x60);
  *(int *)(param_4 + 0x60) = iVar1 + 1;
  if ((iVar1 == 1) && (*(char *)(param_4 + 100) != '\0')) {
    FUN__text__004473d0(param_4);
  }
  FUN__text__00431e00(*_DAT_008a4658,param_1,param_1[6]);
  return;
}


