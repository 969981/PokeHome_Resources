/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065fb80; name: FUN_.text__0065fb80
 */


undefined8 FUN__text__0065fb80(long *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  lVar2 = 0x1620;
  if ((param_2 & 1) == 0) {
    lVar2 = 0x1628;
  }
  if (*param_3 != '\0') {
    lVar9 = *param_1;
    lVar3 = 0x168;
    if ((param_2 & 1) == 0) {
      lVar3 = 0x148;
    }
    lVar3 = lVar9 + lVar3 + 0x1100;
    do {
      iVar7 = thunk_FUN__text__0066c2d8(0x72064c,param_3,6);
      if (iVar7 == 0) {
        iVar7 = thunk_FUN__text__0066c2d8(0x71985c,param_3,5);
        if (iVar7 == 0) {
          iVar7 = thunk_FUN__text__0066c2d8(0x71f862,param_3,6);
          if (iVar7 == 0) goto LAB__text__0065fcec;
          *(ulong *)(lVar9 + lVar2) = *(ulong *)(lVar9 + lVar2) | 0x40;
          uVar8 = *(ulong *)(lVar3 + 0x10) | 0x40;
          bVar6 = *(long *)(lVar3 + 8) == 0x40;
        }
        else {
          *(ulong *)(lVar9 + lVar2) = *(ulong *)(lVar9 + lVar2) | 1;
          uVar8 = *(ulong *)(lVar3 + 0x10) | 1;
          bVar6 = *(long *)(lVar3 + 8) == 1;
        }
        *(ulong *)(lVar3 + 0x10) = uVar8;
        if (bVar6) {
          *(undefined8 *)(lVar3 + 0x10) = 0;
LAB__text__0065fcc8:
          FUN__text__00666f74(lVar9,0x710904);
          *(ushort *)(lVar9 + 0x15a4) = *(ushort *)(lVar9 + 0x15a4) | 0x20;
        }
      }
      else if ((*(byte *)(lVar3 + 0x10) >> 1 & 1) == 0) {
        uVar8 = FUN__text__006758a4();
        if ((uVar8 & 1) != 0) {
          *(ulong *)(lVar9 + lVar2) = *(ulong *)(lVar9 + lVar2) | 2;
          *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) | 2;
          iVar7 = FUN__text__006565a8(param_1,param_2 & 1,param_3);
          if (iVar7 != 0) goto LAB__text__0065fcc8;
        }
      }
      else {
        FUN__text__00666f74(lVar9,0x70e904);
      }
LAB__text__0065fcec:
      for (; (cVar4 = *param_3, cVar4 != '\0' && (cVar4 != ',')); param_3 = param_3 + 1) {
      }
      pcVar1 = param_3;
      if (cVar4 == ',') {
        pcVar1 = param_3 + 1;
      }
      cVar5 = *pcVar1;
      uVar8 = (ulong)(cVar4 == ',');
      while( true ) {
        if (cVar5 == '\0') {
          return 0;
        }
        iVar7 = FUN__text__0065680c();
        if (iVar7 == 0) break;
        cVar5 = param_3[uVar8 + 1];
        uVar8 = uVar8 + 1;
      }
      param_3 = param_3 + uVar8;
    } while (*param_3 != '\0');
  }
  return 0;
}


