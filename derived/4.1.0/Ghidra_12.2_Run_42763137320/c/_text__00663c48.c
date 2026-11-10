/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663c48; name: FUN_.text__00663c48
 */


ulong FUN__text__00663c48(undefined8 param_1,long param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (param_2 < 10) {
    if (param_2 == 2) {
      uVar5 = FUN__text__0066c2d8(0x71afdb,param_1,2);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (param_4 != 0) {
        pcVar1 = param_3 + param_4;
        while( true ) {
          while (*param_3 == ' ' || *param_3 == '\t') {
            param_3 = param_3 + 1;
            if (param_3 == pcVar1) {
              return 1;
            }
          }
          if ((ulong)((long)pcVar1 - (long)param_3) < 8) break;
          iVar3 = FUN__text__0066c2d8(0x711327,param_3,8);
          if (iVar3 != 0) {
            param_3 = param_3 + 8;
            if (param_3 == pcVar1) {
              return 2;
            }
            while ((cVar2 = *param_3, cVar2 == '\t' || (cVar2 == ' '))) {
              param_3 = param_3 + 1;
              if (param_3 == pcVar1) {
                return 2;
              }
            }
            if (cVar2 == ',') {
              return 2;
            }
          }
          if (param_3 == pcVar1) {
            return 1;
          }
          while (pcVar7 = param_3 + 1, *param_3 != ',') {
            param_3 = pcVar7;
            if (pcVar7 == pcVar1) {
              return 1;
            }
          }
          param_3 = param_3 + 1;
          if (pcVar7 == pcVar1) {
            return 1;
          }
        }
      }
      return 1;
    }
    if (param_2 != 7) {
      return 0;
    }
    uVar4 = 0x71d37b;
    uVar6 = 7;
  }
  else if (param_2 == 10) {
    iVar3 = FUN__text__0066c2d8(0x71f898,param_1,10);
    if (iVar3 != 0) {
      return 1;
    }
    uVar4 = 0x70b25c;
    uVar6 = 10;
  }
  else if (param_2 == 0x10) {
    uVar4 = 0x71c6b9;
    uVar6 = 0x10;
  }
  else {
    if (param_2 != 0x11) {
      return 0;
    }
    uVar4 = 0x71819e;
    uVar6 = 0x11;
  }
  iVar3 = FUN__text__0066c2d8(uVar4,param_1,uVar6);
  return (ulong)(iVar3 != 0);
}


