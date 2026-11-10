/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00674c60; name: FUN_.text__00674c60
 */


/* WARNING: Removing unreachable block (ram,0x00674f2c) */

int FUN__text__00674c60(undefined8 param_1,long *param_2,long *param_3,undefined1 *param_4,
                       undefined1 *param_5,char *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FILE *__stream;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  char *__s1;
  char *__s1_00;
  int iVar12;
  char acStack_1070 [4096];
  undefined8 local_70 [2];
  
  __s1_00 = (char *)*param_2;
  if (__s1_00 == (char *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = *__s1_00 != '\0';
  }
  __s1 = (char *)*param_3;
  if (param_6 == (char *)0x0) {
    lVar11 = FUN__text__00674c34(0x71b217);
    if (lVar11 == 0) {
      return 1;
    }
    pcVar9 = (char *)FUN__text__00659a28(0x71c4e8,lVar11,0x70eff8,0x717832);
    FUN__text__006783e4(lVar11);
    if (pcVar9 == (char *)0x0) {
      return -1;
    }
    __stream = fopen(pcVar9,(char *)0x71a413);
    FUN__text__006783e4(pcVar9);
  }
  else {
    __stream = fopen(param_6,(char *)0x71a413);
  }
  if (__stream == (FILE *)0x0) {
    return 1;
  }
  local_70[0] = 0;
  memset(acStack_1070,0,0x1000);
  bVar2 = false;
  bVar1 = false;
  iVar8 = 0;
  bVar4 = false;
  iVar7 = 0;
  iVar12 = 1;
  bVar3 = false;
  do {
    do {
      pcVar9 = fgets(acStack_1070,0x1000,__stream);
      if (pcVar9 == (char *)0x0) {
LAB__text__00674f38:
        if (iVar12 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          if (bVar3) {
            if (*param_2 != 0) {
              FUN__text__006783e4();
            }
            *param_2 = (long)__s1_00;
            *param_4 = 1;
          }
          if (bVar4) {
            if (*param_3 != 0) {
              FUN__text__006783e4();
            }
            iVar12 = 0;
            *param_3 = (long)__s1;
            *param_5 = 1;
          }
          else {
            iVar12 = 0;
          }
        }
        else {
          if (bVar3) {
            FUN__text__006783e4(__s1_00);
          }
LAB__text__00674f4c:
          if (bVar4) {
            FUN__text__006783e4(__s1);
          }
        }
LAB__text__00675038:
        fclose(__stream);
        return iVar12;
      }
      pcVar9 = (char *)FUN__text__0066c54c(acStack_1070,0x71c850,local_70);
    } while ((pcVar9 == (char *)0x0) || (*pcVar9 == '#'));
    do {
      if ((__s1_00 != (char *)0x0) &&
         (((*__s1_00 != '\0' && (__s1 != (char *)0x0)) && (*__s1 != '\0'))))
      goto LAB__text__00674f38;
      if (iVar7 == 2) {
        if (bVar1) {
          if (bVar5) {
            iVar8 = FUN__text__0066c234(__s1_00,pcVar9);
          }
          else if ((__s1_00 == (char *)0x0) || (iVar7 = strcmp(__s1_00,pcVar9), iVar7 != 0)) {
            if (bVar3) {
              FUN__text__006783e4(__s1_00);
            }
            __s1_00 = (char *)FUN__text__00678404(pcVar9);
            if (__s1_00 == (char *)0x0) {
              iVar12 = -1;
              goto LAB__text__00674f4c;
            }
            bVar3 = true;
          }
          bVar1 = false;
        }
        else if (bVar2) {
          bVar1 = false;
          if (iVar8 == 0) {
            bVar1 = bVar5;
          }
          if (bVar1) {
            bVar1 = false;
            bVar2 = false;
            iVar8 = 0;
          }
          else {
            if ((__s1 == (char *)0x0) || (iVar7 = strcmp(__s1,pcVar9), iVar7 != 0)) {
              if (bVar4) {
                FUN__text__006783e4(__s1);
              }
              __s1 = (char *)FUN__text__00678404(pcVar9);
              if (__s1 == (char *)0x0) {
                if (bVar3) {
                  FUN__text__006783e4(__s1_00);
                }
                iVar12 = -1;
                goto LAB__text__00675038;
              }
              bVar4 = true;
            }
            bVar1 = false;
            bVar2 = false;
          }
        }
        else {
          iVar7 = FUN__text__0066c234(0x713c81,pcVar9);
          if (iVar7 == 0) {
            iVar7 = FUN__text__0066c234(0x71ec14,pcVar9);
            if (iVar7 == 0) {
              iVar6 = FUN__text__0066c234(0x71c855,pcVar9);
              bVar1 = false;
              iVar7 = 1;
              if (iVar6 == 0) {
                iVar7 = 2;
              }
              bVar2 = false;
              if (iVar6 != 0) {
                iVar8 = 0;
              }
              goto LAB__text__00674f0c;
            }
            bVar1 = false;
            bVar2 = true;
          }
          else {
            bVar2 = false;
            bVar1 = true;
          }
        }
        iVar7 = 2;
      }
      else if (iVar7 == 1) {
        uVar10 = param_1;
LAB__text__00674e88:
        iVar7 = FUN__text__0066c234(uVar10,pcVar9);
        if (iVar7 != 0) {
          iVar12 = 0;
        }
        iVar7 = (uint)(iVar7 != 0) << 1;
      }
      else if (iVar7 == 0) {
        iVar7 = FUN__text__0066c234(0x71c855,pcVar9);
        if (iVar7 == 0) {
          uVar10 = 0x71735f;
          goto LAB__text__00674e88;
        }
        iVar7 = 1;
      }
LAB__text__00674f0c:
      pcVar9 = (char *)FUN__text__0066c54c(0,0x71c850,local_70);
    } while (pcVar9 != (char *)0x0);
  } while( true );
}


