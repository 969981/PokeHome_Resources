/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3104; name: FUN_.text__005f3104
 */


void FUN__text__005f3104(long param_1,long param_2)

{
  ushort uVar1;
  void *__s;
  long lVar2;
  long *plVar3;
  size_t __n;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  plVar3 = *(long **)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_2 + 0x7a);
  uVar1 = *(ushort *)(param_2 + 0x78);
  *(ushort *)(param_1 + 0x78) = uVar1;
  __n = (ulong)uVar1 << 1;
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,__n,2);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar3;
  lVar2 = *(long *)(uVar4 + 0x98);
  *(long *)(uVar4 + 0x98) = lVar2 + 1;
  if (uVar1 != 0) {
    memset(__s,0,__n);
    lVar2 = *(long *)(uVar4 + 0x98) + -1;
  }
  *(long *)(uVar4 + 0x98) = lVar2;
  lVar2 = *(long *)(param_1 + 0x58);
  *(void **)(param_1 + 0x58) = __s;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),lVar2,*(undefined8 *)(param_1 + 0x68),
               *(undefined8 *)(param_1 + 0x70));
    __s = *(void **)(param_1 + 0x58);
  }
  *(long **)(param_1 + 0x60) = plVar3;
  *(size_t *)(param_1 + 0x68) = __n;
  *(undefined8 *)(param_1 + 0x70) = 2;
  if (__s != (void *)0x0) {
    FUN__text__005f3460(__s,*(undefined8 *)(param_2 + 0x58),*(undefined2 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  return;
}


