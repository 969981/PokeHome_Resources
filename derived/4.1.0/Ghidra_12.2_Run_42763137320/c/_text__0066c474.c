/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c474; name: FUN_.text__0066c474
 */


char * FUN__text__0066c474(int param_1,char *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  size_t __n;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  __n = param_3 - 1;
  *param_2 = '\0';
  pcVar3 = strerror(param_1);
  if (pcVar3 == (char *)0x0) {
    FUN__text__006599c0(param_2,__n,0x71a561,param_1);
  }
  else {
    strncpy(param_2,pcVar3,__n);
  }
  param_2[__n] = '\0';
  pcVar3 = strrchr(param_2,10);
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)param_2)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(param_2,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)param_2)) {
    *pcVar3 = '\0';
  }
  if (*piVar2 != iVar1) {
    *piVar2 = iVar1;
  }
  return param_2;
}


