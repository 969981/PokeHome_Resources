/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686a30; name: FUN_.text__00686a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN__text__00686a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  __s = (void *)FUN__text__006783d4(0x1f0);
  if (__s != (void *)0x0) {
    memset(__s,0,0x1f0);
    lVar2 = FUN__text__00678424(0x1000,param_1);
    *(long *)((long)__s + 0x1d0) = lVar2;
    if (lVar2 != 0) {
      nnosGetCurrentThread();
      uVar1 = nnosGetThreadPriority();
      uVar1 = nnosCreateThread(__s,_DAT_008a6628,__s,lVar2,param_1,uVar1);
      uVar3 = nnResultIsFailure(uVar1);
      if ((uVar3 & 1) == 0) {
        local_50 = 0;
        local_44 = 0xffffffff;
        uVar4 = nnosGetCurrentThread();
        nnosGetThreadCoreMask(&local_44,&local_50,uVar4);
        nnosSetThreadCoreMask(__s,local_44,local_50);
        if (param_4 != 0) {
          nnosSetThreadNamePointer(__s,param_4);
        }
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
      }
      uVar3 = nnResultIsFailure(uVar1);
      if ((uVar3 & 1) == 0) {
        return __s;
      }
      FUN__text__00686b98(__s);
      return (void *)0x0;
    }
    FUN__text__006783e4(__s);
  }
  nnResultIsFailure(0xffffffff);
  return (void *)0x0;
}


