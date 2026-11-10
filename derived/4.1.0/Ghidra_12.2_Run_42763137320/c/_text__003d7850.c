/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7850; name: FUN_.text__003d7850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d7850(long param_1,int *param_2)

{
  int iVar1;
  void *__s;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 0x72;
  }
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
  iVar1 = *param_2;
  *(undefined8 *)((long)__s + 0x238) = 0;
  *(undefined8 *)((long)__s + 0x230) = 0;
  if (iVar1 == 2) {
    *(undefined4 *)((long)__s + 0x21c) = 8;
    return 0;
  }
  if (iVar1 == 1) {
    *(undefined4 *)((long)__s + 0x21c) = 2;
    return 0;
  }
  *(undefined4 *)((long)__s + 0x21c) = 1;
  return 0;
}


