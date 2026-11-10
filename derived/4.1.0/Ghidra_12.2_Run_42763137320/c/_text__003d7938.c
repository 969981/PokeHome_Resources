/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7938; name: FUN_.text__003d7938
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d7938(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *__s;
  
  __s = *(void **)(param_1 + 8);
  if (__s == (void *)0x0) {
    __s = operator_new(0x240,_DAT_008a37f8);
    if (__s == (void *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0xc;
    }
    memset(__s,0,0x208);
    *(undefined4 *)((long)__s + 0x200) = 0xffffffff;
    *(undefined8 *)((long)__s + 0x228) = 0x100000000;
    *(void **)(param_1 + 8) = __s;
    *(void **)((long)__s + 0x210) = __s;
    *(void **)((long)__s + 0x208) = __s;
    *(undefined8 *)((long)__s + 0x220) = 0;
    *(undefined8 *)((long)__s + 0x218) = 0;
    *(undefined4 *)((long)__s + 0x21c) = 1;
    *(undefined8 *)((long)__s + 0x238) = 0;
    *(undefined8 *)((long)__s + 0x230) = 0;
  }
  if (param_2 != 0) {
    if (*(long *)((long)__s + 0x220) != 0) {
      return 0x11;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 == *(long *)(param_2 + 0x18)) {
      FUN__text__003d6818(param_2);
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == *(long *)(param_2 + 0x18)) {
        if (*(char *)(param_2 + 0x39) == '\0') {
          return 0x16;
        }
        *(long *)((long)__s + 0x220) = param_2;
        return 0;
      }
    }
    if (*(char *)(param_2 + 0x39) != '\0') {
      cVar1 = *(char *)(*(long *)(param_2 + 0x28) + lVar3);
      *(long *)((long)__s + 0x220) = param_2;
      if ((cVar1 == -0x11) && (iVar2 = FUN__text__003d7a74(param_1), iVar2 == 0xfeff)) {
        FUN__text__003d7b98(param_1);
      }
      return 0;
    }
  }
  return 0x16;
}


