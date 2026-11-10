/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d1f68; name: FUN_.text__003d1f68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d1f68(undefined8 *param_1)

{
  size_t __n;
  void *__s;
  void *__s_00;
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = *(long **)(*_DAT_0089f3d8 + 0x288);
  __n = nn::util::GetGzipDecompressedSize
                  (*(void **)(param_1[0x27] + 400),*(ulong *)(param_1[0x27] + 0x180));
  __s = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,__n,1);
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    *(long **)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = plVar2;
    lVar1 = *(long *)(uVar3 + 0x98);
    *(long *)(uVar3 + 0x98) = lVar1 + 1;
    if (__n != 0) {
      memset(__s,0,__n);
      lVar1 = *(long *)(uVar3 + 0x98) + -1;
    }
    *(long *)(uVar3 + 0x98) = lVar1;
    __s_00 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x1bf8,1);
    if (*(long *)(uVar3 + 0x98) != 0x10) {
      *(long **)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = plVar2;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      memset(__s_00,0,0x1bf8);
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      uVar3 = nn::util::DecompressGzip
                        (__s,__n,*(void **)(param_1[0x27] + 400),*(ulong *)(param_1[0x27] + 0x180),
                         __s_00,0x1bf8);
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      FUN__text__005d619c(param_1 + 0x48,*param_1,__s,__n);
      (**(code **)(*plVar2 + 0x18))(plVar2,__s_00,0x1bf8,1);
      if (__s == (void *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003d20e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,__s,__n,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


