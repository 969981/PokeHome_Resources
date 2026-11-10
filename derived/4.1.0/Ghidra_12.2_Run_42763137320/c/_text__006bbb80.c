/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bbb80; name: FUN_.text__006bbb80
 */


undefined8
FUN__text__006bbb80(long *param_1,char *param_2,int param_3,undefined8 param_4,char *param_5,
                   char *param_6)

{
  ulong uVar1;
  char *__s;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined8 uVar2;
  char *__src;
  char acStack_e0 [128];
  
  __src = param_6;
  if ((param_5 != (char *)0x0) && (__n_00 = strlen(param_5), __n_00 != 0)) {
    __n_01 = strlen(param_6);
    uVar1 = __n_00 + __n_01 + 2;
    __src = acStack_e0 + (0x80 - (__n_00 + __n_01 + 0x11 & 0xfffffffffffffff0));
    __s = __src + __n_00;
    __n = 0;
    if (__n_00 <= uVar1) {
      __n = uVar1 - __n_00;
    }
    memset(__s,0,__n);
    memcpy(__src,param_5,__n_00);
    *__s = '%';
    memcpy(__s + 1,param_6,__n_01);
    (__s + 1)[__n_01] = '\0';
  }
  uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_4,__src);
  if (param_2 != (char *)0x0) {
    strncpy(param_2,__src,(long)param_3);
    param_2[(long)param_3 - 1] = '\0';
  }
  return uVar2;
}


