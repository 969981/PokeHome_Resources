/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0e74; name: FUN_.text__005a0e74
 */


void FUN__text__005a0e74(long *param_1,long *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  local_40 = 0;
  uStack_38 = 0;
  *param_1 = lVar2;
  thunk_FUN__text__006ec64c(lVar2 + 0x58,&local_40);
  FUN__text__006ee5ac(param_3,param_4 << 1,&local_40,
                      (long)*(int *)(*param_1 + 0xc4) * (long)*(int *)(*param_1 + 0xc0));
  FUN__text__006ee624(param_3,param_1 + 5,param_4 << 1);
  local_40 = 0;
  uStack_38 = 0;
  thunk_FUN__text__006ec64c(*param_1 + 200,&local_40);
  uVar1 = param_4 << 1 | 1;
  FUN__text__006ee5ac(param_3,uVar1,&local_40,
                      (long)*(int *)(*param_1 + 0xc4) * (long)*(int *)(*param_1 + 0xc0));
  FUN__text__006ee624(param_3,param_1 + 6,uVar1);
  return;
}


