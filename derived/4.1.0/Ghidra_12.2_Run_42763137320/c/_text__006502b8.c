/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006502b8; name: FUN_.text__006502b8
 */


bool FUN__text__006502b8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 4;
  local_4 = 0;
  iVar1 = nnsocketGetSockOpt(param_1,0xffff,0x1007,&local_4,&local_8);
  if (iVar1 != 0) {
    local_4 = nnsocketGetLastErrno();
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_4;
  }
  return local_4 == 0 || local_4 == 0x6a;
}


