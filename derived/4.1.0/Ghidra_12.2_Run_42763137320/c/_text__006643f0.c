/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006643f0; name: FUN_.text__006643f0
 */


undefined8 FUN__text__006643f0(long *param_1,char *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *param_1;
  do {
    for (; (iVar3 = FUN__text__0065680c(*param_2), iVar3 != 0 || (cVar2 = *param_2, cVar2 == ','));
        param_2 = param_2 + 1) {
    }
    lVar4 = 0;
    lVar5 = 0;
    while ((cVar2 != '\0' && (cVar2 != ','))) {
      iVar3 = FUN__text__0065680c();
      cVar2 = param_2[lVar4 + 1];
      if (iVar3 == 0) {
        lVar5 = lVar4 + 1;
      }
      lVar4 = lVar4 + 1;
    }
    if ((param_3 == 0) || (lVar5 != 7)) {
      if (lVar5 != 0) goto LAB__text__006644bc;
    }
    else {
      iVar3 = FUN__text__0066c2d8(param_2,0x7108fc,7);
      if (iVar3 == 0) {
LAB__text__006644bc:
        plVar6 = (long *)&DAT_0089a108;
        puVar7 = (undefined8 *)&DAT_0089a090;
        do {
          iVar3 = FUN__text__0066c2d8(param_2,*plVar6,lVar5);
          if (((iVar3 != 0) && (*(char *)(*plVar6 + lVar5) == '\0')) ||
             ((plVar6[1] != 0 &&
              ((iVar3 = FUN__text__0066c2d8(param_2,plVar6[1],lVar5), iVar3 != 0 &&
               (*(char *)(plVar6[1] + lVar5) == '\0')))))) break;
          plVar6 = (long *)*puVar7;
          puVar7 = puVar7 + 1;
        } while (plVar6 != (long *)0x0);
        lVar5 = *(long *)(lVar8 + 0x1a0);
        if (lVar5 == 0) {
          lVar5 = FUN__text__00664588(param_1,0x89a0a8);
          *(long *)(lVar8 + 0x1a0) = lVar5;
          if (lVar5 == 0) {
            return 0x1b;
          }
        }
        plVar1 = (long *)0x89a0d8;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6;
        }
        lVar5 = FUN__text__00664588(param_1,plVar1,lVar5);
        if (lVar5 == 0) {
          return 0x1b;
        }
        *(long *)(lVar8 + 0x1a0) = lVar5;
      }
      else {
        *(ushort *)(lVar8 + 0x660) = *(ushort *)(lVar8 + 0x660) | 0x20;
        FUN__text__00664e80(param_1);
      }
    }
    param_2 = param_2 + lVar4;
    if (*param_2 == '\0') {
      return 0;
    }
  } while( true );
}


