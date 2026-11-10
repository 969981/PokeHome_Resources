/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046bd8c; name: FUN_.text__0046bd8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046bd8c(long *param_1)

{
  undefined8 local_8;
  
  *param_1 = _DAT_008a4a90 + 0x10;
  local_8 = 0xffffffffffffffff;
  if (param_1[10] != 0) {
    FUN__text__0046c410(&DAT_00aea6f8,param_1);
    FUN__text__00469530(param_1[10],param_1,&local_8,1);
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN__text__00400fc0(0);
    param_1[0xb] = 0;
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  FUN__text__004335d0(param_1);
  return;
}


