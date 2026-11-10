/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595ed0; name: FUN_.text__00595ed0
 */


void FUN__text__00595ed0(_func_void_void_ptr *param_1,void *param_2,int *param_3,ThreadType *param_4
                        ,char *param_5,long *param_6)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = (void *)(**(code **)(*param_6 + 0x20))
                             (param_6,*(undefined8 *)(param_3 + 2),0x1000,0x72057b,0xfe);
  *(void **)(param_4 + 0x1c0) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    uVar3 = *(ulong *)(param_3 + 2);
    *(int *)(param_4 + 0x1d0) = (int)uVar3;
    iVar1 = nn::os::CreateThread(param_4,param_1,param_2,pvVar2,uVar3 & 0xffffffff,*param_3);
    if (iVar1 == 0) {
      if (param_5 != (char *)0x0) {
        nn::os::SetThreadName(param_4,param_5);
      }
      nn::os::SetThreadCoreMask(param_4,param_3[4],*(ulong *)(param_3 + 6));
      nn::os::StartThread(param_4);
      return;
    }
    free(*(void **)(param_4 + 0x1c0));
    *(undefined8 *)(param_4 + 0x1c0) = 0;
  }
  return;
}


