/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215e18; name: FUN_.text__00215e18
 */


uint FUN__text__00215e18(uint *param_1,long *param_2,void *param_3,uint param_4,uint param_5,
                        undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  void *__s;
  long lVar3;
  size_t __n;
  ulong uVar4;
  
  __n = (size_t)param_4;
  FUN__text__00215d0c();
  if (param_4 == 0) {
    __n = 0;
  }
  else {
    *param_1 = param_4;
    __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,__n,1);
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    memset(__s,0,__n);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    lVar3 = *(long *)(param_1 + 2);
    *(void **)(param_1 + 2) = __s;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(param_1 + 4) + 0x18))
                (*(long **)(param_1 + 4),lVar3,*(undefined8 *)(param_1 + 6),
                 *(undefined8 *)(param_1 + 8));
    }
    *(long **)(param_1 + 4) = param_2;
    *(size_t *)(param_1 + 6) = __n;
    param_1[8] = 1;
    param_1[9] = 0;
  }
  memcpy(*(void **)(param_1 + 2),param_3,__n);
  param_1[10] = param_5;
  *(undefined1 *)(param_1 + 0xb) = param_6;
  uVar1 = FUN__text__005f53d0();
  FUN__text__005f54f0(0);
  uVar2 = FUN__text__00215fe0(param_1,param_2);
  FUN__text__005f54f0(uVar1 & 1);
  return uVar2 & 1;
}


