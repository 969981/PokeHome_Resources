/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e5610; name: FUN_.text__003e5610
 */


int FUN__text__003e5610(ulong *param_1,char *param_2,ulong param_3,char *param_4,undefined8 *param_5
                       )

{
  uint uVar1;
  int *piVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  piVar2 = __errno_location();
  *piVar2 = 0;
  uStack_58 = param_5[1];
  local_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  uVar1 = vsnprintf(param_2,param_3,param_4,&local_60);
  if ((int)uVar1 < 0) {
    return *piVar2;
  }
  if (param_1 != (ulong *)0x0) {
    *param_1 = (ulong)uVar1;
  }
  if (uVar1 < param_3) {
    return 0;
  }
  return 0x22;
}


