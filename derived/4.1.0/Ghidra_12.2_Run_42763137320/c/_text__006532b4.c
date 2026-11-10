/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006532b4; name: FUN_.text__006532b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006532b4(long param_1,int param_2)

{
  int iVar1;
  FILE *__stream;
  void *__base;
  long lVar2;
  long *plVar3;
  char *__s2;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0xca8) == 0) {
    if ((param_2 != 0) && (*(long *)(param_1 + 0xf58) != 0)) {
      FUN__text__0066bd88();
      *(undefined8 *)(param_1 + 0xf58) = 0;
    }
    FUN__text__00667a44(param_1,2,2);
    goto LAB__text__0065348c;
  }
  if (*(long *)(param_1 + 0xf58) != 0) {
    FUN__text__006519f0(param_1);
  }
  FUN__text__00667a44(param_1,2,2);
  lVar4 = *(long *)(param_1 + 0xf70);
  if (lVar4 == 0) goto LAB__text__0065348c;
  __s2 = *(char **)(param_1 + 0xca8);
  FUN__text__00652a04(lVar4);
  iVar1 = strcmp((char *)0x71b828,__s2);
  if (iVar1 == 0) {
    __stream = (FILE *)*_DAT_008a3810;
LAB__text__0065337c:
    fputs((char *)0x7161e1,__stream);
    if (*(long *)(lVar4 + 0x810) != 0) {
      __base = (void *)FUN__text__006783d4(*(long *)(lVar4 + 0x810) << 3);
      if (__base == (void *)0x0) {
LAB__text__0065346c:
        if (iVar1 != 0) {
          fclose(__stream);
        }
        goto LAB__text__00653478;
      }
      lVar2 = 0;
      uVar5 = 0;
      do {
        for (plVar3 = *(long **)(lVar4 + lVar2 * 8); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3
            ) {
          if (plVar3[5] != 0) {
            *(long **)((long)__base + uVar5 * 8) = plVar3;
            uVar5 = (ulong)((int)uVar5 + 1);
          }
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x100);
      qsort(__base,*(size_t *)(lVar4 + 0x810),8,(__compar_fn_t)&LAB__text__006535a4);
      if ((int)uVar5 != 0) {
        lVar4 = 0;
        do {
          lVar2 = FUN__text__006534d0(*(undefined8 *)((long)__base + lVar4));
          if (lVar2 == 0) {
            FUN__text__00659c40(__stream,0x712b72);
            FUN__text__006783e4(__base);
            goto LAB__text__0065346c;
          }
          FUN__text__00659c40(__stream,0x70e891,lVar2);
          FUN__text__006783e4(lVar2);
          lVar4 = lVar4 + 8;
        } while (uVar5 * 8 != lVar4);
      }
      FUN__text__006783e4(__base);
    }
    if (iVar1 != 0) {
      fclose(__stream);
    }
  }
  else {
    __stream = fopen(__s2,(char *)0x71df07);
    if (__stream != (FILE *)0x0) goto LAB__text__0065337c;
LAB__text__00653478:
    FUN__text__00666f74(param_1,0x71dee0,*(undefined8 *)(param_1 + 0xca8));
  }
LAB__text__0065348c:
  if (param_2 != 0) {
    if ((*(long *)(param_1 + 0xe8) == 0) ||
       (*(long *)(param_1 + 0xf70) != *(long *)(*(long *)(param_1 + 0xe8) + 0xa8))) {
      FUN__text__00652bfc();
    }
  }
  FUN__text__00667a8c(param_1,2);
  return;
}


