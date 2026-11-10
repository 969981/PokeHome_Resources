/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006543a0; name: FUN_.text__006543a0
 */


void FUN__text__006543a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  int iVar1;
  long lVar2;
  undefined4 local_34;
  
  local_34 = 0;
  iVar1 = FUN__text__006569e8(2,param_1,&local_34);
  if (iVar1 < 1) {
    lVar2 = nnsocketGetHostByNameWithOptions(param_1,param_3,param_4);
    if (lVar2 != 0) {
      FUN__text__006517b4(lVar2,param_2);
    }
  }
  else {
    FUN__text__006518cc(2,&local_34,param_1,param_2);
  }
  return;
}


