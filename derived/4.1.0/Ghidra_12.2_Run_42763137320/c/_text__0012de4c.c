/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012de4c; name: FUN_.text__0012de4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0012de4c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_0089f7f0;
  lVar2 = param_1[0x29];
  param_1[0x29] = 0;
  param_1[-9] = lVar1 + 0x10;
  *param_1 = lVar1 + 0x68;
  param_1[1] = lVar1 + 0xa8;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],lVar2,param_1[0x2b],param_1[0x2c]);
  }
  FUN__text__00114698(param_1 + -9);
  return;
}


