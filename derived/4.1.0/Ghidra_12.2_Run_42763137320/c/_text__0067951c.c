/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067951c; name: FUN_.text__0067951c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN__text__0067951c(char *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  char *__s_00;
  char *__dest;
  size_t sVar5;
  Fqdn *__dest_00;
  Fqdn *__src;
  ulong local_70 [2];
  
  local_70[0] = 0;
  local_70[1] = 0;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  sVar3 = strlen(param_1);
  sVar3 = sVar3 + 0x100;
  __s = (char *)FUN__text__00678414(1,sVar3);
  if (__s == (char *)0x0) {
    __dest = (char *)0x0;
    __s_00 = (char *)0x0;
    lVar4 = 0;
  }
  else {
    lVar4 = FUN__text__00678414(1,sVar3);
    if (lVar4 == 0) {
      __dest = (char *)0x0;
      __s_00 = (char *)0x0;
    }
    else {
      __s_00 = (char *)FUN__text__00678414(1,sVar3);
      if (__s_00 == (char *)0x0) {
        __dest = (char *)0x0;
      }
      else {
        __dest = (char *)FUN__text__00678414(1,sVar3);
        if (__dest != (char *)0x0) {
          iVar1 = sscanf(param_1,(char *)0x71579c,local_70,__s_00,lVar4);
          if (iVar1 < 2) {
            local_70[0] = local_70[0] & 0xffffffffffffff00;
            iVar1 = sscanf(param_1,(char *)0x70d65a,__s_00,lVar4);
            if (iVar1 < 1) goto LAB__text__006796b4;
          }
          sVar5 = strlen(__s_00);
          if (sVar5 < 0x101) {
            __dest_00 = (Fqdn *)FUN__text__006783d4(0x100);
            memset(__dest_00,0,0x100);
            __src = (Fqdn *)FUN__text__006783d4(0x100);
            memset(__src,0,0x100);
            if ((__dest_00 == (Fqdn *)0x0) || (__src == (Fqdn *)0x0)) {
              FUN__text__00659c40(*_DAT_008a3818,0x71be0e,0);
              FUN__text__006783e4(__src);
              FUN__text__006783e4(__dest_00);
            }
            else {
              strncpy((char *)__dest_00,__s_00,0xff);
              __dest_00[0xff] = (Fqdn)0x0;
              uVar2 = nn::nsd::ResolveEx(__src,__dest_00);
              if (uVar2 == 0) {
                strncpy(__dest,(char *)__src,0xff);
                __dest[0xff] = '\0';
                FUN__text__006783e4(__src);
                FUN__text__006783e4(__dest_00);
              }
              else {
                uVar2 = uVar2 >> 9 & 0x1fff;
                FUN__text__00659c40(*_DAT_008a3818,0x71be4c,uVar2);
                FUN__text__006783e4(__src);
                FUN__text__006783e4(__dest_00);
                if (uVar2 != 0) goto LAB__text__006796b4;
              }
              if ((char)local_70[0] == '\0') {
                snprintf(__s,sVar3,(char *)0x70d014,__dest,lVar4);
              }
              else {
                snprintf(__s,sVar3,(char *)0x70d668,local_70,__dest,lVar4);
              }
            }
          }
        }
      }
    }
  }
LAB__text__006796b4:
  if (*__s == '\0') {
    strcpy(__s,param_1);
  }
  FUN__text__006783e4(__dest);
  FUN__text__006783e4(__s_00);
  FUN__text__006783e4(lVar4);
  return __s;
}


