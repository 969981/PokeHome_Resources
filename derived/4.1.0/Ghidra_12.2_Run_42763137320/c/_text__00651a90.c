/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651a90; name: FUN_.text__00651a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00651a90(undefined8 param_1,char *param_2,long param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = param_3;
  if (param_3 == 0) {
    lVar7 = FUN__text__00678414(1,0x820);
    if (lVar7 == 0) {
      return 0;
    }
    pcVar6 = (char *)0x71982c;
    if (param_2 != (char *)0x0) {
      pcVar6 = param_2;
    }
    lVar4 = FUN__text__00678404(pcVar6);
    *(long *)(lVar7 + 0x800) = lVar4;
    if (lVar4 != 0) goto LAB__text__00651ac0;
    FUN__text__006783e4();
    __stream = (FILE *)0x0;
    bVar1 = true;
LAB__text__00651c4c:
    FUN__text__00652bfc(lVar7);
LAB__text__00651c54:
    lVar7 = 0;
    if ((bVar1) && (__stream != (FILE *)0x0)) {
      fclose(__stream);
      lVar7 = 0;
    }
  }
  else {
LAB__text__00651ac0:
    *(undefined1 *)(lVar7 + 0x808) = 0;
    if (param_2 == (char *)0x0) {
LAB__text__00651b0c:
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
    }
    else {
      iVar2 = strcmp(param_2,(char *)0x71b828);
      bVar1 = iVar2 != 0;
      if (iVar2 == 0) {
        __stream = (FILE *)*_DAT_008a6590;
      }
      else {
        if (*param_2 == '\0') goto LAB__text__00651b0c;
        __stream = fopen(param_2,(char *)0x71a413);
      }
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
      if (__stream != (FILE *)0x0) {
        lVar4 = FUN__text__006783d4(5000);
        if (lVar4 == 0) {
          FUN__text__006783e4();
          if (param_3 == 0) goto LAB__text__00651c4c;
          goto LAB__text__00651c54;
        }
        lVar5 = FUN__text__00652b6c(lVar4,5000,__stream);
        while (lVar5 != 0) {
          iVar3 = thunk_FUN__text__0066c2d8(0x70b1f4,lVar4,0xb);
          lVar5 = 0xb;
          if (iVar3 == 0) {
            lVar5 = 0;
          }
          for (pcVar6 = (char *)(lVar4 + lVar5); *pcVar6 == ' ' || *pcVar6 == '\t';
              pcVar6 = pcVar6 + 1) {
          }
          FUN__text__00651c70(param_1,lVar7,iVar3 != 0,1,pcVar6,0,0,1);
          lVar5 = FUN__text__00652b6c(lVar4,5000,__stream);
        }
        FUN__text__006783e4(lVar4);
        FUN__text__00652a04(lVar7);
        if (iVar2 != 0) {
          fclose(__stream);
        }
      }
    }
    *(undefined1 *)(lVar7 + 0x808) = 1;
  }
  return lVar7;
}


